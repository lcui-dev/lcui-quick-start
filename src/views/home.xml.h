/** This file is generated from home.xml */

#include <ui.h>

typedef struct {
        ui_widget_t *feedback;
        ui_widget_t *input_message;
        ui_widget_t *btn_save_message;
} home_refs_t;


static void home_load_template(ui_widget_t *home_parent, home_refs_t *refs)
{
        ui_widget_t *w[4];

        w[0] = ui_create_widget(NULL);
        ui_widget_add_class(w[0], "container");
        w[1] = ui_create_widget("about");
        w[2] = ui_create_widget(NULL);
        ui_widget_add_class(w[2], "input-group");
        w[3] = ui_create_widget("text");
        ui_widget_set_text(w[3], "Enter a message and save it.");
        refs->feedback = ui_create_widget("text");
        ui_widget_add_class(refs->feedback, "feedback");
        ui_widget_set_text(refs->feedback, "Message has been saved!");
        refs->input_message = ui_create_widget("textedit");
        ui_widget_set_attr(refs->input_message, "placeholder", "eg: hello, world!");
        refs->btn_save_message = ui_create_widget("button");
        ui_widget_set_text(refs->btn_save_message, "Save");
        ui_widget_append(w[2], w[3]);
        ui_widget_append(w[2], refs->feedback);
        ui_widget_append(w[2], refs->input_message);
        ui_widget_append(w[2], refs->btn_save_message);
        ui_widget_append(w[0], w[1]);
        ui_widget_append(w[0], w[2]);
        ui_widget_append(home_parent, w[0]);
}
