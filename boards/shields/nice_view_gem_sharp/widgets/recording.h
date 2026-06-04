#pragma once

#include "util.h"
#include <lvgl.h>

struct recording_status_state {
  uint8_t count;
};

void draw_recording_indicator(lv_obj_t *canvas,
                              const struct status_state *state);
