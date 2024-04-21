#include "page.tsx.h"
#include "page.h"

typedef struct {
        about_page_react_t base;
        // Add additional states to your component here
        // ...
} about_page_t;

static void about_page_init(ui_widget_t *w)
{
        ui_widget_add_data(w, about_page_proto, sizeof(about_page_t));
        about_page_react_init(w);
        // Write the initialization code for your component here
        // such as state initialization, event binding, etc
        // ...
}

static void about_page_destroy(ui_widget_t *w)
{
        // Write code here to destroy the relevant resources of the component
        // ...

        about_page_react_destroy(w);
}

void about_page_update(ui_widget_t *w)
{
        about_page_react_update(w);
        // Write code here to update other content of your component
        // ...
}

ui_widget_t *ui_create_about_page(void)
{
        return ui_create_widget_with_prototype(about_page_proto);
}

void ui_register_about_page(void)
{
        about_page_init_prototype();
        about_page_proto->init = about_page_init;
        about_page_proto->destroy = about_page_destroy;
}
