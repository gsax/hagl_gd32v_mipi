/*

MIT License

Copyright (c) 2020 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-cut-

This file is part of the GD32V MIPI DCS HAL for the HAGL graphics library:
https://github.com/tuupola/hagl_gd32v_mipi

SPDX-License-Identifier: MIT

*/

#ifndef _HAGL_HAL_H
#define _HAGL_HAL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef uint16_t color_t;

#include "nuclei_sdk_soc.h"

//#include "hagl_hal_single.h"
#include "hagl_hal_double.h"

#define MIPI_DISPLAY_ADDRESS_MODE   (MIPI_DCS_ADDRESS_MODE_BGR)
#define MIPI_DISPLAY_OFFSET_X       (26)
#define MIPI_DISPLAY_OFFSET_Y       (1)

#define MIPI_DISPLAY_PIN_CS         (GPIO_PIN_2)
#define MIPI_DISPLAY_PORT_CS        (GPIOB)
#define MIPI_DISPLAY_PIN_DC         (GPIO_PIN_0)
#define MIPI_DISPLAY_PORT_DC        (GPIOB)
//#define MIPI_DISPLAY_PIN_RST        (-1)
#define MIPI_DISPLAY_PIN_RST        (GPIO_PIN_1)
#define MIPI_DISPLAY_PORT_RST       (GPIOB)
//#define MIPI_DISPLAY_PIN_BL         (-1)
#define MIPI_DISPLAY_PIN_BL         (GPIO_PIN_5)
#define MIPI_DISPLAY_PORT_BL        (GPIOA)
#define MIPI_DISPLAY_PIN_CLK        (GPIO_PIN_6)
#define MIPI_DISPLAY_PORT_CLK       (GPIOA)
#define MIPI_DISPLAY_PIN_MOSI       (GPIO_PIN_7)
#define MIPI_DISPLAY_PORT_MOSI      (GPIOA)

#define MIPI_DISPLAY_PIXEL_FORMAT   (MIPI_DCS_PIXEL_FORMAT_16BIT)
#define MIPI_DISPLAY_INVERT
#define MIPI_DISPLAY_WIDTH          (80)
#define MIPI_DISPLAY_HEIGHT         (160)
#define MIPI_DISPLAY_DEPTH          (16)

#define DISPLAY_WIDTH               (MIPI_DISPLAY_WIDTH)
#define DISPLAY_HEIGHT              (MIPI_DISPLAY_HEIGHT)
#define DISPLAY_DEPTH               (MIPI_DISPLAY_DEPTH)

#ifdef __cplusplus
}
#endif
#endif /* _HAGL_HAL_H */