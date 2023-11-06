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
            token(repeat1(common.whitespace)), $.comment),

        comment: $ => /;.*/,

        _datum: $ => choice(
            $.character,
            $.string,
            $.number,
            $.symbol,
            $.list),

        number: _ => token(repeat1(/[0-9]/)),
        character: $ => seq('#', '\'', choice($.escape_sequence, /[^'\\]/), '\''),
        string: $ => seq('"', repeat(choice($.escape_sequence, /[^"\\]+/)), '"'),

        escape_sequence: _ => seq("\\", /[0tnr'"\\]/),

        symbol: _ => token(hidden_node.symbol),

        list: $ => seq('(', repeat($._token), ')'),
    },
});
