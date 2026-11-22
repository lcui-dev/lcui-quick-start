/** Generated from: styles.module.scss */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
static const struct {
        const char *chunk;
        size_t length;
} css_str_styles_module_chunks[] = {
        { "._about_1hw5p_1 {\n", 18 },
        { "  background-color: #fff;\n", 26 },
        { "  border-radius: 5px;\n", 22 },
        { "  box-shadow: 0 1px 4px rgba(0, 0, 0, 0.2);\n", 44 },
        { "  margin-bottom: 10px;\n", 23 },
        { "}\n", 2 },
        { "\n", 1 },
        { "._item_1hw5p_8 {\n", 17 },
        { "  padding: 10px 20px;\n", 22 },
        { "  border-bottom: 1px solid #eee;\n", 33 },
        { "}\n", 2 },
        { "._item_1hw5p_8:last-child {\n", 28 },
        { "  border-bottom: 0;\n", 20 },
        { "}\n", 2 },
        { "\n", 1 },
        { "a._item_1hw5p_8 {\n", 18 },
        { "  display: flex;\n", 17 },
        { "  justify-content: space-between;\n", 34 },
        { "  align-items: center;\n", 23 },
        { "}\n", 2 },
        { "a._item_1hw5p_8:hover {\n", 24 },
        { "  background-color: #fafafa;\n", 29 },
        { "}\n", 2 },
        { "a._item_1hw5p_8:active {\n", 25 },
        { "  background-color: #f8faff;\n", 29 },
        { "}\n", 2 },
        { "\n", 1 },
        { "._meta_1hw5p_28 {\n", 18 },
        { "  margin-top: 10px;\n", 20 },
        { "}\n", 2 },
        { "._meta_1hw5p_28 text {\n", 23 },
        { "  color: #5f6368;\n", 18 },
        { "  font-size: 12px;\n", 19 },
        { "}\n", 2 },
        { "\n", 1 },
        { "._icon_1hw5p_36 {\n", 18 },
        { "  width: 32px;\n", 15 },
        { "  height: 32px;\n", 16 },
        { "  margin-right: 10px;\n", 22 },
        { "  display: inline-block;\n", 25 },
        { "  background-size: contain;\n", 28 },
        { "  background-position: center;\n", 31 },
        { "  background-image: url(assets\\logo.8da28495.png);\n", 51 },
        { "}\n", 2 },
        { "\n", 1 },
        { "._name_1hw5p_46 {\n", 18 },
        { "  font-size: 20px;\n", 19 },
        { "  display: inline-block;\n", 25 },
        { "  vertical-align: middle;\n", 26 },
        { "}", 1 },
};
static const size_t css_str_styles_module_total_length = 868;
static inline void ui_load_css_string_styles_module_chunks(void)
{
        size_t i;
        char *css = malloc(css_str_styles_module_total_length + 1);
        char *dest;

        if (!css) {
                return;
        }
        dest = css;
        for (i = 0; i < sizeof(css_str_styles_module_chunks) / sizeof(css_str_styles_module_chunks[0]); ++i) {
                memcpy(dest, css_str_styles_module_chunks[i].chunk, css_str_styles_module_chunks[i].length);
                dest += css_str_styles_module_chunks[i].length;
        }
        css[css_str_styles_module_total_length] = 0;
        ui_load_css_string(css, "styles.module.scss");
        free(css);
}