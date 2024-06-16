const PREC = {
    first: $ => prec(100, $),
    last: $ => prec(-100, $),
};

const common = {
    whitespace: /[ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}]/,
    intra_whitespace: /[\t\p{Zs}]/,
    line_ending: /[\n\r\u{2028}\u{0085}]|(\r\n)|(\r\u{0085})/,
    any_char: /.|[\r\n\u{85}\u{2028}\u{2029}]/,
    symbol_element: /[^ \r\n\t\f\v\p{Zs}\p{Zl}\p{Zp}#;"'`,(){}\[\]\\|]/,
};

const hidden_node = {
    symbol: token(repeat1(common.symbol_element)),
};

module.exports = grammar({
    name: "sasm",
    extras: _ => [],
    rules: {
        program: $ => repeat($._token),

        _token: $ => choice($._intertoken, $._datum),

        _intertoken: $ => choice(
            token(repeat1(common.whitespace)),
            $.comment,
            $.block_comment),

        comment: $ => /;.*/,

        block_comment: $ => seq("#|",
                                optional(repeat(choice(PREC.first($.block_comment), common.any_char))),
                                PREC.first("|#")),

        _datum: $ => choice(
            $.character,
            $.string,
            prec(100, $.number),
            $.symbol,
            $.array,
            //$.define,
            //$.defcon,
            //$.defvar,
            //$.include,
            $.list),

        number: $ => seq(optional(/[+-]/),
                               choice(/0x[0-9a-fA-F_]+/,
                                      /0o[0-7_]+/,
                                      /0b[01_]+/,
                                      /[0-9][0-9_]*/)),

        character: $ => seq("#'", choice($.escape_sequence, /[^'\\]/), '\''),

        string: $ => seq('"', repeat(choice($.escape_sequence, /[^"\\]+/)), '"'),

        escape_sequence: _ => seq("\\", /[0tnr'"\\]/),

        symbol: _ => token(repeat1(common.symbol_element)),

        array: $ => seq('#(', repeat(choice($._intertoken, $.number, $.character)), ')'),

        define: $ => seq(
            '(',
            "define",
            $.symbol,
            choice($.number, $.character),
            ')'
        ),

        //defcon: $ => seq('(', repeat($._intertoken), "defcon", repeat($._intertoken), $.symbol, repeat($._intertoken), choice($.string, $.array), repeat($._intertoken), ')'),
        //defvar: $ => seq('(', repeat($._intertoken), "defvar", repeat($._intertoken), $.symbol, repeat($._intertoken), choice($.string, $.array), repeat($._intertoken), ')'),
        //include: $ => seq('(', repeat($._intertoken), "include!", repeat($._intertoken), $.string, repeat($._intertoken), ')'),
        list: $ => seq('(', repeat($._token), ')'),
    },
});
