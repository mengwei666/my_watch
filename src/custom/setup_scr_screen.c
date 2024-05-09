/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



int screen_analog_clock_1_hour_value = 3;
int screen_analog_clock_1_min_value = 20;
int screen_analog_clock_1_sec_value = 50;
void setup_scr_screen(lv_ui *ui)
{
	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen, 240, 240);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_analog_clock_1
	static bool screen_analog_clock_1_timer_enabled = false;
	ui->screen_analog_clock_1 = lv_analogclock_create(ui->screen);
	lv_analogclock_hide_digits(ui->screen_analog_clock_1, false);
	lv_analogclock_set_major_ticks(ui->screen_analog_clock_1, 2, 10, lv_color_hex(0x555555), 10);
	lv_analogclock_set_ticks(ui->screen_analog_clock_1, 2, 5, lv_color_hex(0x333333));
	lv_analogclock_set_hour_needle_line(ui->screen_analog_clock_1, 2, lv_color_hex(0x00ff00), -40);
	lv_analogclock_set_min_needle_line(ui->screen_analog_clock_1, 2, lv_color_hex(0xE1FF00), -30);
	lv_analogclock_set_sec_needle_line(ui->screen_analog_clock_1, 2, lv_color_hex(0x6600FF), -10);
	lv_analogclock_set_time(ui->screen_analog_clock_1, screen_analog_clock_1_hour_value, screen_analog_clock_1_min_value,screen_analog_clock_1_sec_value);
	// create timer
	if (!screen_analog_clock_1_timer_enabled) {
		lv_timer_create(screen_analog_clock_1_timer, 1000, NULL);
		screen_analog_clock_1_timer_enabled = true;
	}
	lv_obj_set_pos(ui->screen_analog_clock_1, 10, 10);
	lv_obj_set_size(ui->screen_analog_clock_1, 220, 220);

	//Write style for screen_analog_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_analog_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_analog_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_analog_clock_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_analog_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_analog_clock_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_analog_clock_1, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_analog_clock_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_analog_clock_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write style for screen_analog_clock_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_analog_clock_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_analog_clock_1, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_analog_clock_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes screen_btn_1
	ui->screen_btn_1 = lv_btn_create(ui->screen);
	ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1);
	lv_label_set_text(ui->screen_btn_1_label, "");
	lv_label_set_long_mode(ui->screen_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_btn_1, 209, 213);
	lv_obj_set_size(ui->screen_btn_1, 16, 15);

	//Write style for screen_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_btn_1, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen.
	extern lv_indev_t * indev_encoder;
	lv_group_t *group=lv_group_create();
    lv_indev_set_group(indev_encoder, group);	//将组绑定到输入设备
    lv_group_set_editing(group, false);   //导航模式
	lv_group_add_obj(group ,ui->screen_btn_1);
	lv_group_add_obj(group ,ui->screen_analog_clock_1);
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen);

	//Init events for screen.
	events_init_screen(ui);
}
