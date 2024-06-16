#ifndef TREE_SITTER_SASM_H_
#define TREE_SITTER_SASM_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_sasm(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_SASM_H_
