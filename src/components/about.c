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
        char version_str[32];

        about_load_template(w, &refs);
        ui_text_set_content_w(refs.name, APP_NAME);
        sprintf(version_str, "Version: %s", APP_VERSION);
        sprintf(lcui_version_str, "LCUI: %s", lcui_get_version());
        ui_text_set_content_w(refs.description, APP_DESCRIPTION);
        ui_text_set_content(refs.version, version_str);
        ui_text_set_content(refs.lcui_version, lcui_version_str);
        ui_widget_set_attr(refs.homepage, "href", APP_HOMEPAGE);
        ui_widget_set_attr(refs.bugs_url, "href", APP_BUGS_URL);
        ui_widget_add_class(w, "c-about");
}

void ui_register_about(void)
{
        about_init_prototype();
        about_proto->init = ui_about_init;
        about_load_resources();
}
