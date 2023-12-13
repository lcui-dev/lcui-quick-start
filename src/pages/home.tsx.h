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
static const unsigned char widget_text_0[] = {0x45, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x61, 0x20, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x73, 0x61, 0x76, 0x65, 0x20, 0x69, 0x74, 0x2e, 0};
// UTF-8 encoded string from: Save
static const unsigned char widget_text_1[] = {0x53, 0x61, 0x76, 0x65, 0};
// UTF-8 encoded string from: Message%20has%20been%20saved!
static const unsigned char widget_text_2[] = {0x4d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x20, 0x68, 0x61, 0x73, 0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x73, 0x61, 0x76, 0x65, 0x64, 0x21, 0};

static void home_load_template(ui_widget_t *parent, home_refs_t *refs)
{
        ui_widget_t *w[3];

        ui_widget_add_class(parent, "container");
        w[0] = ui_create_widget("About");
        w[1] = ui_create_widget(NULL);
        ui_widget_add_class(w[1], "input-group");
        w[2] = ui_create_widget("text");
        ui_widget_set_text(w[2], (const char*)widget_text_0);
        refs->input_message = ui_create_widget("textinput");
        ui_widget_set_attr(refs->input_message, "placeholder", "eg: hello, world!");
        refs->btn_save_message = ui_create_widget("button");
        ui_widget_set_text(refs->btn_save_message, (const char*)widget_text_1);
        refs->feedback = ui_create_widget("text");
        ui_widget_add_class(refs->feedback, "feedback");
        ui_widget_set_text(refs->feedback, (const char*)widget_text_2);
        ui_widget_append(w[1], w[2]);
        ui_widget_append(w[1], refs->input_message);
        ui_widget_append(w[1], refs->btn_save_message);
        ui_widget_append(w[1], refs->feedback);
        ui_widget_append(parent, w[0]);
        ui_widget_append(parent, w[1]);
}
