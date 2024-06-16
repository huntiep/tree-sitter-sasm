#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__intertoken_token1 = 1,
  sym_comment = 2,
  anon_sym_POUND_PIPE = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_PIPE_POUND = 5,
  aux_sym_number_token1 = 6,
  aux_sym_number_token2 = 7,
  aux_sym_number_token3 = 8,
  aux_sym_number_token4 = 9,
  aux_sym_number_token5 = 10,
  anon_sym_POUND_SQUOTE = 11,
  aux_sym_character_token1 = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  anon_sym_BSLASH = 16,
  aux_sym_escape_sequence_token1 = 17,
  sym_symbol = 18,
  anon_sym_POUND_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_LPAREN = 21,
  sym_program = 22,
  sym__token = 23,
  sym__intertoken = 24,
  sym_block_comment = 25,
  sym__datum = 26,
  sym_number = 27,
  sym_character = 28,
  sym_string = 29,
  sym_escape_sequence = 30,
  sym_array = 31,
  sym_list = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_block_comment_repeat1 = 34,
  aux_sym_string_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [sym_comment] = "comment",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [anon_sym_POUND_SQUOTE] = "#'",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [sym_symbol] = "symbol",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_number] = "number",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_array] = "array",
  [sym_list] = "list",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__intertoken_token1] = aux_sym__intertoken_token1,
  [sym_comment] = sym_comment,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_sequence_token1] = aux_sym_escape_sequence_token1,
  [sym_symbol] = sym_symbol,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_array] = sym_array,
  [sym_list] = sym_list,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
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
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
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
  [sym_array] = {
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
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
  [20] = 19,
  [21] = 9,
  [22] = 17,
  [23] = 18,
  [24] = 8,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 25,
  [32] = 29,
  [33] = 25,
  [34] = 29,
  [35] = 35,
  [36] = 35,
  [37] = 18,
  [38] = 38,
  [39] = 39,
  [40] = 8,
  [41] = 39,
  [42] = 42,
  [43] = 38,
  [44] = 44,
  [45] = 45,
  [46] = 42,
  [47] = 45,
};

static TSCharacterRange aux_sym__intertoken_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange sym_symbol_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'~', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x2fff},
  {0x3001, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 35,
        '#', 18,
        '\'', 34,
        '(', 45,
        ')', 44,
        ';', 14,
        '\\', 37,
        '|', 17,
        '+', 16,
        '-', 16,
        '0', 16,
        'n', 16,
        'r', 16,
        't', 16,
      );
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 35,
        '#', 4,
        '\'', 34,
        '(', 45,
        ')', 44,
        '0', 28,
        ';', 14,
        '+', 21,
        '-', 21,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(42);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(26);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(26);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(24);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_1, 17, lookahead))) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__intertoken_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(44),
    [sym__token] = STATE(5),
    [sym__intertoken] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_number] = STATE(5),
    [sym_character] = STATE(5),
    [sym_string] = STATE(5),
    [sym_array] = STATE(5),
    [sym_list] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__intertoken_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(11),
    [aux_sym_number_token5] = ACTIONS(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(17),
    [anon_sym_POUND_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym__intertoken_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [anon_sym_POUND_PIPE] = ACTIONS(28),
    [aux_sym_number_token1] = ACTIONS(31),
    [aux_sym_number_token2] = ACTIONS(34),
    [aux_sym_number_token3] = ACTIONS(34),
    [aux_sym_number_token4] = ACTIONS(34),
    [aux_sym_number_token5] = ACTIONS(34),
    [anon_sym_POUND_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_symbol] = ACTIONS(43),
    [anon_sym_POUND_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(49),
  },
  [3] = {
    [sym__token] = STATE(4),
    [sym__intertoken] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_number] = STATE(4),
    [sym_character] = STATE(4),
    [sym_string] = STATE(4),
    [sym_array] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [aux_sym__intertoken_token1] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(11),
    [aux_sym_number_token5] = ACTIONS(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(54),
    [anon_sym_POUND_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(21),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(11),
    [aux_sym_number_token5] = ACTIONS(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(60),
    [anon_sym_POUND_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(21),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_number] = STATE(2),
    [sym_character] = STATE(2),
    [sym_string] = STATE(2),
    [sym_array] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym__intertoken_token1] = ACTIONS(58),
    [sym_comment] = ACTIONS(58),
    [anon_sym_POUND_PIPE] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [aux_sym_number_token3] = ACTIONS(11),
    [aux_sym_number_token4] = ACTIONS(11),
    [aux_sym_number_token5] = ACTIONS(11),
    [anon_sym_POUND_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_symbol] = ACTIONS(60),
    [anon_sym_POUND_LPAREN] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(68), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [20] = 8,
    ACTIONS(72), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(74), 1,
      aux_sym_number_token1,
    ACTIONS(78), 1,
      aux_sym_number_token5,
    ACTIONS(80), 1,
      anon_sym_POUND_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(70), 2,
      aux_sym__intertoken_token1,
      sym_comment,
    ACTIONS(76), 3,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    STATE(15), 5,
      sym__intertoken,
      sym_block_comment,
      sym_number,
      sym_character,
      aux_sym_array_repeat1,
  [52] = 2,
    ACTIONS(86), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [72] = 2,
    ACTIONS(90), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [92] = 2,
    ACTIONS(94), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [112] = 8,
    ACTIONS(99), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(108), 1,
      aux_sym_number_token5,
    ACTIONS(111), 1,
      anon_sym_POUND_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 2,
      aux_sym__intertoken_token1,
      sym_comment,
    ACTIONS(105), 3,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    STATE(11), 5,
      sym__intertoken,
      sym_block_comment,
      sym_number,
      sym_character,
      aux_sym_array_repeat1,
  [144] = 2,
    ACTIONS(118), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [164] = 2,
    ACTIONS(122), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [184] = 2,
    ACTIONS(126), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [204] = 8,
    ACTIONS(72), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(74), 1,
      aux_sym_number_token1,
    ACTIONS(78), 1,
      aux_sym_number_token5,
    ACTIONS(80), 1,
      anon_sym_POUND_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(128), 2,
      aux_sym__intertoken_token1,
      sym_comment,
    ACTIONS(76), 3,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
    STATE(11), 5,
      sym__intertoken,
      sym_block_comment,
      sym_number,
      sym_character,
      aux_sym_array_repeat1,
  [236] = 2,
    ACTIONS(134), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [256] = 2,
    ACTIONS(138), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [276] = 2,
    ACTIONS(142), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [296] = 2,
    ACTIONS(146), 6,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      sym_symbol,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LPAREN,
  [316] = 2,
    ACTIONS(146), 1,
      aux_sym_number_token5,
    ACTIONS(144), 9,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_POUND_SQUOTE,
      anon_sym_RPAREN,
  [331] = 2,
    ACTIONS(90), 1,
      aux_sym_number_token5,
    ACTIONS(88), 9,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_POUND_SQUOTE,
      anon_sym_RPAREN,
  [346] = 2,
    ACTIONS(138), 1,
      aux_sym_number_token5,
    ACTIONS(136), 9,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_POUND_SQUOTE,
      anon_sym_RPAREN,
  [361] = 2,
    ACTIONS(142), 1,
      aux_sym_number_token5,
    ACTIONS(140), 9,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_POUND_SQUOTE,
      anon_sym_RPAREN,
  [376] = 2,
    ACTIONS(86), 1,
      aux_sym_number_token5,
    ACTIONS(84), 9,
      aux_sym__intertoken_token1,
      sym_comment,
      anon_sym_POUND_PIPE,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_POUND_SQUOTE,
      anon_sym_RPAREN,
  [391] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(150), 1,
      aux_sym_block_comment_token1,
    ACTIONS(152), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [405] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    ACTIONS(158), 1,
      anon_sym_BSLASH,
    STATE(30), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [419] = 4,
    ACTIONS(160), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(163), 1,
      aux_sym_block_comment_token1,
    ACTIONS(166), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [433] = 4,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      aux_sym_string_token1,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [447] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(176), 1,
      aux_sym_block_comment_token1,
    ACTIONS(178), 1,
      anon_sym_PIPE_POUND,
    STATE(25), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [461] = 4,
    ACTIONS(158), 1,
      anon_sym_BSLASH,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_string_token1,
    STATE(28), 2,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [475] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(150), 1,
      aux_sym_block_comment_token1,
    ACTIONS(184), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [489] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(186), 1,
      aux_sym_block_comment_token1,
    ACTIONS(188), 1,
      anon_sym_PIPE_POUND,
    STATE(31), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [503] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(150), 1,
      aux_sym_block_comment_token1,
    ACTIONS(190), 1,
      anon_sym_PIPE_POUND,
    STATE(27), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [517] = 4,
    ACTIONS(148), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(192), 1,
      aux_sym_block_comment_token1,
    ACTIONS(194), 1,
      anon_sym_PIPE_POUND,
    STATE(33), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [531] = 2,
    ACTIONS(198), 1,
      aux_sym_number_token5,
    ACTIONS(196), 3,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [540] = 2,
    ACTIONS(202), 1,
      aux_sym_number_token5,
    ACTIONS(200), 3,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [549] = 2,
    ACTIONS(142), 1,
      aux_sym_block_comment_token1,
    ACTIONS(140), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [557] = 1,
    ACTIONS(204), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [563] = 3,
    ACTIONS(206), 1,
      aux_sym_character_token1,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    STATE(47), 1,
      sym_escape_sequence,
  [573] = 2,
    ACTIONS(86), 1,
      aux_sym_block_comment_token1,
    ACTIONS(84), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [581] = 3,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_character_token1,
    STATE(45), 1,
      sym_escape_sequence,
  [591] = 1,
    ACTIONS(212), 1,
      aux_sym_escape_sequence_token1,
  [595] = 1,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
  [599] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [603] = 1,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
  [607] = 1,
    ACTIONS(218), 1,
      aux_sym_escape_sequence_token1,
  [611] = 1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 419,
  [SMALL_STATE(28)] = 433,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 461,
  [SMALL_STATE(31)] = 475,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 531,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 563,
  [SMALL_STATE(40)] = 573,
  [SMALL_STATE(41)] = 581,
  [SMALL_STATE(42)] = 591,
  [SMALL_STATE(43)] = 595,
  [SMALL_STATE(44)] = 599,
  [SMALL_STATE(45)] = 603,
  [SMALL_STATE(46)] = 607,
  [SMALL_STATE(47)] = 611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sasm(void) {
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
