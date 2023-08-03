/** This file is generated from app.xml */

#include <ui.h>

static const char *css_str_0 = "\
.c-about {\
  background-color: #fff;\
  border-radius: 5px;\
  box-shadow: 0 1px 4px rgba(0, 0, 0, 0.2);\
  margin-bottom: 10px;\
}\
\
.c-about__item {\
  padding: 10px 20px;\
  border-bottom: 1px solid #eee;\
}\
.c-about__item:last-child {\
  border-bottom: 0;\
}\
\
a.c-about__item:hover {\
  background-color: #fafafa;\
}\
a.c-about__item:active {\
  background-color: #f8faff;\
}\
\
.c-about__meta {\
  margin-top: 10px;\
}\
.c-about__meta text {\
  color: #5f6368;\
  font-size: 12px;\
}\
\
.c-about__icon {\
  width: 32px;\
  height: 32px;\
  margin-right: 10px;\
  display: inline-block;\
  background-size: contain;\
  background-position: center;\
  background-image: url(assets/images/logo.png);\
}\
\
.c-about__name {\
  font-size: 20px;\
  display: inline-block;\
  vertical-align: middle;\
}\
\
.view {\
  margin: 20px 0;\
}\
\
text, a {\
  color: #202124;\
}\
\
.input-group {\
  padding: 5px;\
  margin: -5px -5px 5px -5px;\
}\
.input-group text {\
  margin-bottom: 10px;\
}\
.input-group .feedback {\
  color: #28a745;\
  font-size: 12px;\
  margin-top: 5px;\
}\
\
.container {\
  max-width: 700px;\
  padding: 0 10px;\
  margin: 0 auto;\
  box-sizing: border-box;\
}\
\
root {\
  background-color: #f6f8fa;\
}\
";


static void app_load_template(ui_widget_t *app_parent)
{
        ui_widget_t *w[1];

        w[0] = ui_create_widget("home");
        ui_widget_append(app_parent, w[0]);
}

static void app_load_resources(void)
{
        ui_load_css_string(css_str_0, "app.scss");
}
