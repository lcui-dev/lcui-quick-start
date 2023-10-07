#include "config.h"
#include "about.h"
#include "about.tsx.h"
#include <LCUI/app.h>
#include <ui_widgets.h>
#include <stdio.h>

static ui_widget_prototype_t *about_proto;

void ui_about_init(ui_widget_t *w)
{
        about_refs_t refs;
        char lcui_version_str[32];

        about_load_template(w, &refs);
        sprintf(lcui_version_str, "LCUI: %s", lcui_get_version());
        ui_text_set_content(refs.lcui_version, lcui_version_str);
}

void ui_register_about(void)
{
        about_init_prototype();
        about_proto->init = ui_about_init;
        about_load_resources();
}
