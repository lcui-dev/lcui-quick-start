/** This file is generated from about.xml */

#include <ui.h>

typedef struct {
        ui_widget_t *name;
        ui_widget_t *version;
        ui_widget_t *lcui_version;
        ui_widget_t *description;
        ui_widget_t *homepage;
        ui_widget_t *bugs_url;
} about_refs_t;


static void about_load_template(ui_widget_t *about_parent, about_refs_t *refs)
{
        ui_widget_t *w[4];

        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "c-about__item");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "c-about__icon");
        refs->name = ui_create_widget("text");
        ui_widget_add_class(refs->name, "c-about__name");
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], refs->name);
        w[2] = ui_create_widget(NULL);
        ui_widget_add_class(w[2], "c-about__item");
        w[3] = ui_create_widget(NULL);
        ui_widget_add_class(w[3], "c-about__meta");
        refs->version = ui_create_widget("text");
        refs->lcui_version = ui_create_widget("text");
        ui_widget_append(w[3], refs->version);
        ui_widget_append(w[3], refs->lcui_version);
        refs->description = ui_create_widget("text");
        ui_widget_append(w[2], w[3]);
        ui_widget_append(w[2], refs->description);
        refs->homepage = ui_create_widget("a");
        ui_widget_add_class(refs->homepage, "c-about__item");
        ui_widget_set_text(refs->homepage, "Visit homepage");
        refs->bugs_url = ui_create_widget("a");
        ui_widget_add_class(refs->bugs_url, "c-about__item");
        ui_widget_set_text(refs->bugs_url, "Report an issue");
        ui_widget_append(about_parent, w[0]);
        ui_widget_append(about_parent, w[2]);
        ui_widget_append(about_parent, refs->homepage);
        ui_widget_append(about_parent, refs->bugs_url);
}
