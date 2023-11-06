#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__intertoken_token1 = 1,
  sym_comment = 2,
  sym_number = 3,
  anon_sym_POUND = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_character_token1 = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  anon_sym_BSLASH = 9,
  aux_sym_escape_sequence_token1 = 10,
  sym_symbol = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_program = 14,
  sym__token = 15,
  sym__intertoken = 16,
  sym__datum = 17,
  sym_character = 18,
  sym_string = 19,
  sym_escape_sequence = 20,
  sym_list = 21,
  aux_sym_program_repeat1 = 22,
  aux_sym_string_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [anon_sym_POUND] = "#",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_symbol] = "symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym__datum] = "_datum",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_list] = "list",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__intertoken_token1] = aux_sym__intertoken_token1,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_symbol] = sym_symbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym__datum] = sym__datum,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_list] = sym_list,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__intertoken_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__intertoken] = {
    .visible = false,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 18,
};

static inline bool aux_sym__intertoken_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '`'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || (c >= '"' && c <= '#')))
      : (c <= ')' || (c < ';'
        ? c == ','
        : (c <= ';' || (c >= '[' && c <= ']')))))
    : (c <= '`' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? (c >= '{' && c <= '}')
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 8287
        ? c == 8239
        : (c <= 8287 || c == 12288))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(12);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(6);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ';') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(17);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (aux_sym__intertoken_token1_character_set_1(lookahead)) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__intertoken_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(19),
    [sym__token] = STATE(4),
    [sym__intertoken] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_character] = STATE(4),
    [sym_string] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__intertoken_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_symbol] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym__intertoken_token1] = ACTIONS(17),
    [sym_comment] = ACTIONS(17),
    [sym_number] = ACTIONS(20),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym_symbol] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(15),
  },
  [3] = {
    [sym__token] = STATE(5),
    [sym__intertoken] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_character] = STATE(5),
    [sym_string] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym__intertoken_token1] = ACTIONS(32),
    [sym_comment] = ACTIONS(32),
    [sym_number] = ACTIONS(34),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_symbol] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(36),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym__intertoken_token1] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_number] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_symbol] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(40),
    [sym_comment] = ACTIONS(40),
    [sym_number] = ACTIONS(42),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_symbol] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 2,
      sym_number,
      sym_symbol,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14] = 2,
    ACTIONS(52), 2,
      sym_number,
      sym_symbol,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [28] = 2,
    ACTIONS(56), 2,
      sym_number,
      sym_symbol,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [42] = 2,
    ACTIONS(60), 2,
      sym_number,
      sym_symbol,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [56] = 2,
    ACTIONS(64), 2,
      sym_number,
      sym_symbol,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [70] = 4,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_string_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    STATE(13), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [84] = 4,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym_string_token1,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(12), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [98] = 4,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    STATE(12), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [112] = 1,
    ACTIONS(84), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [118] = 3,
    ACTIONS(86), 1,
      aux_sym_character_token1,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      sym_escape_sequence,
  [128] = 1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
  [132] = 1,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
  [136] = 1,
    ACTIONS(94), 1,
      aux_sym_escape_sequence_token1,
  [140] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
  [148] = 1,
    ACTIONS(98), 1,
      aux_sym_escape_sequence_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 14,
  [SMALL_STATE(8)] = 28,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 112,
  [SMALL_STATE(15)] = 118,
  [SMALL_STATE(16)] = 128,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 136,
  [SMALL_STATE(19)] = 140,
  [SMALL_STATE(20)] = 144,
  [SMALL_STATE(21)] = 148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sasm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
