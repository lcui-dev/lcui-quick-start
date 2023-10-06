/** This file is generated from home.tsx */

#include <ui.h>

typedef struct {
        ui_widget_t *input_message;
        ui_widget_t *btn_save_message;
        ui_widget_t *feedback;
} home_refs_t;


static ui_widget_prototype_t *home_proto;

static void home_init_prototype(void)
{
        home_proto = ui_create_widget_prototype("Home", NULL);
}

// UTF-8 encoded string from: Enter%20a%20message%20and%20save%20it.
static const char widget_text_0[] = {69, 110, 116, 101, 114, 32, 97, 32, 109, 101, 115, 115, 97, 103, 101, 32, 97, 110, 100, 32, 115, 97, 118, 101, 32, 105, 116, 46, 0};
// UTF-8 encoded string from: Save
static const char widget_text_1[] = {83, 97, 118, 101, 0};
// UTF-8 encoded string from: Message%20has%20been%20saved!
static const char widget_text_2[] = {77, 101, 115, 115, 97, 103, 101, 32, 104, 97, 115, 32, 98, 101, 101, 110, 32, 115, 97, 118, 101, 100, 33, 0};

static void home_load_template(ui_widget_t *parent, home_refs_t *refs)
{
        ui_widget_t *w[3];

        ui_widget_add_class(parent, "container");
        w[0] = ui_create_widget("About");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "input-group");
        w[2] = ui_create_widget("text");
        ui_widget_set_text(w[2], widget_text_0);
        refs->input_message = ui_create_widget("textinput");
        ui_widget_set_attr(refs->input_message, "placeholder", "eg: hello, world!");
        refs->btn_save_message = ui_create_widget("button");
        ui_widget_set_text(refs->btn_save_message, widget_text_1);
        refs->feedback = ui_create_widget("text");
        ui_widget_add_class(refs->feedback, "feedback");
        ui_widget_set_text(refs->feedback, widget_text_2);
        ui_widget_append(w[1], w[2]);
        ui_widget_append(w[1], refs->input_message);
        ui_widget_append(w[1], refs->btn_save_message);
        ui_widget_append(w[1], refs->feedback);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[1]);
}
