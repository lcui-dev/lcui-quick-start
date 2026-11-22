/** Generated from: global.css */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
static const struct {
        const char *chunk;
        size_t length;
} css_str_global_chunks[] = {
        { ".mx-1 {\r\n", 9 },
        { "  margin-left: 4px;\r\n", 21 },
        { "  margin-right: 4px;\r\n", 22 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".my-4 {\r\n", 9 },
        { "  margin-top: 16px;\r\n", 21 },
        { "  margin-bottom: 16px;\r\n", 24 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".mt-2 {\r\n", 9 },
        { "  margin-top: 8px;\r\n", 20 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".flex {\r\n", 9 },
        { "  display: flex;\r\n", 18 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".h-full {\r\n", 11 },
        { "  height: 100%;\r\n", 17 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".w-full {\r\n", 11 },
        { "  width: 100%;\r\n", 16 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".flex-col {\r\n", 13 },
        { "  flex-direction: column;\r\n", 27 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".items-center {\r\n", 17 },
        { "  align-items: center;\r\n", 24 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".justify-center {\r\n", 19 },
        { "  justify-content: center;\r\n", 28 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".rounded-t {\r\n", 14 },
        { "  border-top-left-radius: 4px;\r\n", 32 },
        { "  border-top-right-radius: 4px;\r\n", 33 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".bg-slate-200 {\r\n", 17 },
        { "  background-color: #e2e8f0;\r\n", 30 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".bg-white {\r\n", 13 },
        { "  background-color: #fff;\r\n", 27 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".px-6 {\r\n", 9 },
        { "  padding-left: 24px;\r\n", 23 },
        { "  padding-right: 24px;\r\n", 24 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".py-2 {\r\n", 9 },
        { "  padding-top: 8px;\r\n", 21 },
        { "  padding-bottom: 8px;\r\n", 24 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".pt-1 {\r\n", 9 },
        { "  padding-top: 4px;\r\n", 21 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".pt-6 {\r\n", 9 },
        { "  padding-top: 24px;\r\n", 22 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".text-center {\r\n", 16 },
        { "  text-align: center;\r\n", 23 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".text-2xl {\r\n", 13 },
        { "  font-size: 24px;\r\n", 20 },
        { "  line-height: 32px;\r\n", 22 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".text-sm {\r\n", 12 },
        { "  font-size: 14px;\r\n", 20 },
        { "  line-height: 20px;\r\n", 22 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".text-yellow-500 {\r\n", 20 },
        { "  color: #eab308;\r\n", 19 },
        { "}\r\n", 3 },
        { "\r\n", 2 },
        { ".container {\r\n", 14 },
        { "  max-width: 800px;\r\n", 21 },
        { "  margin: 0 auto;\r\n", 19 },
        { "  padding: 16px 24px;\r\n", 23 },
        { "}\r\n", 3 },
};
static const size_t css_str_global_total_length = 1049;
static inline void ui_load_css_string_global_chunks(void)
{
        size_t i;
        char *css = malloc(css_str_global_total_length + 1);
        char *dest;

        if (!css) {
                return;
        }
        dest = css;
        for (i = 0; i < sizeof(css_str_global_chunks) / sizeof(css_str_global_chunks[0]); ++i) {
                memcpy(dest, css_str_global_chunks[i].chunk, css_str_global_chunks[i].length);
                dest += css_str_global_chunks[i].length;
        }
        css[css_str_global_total_length] = 0;
        ui_load_css_string(css, "global.css");
        free(css);
}