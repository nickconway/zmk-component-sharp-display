#include "recording.h"
#include "../assets/custom_fonts.h"
#include <zephyr/kernel.h>
#include <zmk/dynamic_macros.h>

void draw_recording_indicator(lv_obj_t *canvas,
                              const struct status_state *state) {
  if (state->macro_count <= 0) {
    return;
  }

  lv_draw_label_dsc_t label_dsc;
  init_label_dsc(&label_dsc, LVGL_FOREGROUND, &quinquefive_8,
                 LV_TEXT_ALIGN_LEFT);
  canvas_draw_text(canvas, 8, 30, SCREEN_WIDTH - 8, &label_dsc, "REC");
}
