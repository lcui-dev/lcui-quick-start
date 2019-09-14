#include <LCUI.h>
#include <LCUI/gui/widget.h>
#include <LCUI/gui/widget/textview.h>
#include <LCUI/gui/widget/textedit.h>
#include <LCUI/timer.h>
#include "home.h"
#include "store.h"

static struct HomeViewModule {
	LCUI_Widget input;
	LCUI_Widget feedback;

	struct store store;
	int feedback_timer;
} home_view;

static void OnFeedbackTimeout(void *unused)
{
	Widget_Hide(home_view.feedback);
	home_view.feedback_timer = 0;
}

static void OnBtnSaveClick(LCUI_Widget w, LCUI_WidgetEvent e, void *unused)
{
	size_t len;
	wchar_t wcs[256];

	len = TextEdit_GetTextW(home_view.input, 0, 255, wcs);
	wcs[len] = 0;

	len = LCUI_EncodeUTF8String(home_view.store.message, wcs, 255);
	home_view.store.message[len] = 0;
	store_save(&home_view.store);
	if (home_view.feedback_timer) {
		LCUITimer_Free(home_view.feedback_timer);
	}
	Widget_Show(home_view.feedback);
	home_view.feedback_timer = LCUI_SetTimeout(2000, OnFeedbackTimeout, NULL);
}

void UI_InitHomeView(void)
{
	LCUI_Widget btn;

	if (store_load(&home_view.store) != 0) {
		store_init(&home_view.store);
		store_save(&home_view.store);
	}
	btn = LCUIWidget_GetById("btn-save-message");
	home_view.input = LCUIWidget_GetById("input-message");
	home_view.feedback = Widget_GetNext(btn);
	Widget_BindEvent(btn, "click", OnBtnSaveClick, NULL, NULL);
	TextEdit_SetText(home_view.input, home_view.store.message);
	Widget_Hide(home_view.feedback);
}
