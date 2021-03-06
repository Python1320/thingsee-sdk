/****************************************************************************
 * Copyright (C) 2014-2015 Haltian Ltd. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Petri Salonen <petri.salonen@haltian.com>
 *
 ****************************************************************************/

#ifndef UI_BITMAPS_H_
#define UI_BITMAPS_H_

typedef enum {
    TEXT_CHECK,
    TEXT_CANCEL,
    TEXT_CONNECT,
    TEXT_CLOSE,
    TEXT_SELECT,
    TEXT_BACK
} bitmap_texts_t;

const oled_image_canvas_t *UI_get_battery_img(int percentage);
const oled_image_canvas_t *UI_get_charging_img(void);
const oled_image_canvas_t *UI_get_box_img(bool full);
const oled_image_canvas_t *UI_get_wlan_img(void);
const oled_image_canvas_t *UI_get_cellular_img(void);
const oled_image_canvas_t *UI_get_bluetooth_img(void);
const oled_image_canvas_t *UI_get_gps_img(void);
const oled_image_canvas_t *UI_get_text_img(bitmap_texts_t text);
const oled_image_canvas_t *UI_get_init_screen_img(void);

#endif /* UI_BITMAPS_H_ */
