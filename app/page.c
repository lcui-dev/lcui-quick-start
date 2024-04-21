#include "page.tsx.h"
#include "page.h"

typedef struct {
        root_page_react_t base;
        // Add additional states to your component here
        // ...
} root_page_t;

static void root_page_init(ui_widget_t *w)
{
        ui_widget_add_data(w, root_page_proto, sizeof(root_page_t));
        root_page_react_init(w);
        // Write the initialization code for your component here
        // such as state initialization, event binding, etc
        // ...
}

static void root_page_destroy(ui_widget_t *w)
{
        // Write code here to destroy the relevant resources of the component
        // ...

        root_page_react_destroy(w);
}

void root_page_update(ui_widget_t *w)
{
        root_page_react_update(w);
        // Write code here to update other content of your component
        // ...
}

ui_widget_t *ui_create_root_page(void)
{
        return ui_create_widget_with_prototype(root_page_proto);
}

void ui_register_root_page(void)
{
        root_page_init_prototype();
        root_page_proto->init = root_page_init;
        root_page_proto->destroy = root_page_destroy;
}
