# tree-sitter-sasm

A tree-sitter parser for S Assembler. Supports highlights for Neovim.

### Install
Add to your `init.lua`:
```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.sasm = {
    install_info = {
        url = "https://github.com/huntiep/tree-sitter-sasm",
        files = {"src/parser.c"},
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
    filetype = "sasm",
}

vim.filetype.add({
    extension = {
        sasm = 'sasm',
    }
})
```
Clone the repository and cd into it, then copy the queries directory to the nvim-treesitter directory
(something like `~/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/sasm`).

Yes this is dumb, go yell at nvim-treesitter. Why isn't this just an install_info config option?
