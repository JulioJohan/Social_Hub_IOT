// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Smart_Gadget

#include "../ui.h"

void ui_panelLuz_screen_init(void)
{
    ui_panelLuz = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_panelLuz, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_panelLuz, &ui_img_pattern_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_tiled(ui_panelLuz, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gfcLuz = lv_chart_create(ui_panelLuz);
    lv_obj_set_width(ui_gfcLuz, 200);
    lv_obj_set_height(ui_gfcLuz, 100);
    lv_obj_set_x(ui_gfcLuz, 28);
    lv_obj_set_y(ui_gfcLuz, 33);
    lv_obj_set_align(ui_gfcLuz, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_gfcLuz, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_gfcLuz, LV_CHART_AXIS_PRIMARY_Y, 0, 5);
    lv_chart_set_range(ui_gfcLuz, LV_CHART_AXIS_SECONDARY_Y, 0, 5);
    lv_chart_set_axis_tick(ui_gfcLuz, LV_CHART_AXIS_PRIMARY_X, 10, 5, 11, 2, true, 50);
    lv_chart_set_axis_tick(ui_gfcLuz, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_set_axis_tick(ui_gfcLuz, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, true, 25);
    // lv_chart_series_t * ui_gfcLuz_series_1 = lv_chart_add_series(ui_gfcLuz, lv_color_hex(0x808080),
    //                                                              LV_CHART_AXIS_PRIMARY_Y);
    // static lv_coord_t ui_gfcLuz_series_1_array[] = { 1, 2, 2, 2, 1, 2, 2 };
    // lv_chart_set_ext_y_array(ui_gfcLuz, ui_gfcLuz_series_1, ui_gfcLuz_series_1_array);
    lv_obj_set_style_radius(ui_gfcLuz, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gfcLuz, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gfcLuz, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_gfcLuz, lv_color_hex(0x1302B7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_gfcLuz, lv_color_hex(0x2002F7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_gfcLuz, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_gfcLuz, lv_color_hex(0x3906EF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_gfcLuz, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_gfcLuz, lv_color_hex(0x0031F8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_gfcLuz, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_gfcLuz, lv_color_hex(0xDADADA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_gfcLuz, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button19 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_Button19, 76);
    lv_obj_set_height(ui_Button19, 27);
    lv_obj_set_x(ui_Button19, -106);
    lv_obj_set_y(ui_Button19, -83);
    lv_obj_set_align(ui_Button19, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button19, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button19, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button19, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button19, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Button19, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Button19, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Button19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Button19, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Button19, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Button19, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Button19, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Button19, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Button19);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "Inicio");

    ui_Button20 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_Button20, 89);
    lv_obj_set_height(ui_Button20, 27);
    lv_obj_set_x(ui_Button20, -6);
    lv_obj_set_y(ui_Button20, -84);
    lv_obj_set_align(ui_Button20, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button20, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button20, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button20, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button20, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Button20, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_Button20);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Ventilador");
    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label23, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label23, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label23, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label23, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button21 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_Button21, 76);
    lv_obj_set_height(ui_Button21, 27);
    lv_obj_set_x(ui_Button21, 91);
    lv_obj_set_y(ui_Button21, -86);
    lv_obj_set_align(ui_Button21, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button21, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button21, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button21, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button21, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Button21, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label24 = lv_label_create(ui_Button21);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "Graficas");
    lv_obj_set_style_text_color(ui_Label24, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label24, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label24, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label24, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label24, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnGraficaTemperatura3 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_btnGraficaTemperatura3, 29);
    lv_obj_set_height(ui_btnGraficaTemperatura3, 31);
    lv_obj_set_x(ui_btnGraficaTemperatura3, -134);
    lv_obj_set_y(ui_btnGraficaTemperatura3, -32);
    lv_obj_set_align(ui_btnGraficaTemperatura3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnGraficaTemperatura3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnGraficaTemperatura3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnGraficaTemperatura3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnGraficaTemperatura3, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnGraficaTemperatura3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnGraficaTemperatura3, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_btnGraficaTemperatura3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnGraficaTemperatura3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_btnGraficaTemperatura3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_btnGraficaTemperatura3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_btnGraficaTemperatura3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_btnGraficaTemperatura3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnGraficaTemperatura3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image11 = lv_img_create(ui_btnGraficaTemperatura3);
    lv_img_set_src(ui_Image11, &ui_img_2131096662);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_btnGraficaHumedad3 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_btnGraficaHumedad3, 29);
    lv_obj_set_height(ui_btnGraficaHumedad3, 27);
    lv_obj_set_x(ui_btnGraficaHumedad3, -133);
    lv_obj_set_y(ui_btnGraficaHumedad3, 8);
    lv_obj_set_align(ui_btnGraficaHumedad3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnGraficaHumedad3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnGraficaHumedad3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnGraficaHumedad3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnGraficaHumedad3, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnGraficaHumedad3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnGraficaHumedad3, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_btnGraficaHumedad3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnGraficaHumedad3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_btnGraficaHumedad3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_btnGraficaHumedad3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_btnGraficaHumedad3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_btnGraficaHumedad3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnGraficaHumedad3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image12 = lv_img_create(ui_btnGraficaHumedad3);
    lv_img_set_src(ui_Image12, &ui_img_728093_png);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_btnGraficaSonido3 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_btnGraficaSonido3, 29);
    lv_obj_set_height(ui_btnGraficaSonido3, 27);
    lv_obj_set_x(ui_btnGraficaSonido3, -132);
    lv_obj_set_y(ui_btnGraficaSonido3, 46);
    lv_obj_set_align(ui_btnGraficaSonido3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnGraficaSonido3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnGraficaSonido3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnGraficaSonido3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnGraficaSonido3, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnGraficaSonido3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_btnGraficaSonido3, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_btnGraficaSonido3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnGraficaSonido3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_btnGraficaSonido3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_btnGraficaSonido3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_btnGraficaSonido3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_btnGraficaSonido3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnGraficaSonido3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image13 = lv_img_create(ui_btnGraficaSonido3);
    lv_img_set_src(ui_Image13, &ui_img_sound_png26_png);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button22 = lv_btn_create(ui_panelLuz);
    lv_obj_set_width(ui_Button22, 29);
    lv_obj_set_height(ui_Button22, 31);
    lv_obj_set_x(ui_Button22, -130);
    lv_obj_set_y(ui_Button22, 84);
    lv_obj_set_align(ui_Button22, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button22, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button22, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button22, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button22, lv_color_hex(0x0B3E8E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Button22, lv_color_hex(0xEEBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Button22, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Button22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Button22, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Button22, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Button22, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Button22, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Button22, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnGraficaLuz3 = lv_img_create(ui_Button22);
    lv_img_set_src(ui_btnGraficaLuz3, &ui_img_1466347900);
    lv_obj_set_width(ui_btnGraficaLuz3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_btnGraficaLuz3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_btnGraficaLuz3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_btnGraficaLuz3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_btnGraficaLuz3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label25 = lv_label_create(ui_panelLuz);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label25, 17);
    lv_obj_set_y(ui_Label25, -39);
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "Luz");
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button19, ui_event_Button19, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button20, ui_event_Button20, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button21, ui_event_Button21, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnGraficaTemperatura3, ui_event_btnGraficaTemperatura3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnGraficaHumedad3, ui_event_btnGraficaHumedad3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btnGraficaSonido3, ui_event_btnGraficaSonido3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button22, ui_event_Button22, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_panelLuz, ui_event_panelLuz, LV_EVENT_ALL, NULL);

}
