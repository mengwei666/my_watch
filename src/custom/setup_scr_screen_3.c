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



void setup_scr_screen_3(lv_ui *ui)
{
	//Write codes screen_3
	ui->screen_3 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_3, 240, 240);
	lv_obj_set_scrollbar_mode(ui->screen_3, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_slider_1
	ui->screen_3_slider_1 = lv_slider_create(ui->screen_3);
	lv_slider_set_range(ui->screen_3_slider_1, 0, 100);
	lv_slider_set_mode(ui->screen_3_slider_1, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->screen_3_slider_1, 50, LV_ANIM_OFF);
	lv_obj_set_pos(ui->screen_3_slider_1, 42, 180);
	lv_obj_set_size(ui->screen_3_slider_1, 160, 8);

	//Write style for screen_3_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_slider_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_slider_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_slider_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_slider_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->screen_3_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_slider_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_slider_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_slider_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_slider_1, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for screen_3_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_slider_1, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_slider_1, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes screen_3_label_1
	ui->screen_3_label_1 = lv_label_create(ui->screen_3);
	lv_label_set_text(ui->screen_3_label_1, "背光调节");
	lv_label_set_long_mode(ui->screen_3_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_3_label_1, 62, 199);
	lv_obj_set_size(ui->screen_3_label_1, 100, 32);

	//Write style for screen_3_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_label_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_1
	ui->screen_3_btn_1 = lv_btn_create(ui->screen_3);
	ui->screen_3_btn_1_label = lv_label_create(ui->screen_3_btn_1);
	lv_label_set_text(ui->screen_3_btn_1_label, "按钮1");
	lv_label_set_long_mode(ui->screen_3_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_1, 6, 10);
	lv_obj_set_size(ui->screen_3_btn_1, 100, 50);

	//Write style for screen_3_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_3_cb_1
	ui->screen_3_cb_1 = lv_checkbox_create(ui->screen_3);
	lv_checkbox_set_text(ui->screen_3_cb_1, "checkbox");
	lv_obj_set_pos(ui->screen_3_cb_1, 14, 72);

	//Write style for screen_3_cb_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_3_cb_1, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_cb_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_cb_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_cb_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_cb_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_cb_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_cb_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_3_cb_1, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_3_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_3_cb_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_3_cb_1, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_cb_1, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_cb_1, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_cb_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes screen_3_sw_1
	ui->screen_3_sw_1 = lv_switch_create(ui->screen_3);
	lv_obj_set_pos(ui->screen_3_sw_1, 12, 147);
	lv_obj_set_size(ui->screen_3_sw_1, 40, 20);

	//Write style for screen_3_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_sw_1, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->screen_3_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->screen_3_sw_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->screen_3_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for screen_3_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_sw_1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes screen_3_ta_1
	ui->screen_3_ta_1 = lv_textarea_create(ui->screen_3);
	lv_textarea_set_text(ui->screen_3_ta_1, "Hello World");
	lv_textarea_set_placeholder_text(ui->screen_3_ta_1, "");
	lv_textarea_set_password_bullet(ui->screen_3_ta_1, "*");
	lv_textarea_set_password_mode(ui->screen_3_ta_1, false);
	lv_textarea_set_one_line(ui->screen_3_ta_1, false);
	lv_textarea_set_accepted_chars(ui->screen_3_ta_1, "");
	lv_textarea_set_max_length(ui->screen_3_ta_1, 32);
	lv_obj_set_pos(ui->screen_3_ta_1, 17, 103);
	lv_obj_set_size(ui->screen_3_ta_1, 119, 27);

	//Write style for screen_3_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_3_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_ta_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_3_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_3_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_3_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_3_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_3_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes screen_3_roller_1
	ui->screen_3_roller_1 = lv_roller_create(ui->screen_3);
	lv_roller_set_options(ui->screen_3_roller_1, "1\n2\n3\n4\n5", LV_ROLLER_MODE_INFINITE);
	lv_obj_set_pos(ui->screen_3_roller_1, 172, 15);
	lv_obj_set_width(ui->screen_3_roller_1, 53);

	//Write style for screen_3_roller_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->screen_3_roller_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_3_roller_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_roller_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_roller_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_roller_1, lv_color_hex(0x333333), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_roller_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_roller_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_roller_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_3_roller_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_3_roller_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_3_roller_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_3_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_3_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_roller_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_roller_1, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_roller_1, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_roller_1, lv_color_hex(0x2195f6), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_roller_1, LV_GRAD_DIR_NONE, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_roller_1, lv_color_hex(0xFFFFFF), LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_roller_1, &lv_font_montserratMedium_12, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_roller_1, 255, LV_PART_SELECTED|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED|LV_STATE_DEFAULT);

	lv_roller_set_visible_row_count(ui->screen_3_roller_1, 5);
	//Write codes screen_3_bar_1
	ui->screen_3_bar_1 = lv_bar_create(ui->screen_3);
	lv_obj_set_style_anim_time(ui->screen_3_bar_1, 1000, 0);
	lv_bar_set_mode(ui->screen_3_bar_1, LV_BAR_MODE_NORMAL);
	lv_bar_set_range(ui->screen_3_bar_1, 0, 100);
	lv_bar_set_value(ui->screen_3_bar_1, 50, LV_ANIM_OFF);
	lv_obj_set_pos(ui->screen_3_bar_1, 67, 147);
	lv_obj_set_size(ui->screen_3_bar_1, 90, 20);

	//Write style for screen_3_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_3_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes screen_3_btn_2
	ui->screen_3_btn_2 = lv_btn_create(ui->screen_3);
	ui->screen_3_btn_2_label = lv_label_create(ui->screen_3_btn_2);
	lv_label_set_text(ui->screen_3_btn_2_label, "");
	lv_label_set_long_mode(ui->screen_3_btn_2_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_3_btn_2_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_3_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_3_btn_2_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_3_btn_2, 209, 213);
	lv_obj_set_size(ui->screen_3_btn_2, 16, 15);

	//Write style for screen_3_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_3_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_3_btn_2, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_3_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_3_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_3_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_3_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_3_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_3_btn_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_3_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_3_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_3.
	extern lv_indev_t * indev_encoder;
	lv_group_t *group=lv_group_create();
    lv_indev_set_group(indev_encoder, group);	//将组绑定到输入设备
    lv_group_set_editing(group, false);   //导航模式
	lv_group_add_obj(group ,ui->screen_2_btn_1);
	lv_group_add_obj(group ,ui->screen_3_slider_1);
	lv_group_add_obj(group ,ui->screen_3_label_1);
	lv_group_add_obj(group ,ui->screen_3_btn_1);
	lv_group_add_obj(group ,ui->screen_3_cb_1);
	lv_group_add_obj(group ,ui->screen_3_sw_1);
	lv_group_add_obj(group ,ui->screen_3_ta_1);
	lv_group_add_obj(group ,ui->screen_3_roller_1);
	lv_group_add_obj(group ,ui->screen_3_bar_1);
	lv_group_add_obj(group ,ui->screen_3_btn_2);
	// lv_group_add_obj(group ,ui->screen_3_slider_1);

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_3);

	//Init events for screen.
	events_init_screen_3(ui);
}
