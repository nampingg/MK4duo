/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <U8glib.h>

#if defined(__AVR__) && ENABLED(NOT_EXTENDED_ISO10646_1_5X7)
  // reduced font (only symbols 1 - 127) - saves about 1278 bytes of FLASH

/*
  Fontname: -MK4duo6x12-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 5 h=10 x= 5 y= 5 dx= 6 dy= 0 ascent= 8 len=10
  Font Bounding box     w= 6 h=12 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent = 8 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[1325] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0x00,0x06,0x0c,0x00,0xfe,0x07,0x02,0x26,0x03,0xbc,0x01,0x7f,0xfe,0x08,0xfe,0x08,
  0xfe,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0xf0,0xc8,0x88,0x88,0x98,0x78,0x10,0x05,
  0x08,0x08,0x06,0x00,0x00,0xc0,0xf8,0x88,0x88,0x88,0x88,0x88,0xf8,0x05,0x05,0x05,
  0x06,0x00,0x01,0x20,0x30,0xf8,0x30,0x20,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x70,
  0xf8,0x20,0x20,0x20,0x20,0xe0,0x05,0x09,0x09,0x06,0x00,0xff,0x20,0x70,0xa8,0xa8,
  0xb8,0x88,0x88,0x70,0x20,0x05,0x06,0x06,0x06,0x00,0x01,0xe0,0x8c,0xea,0x8c,0x8a,
  0x0a,0x05,0x09,0x09,0x06,0x00,0xff,0xf8,0xa8,0x88,0x88,0x88,0x88,0x88,0xa8,0xf8,
  0x05,0x0a,0x0a,0x06,0x00,0xfe,0x20,0x50,0x50,0x50,0x50,0x88,0xa8,0xa8,0x88,0x70,
  0x03,0x03,0x03,0x06,0x00,0x03,0x40,0xa0,0x40,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
  0x00,0x00,0x06,0x05,0xff,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x80,0x80,
  0x00,0x80,0x03,0x03,0x03,0x06,0x01,0x05,0xa0,0xa0,0xa0,0x05,0x06,0x06,0x06,0x00,
  0x00,0x50,0xf8,0x50,0x50,0xf8,0x50,0x05,0x09,0x09,0x06,0x00,0xff,0x20,0x70,0xa8,
  0xa0,0x70,0x28,0xa8,0x70,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0xc8,0xc8,0x10,0x20,
  0x40,0x98,0x98,0x05,0x07,0x07,0x06,0x00,0x00,0x40,0xa0,0xa0,0x40,0xa8,0x90,0x68,
  0x01,0x03,0x03,0x06,0x02,0x05,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xff,0x20,
  0x40,0x40,0x80,0x80,0x80,0x40,0x40,0x20,0x03,0x09,0x09,0x06,0x01,0xff,0x80,0x40,
  0x40,0x20,0x20,0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0xa8,0x70,
  0x20,0x70,0xa8,0x20,0x05,0x05,0x05,0x06,0x00,0x01,0x20,0x20,0xf8,0x20,0x20,0x02,
  0x03,0x03,0x06,0x01,0xff,0xc0,0x40,0x80,0x05,0x01,0x01,0x06,0x00,0x03,0xf8,0x02,
  0x02,0x02,0x06,0x01,0x00,0xc0,0xc0,0x05,0x07,0x07,0x06,0x00,0x00,0x08,0x10,0x10,
  0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x98,0xa8,0xc8,0x88,
  0x70,0x03,0x07,0x07,0x06,0x01,0x00,0x40,0xc0,0x40,0x40,0x40,0x40,0xe0,0x05,0x07,
  0x07,0x06,0x00,0x00,0x70,0x88,0x08,0x10,0x20,0x40,0xf8,0x05,0x07,0x07,0x06,0x00,
  0x00,0xf8,0x08,0x10,0x30,0x08,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x10,0x30,
  0x50,0x90,0xf8,0x10,0x10,0x05,0x07,0x07,0x06,0x00,0x00,0xf8,0x80,0xf0,0x08,0x08,
  0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x40,0x80,0xf0,0x88,0x88,0x70,0x05,
  0x07,0x07,0x06,0x00,0x00,0xf8,0x08,0x10,0x10,0x20,0x20,0x20,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,
  0x88,0x88,0x78,0x08,0x10,0x60,0x02,0x05,0x05,0x06,0x01,0x00,0xc0,0xc0,0x00,0xc0,
  0xc0,0x02,0x06,0x06,0x06,0x01,0xff,0xc0,0xc0,0x00,0xc0,0x40,0x80,0x03,0x05,0x05,
  0x06,0x01,0x01,0x20,0x40,0x80,0x40,0x20,0x05,0x03,0x03,0x06,0x00,0x02,0xf8,0x00,
  0xf8,0x03,0x05,0x05,0x06,0x01,0x01,0x80,0x40,0x20,0x40,0x80,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x10,0x20,0x20,0x00,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x70,
  0x88,0xb8,0xa8,0xb8,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0xf8,
  0x88,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,0x48,0x48,0x70,0x48,0x48,0xf0,
  0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x80,0x88,0x70,0x05,0x07,0x07,
  0x06,0x00,0x00,0xf0,0x48,0x48,0x48,0x48,0x48,0xf0,0x05,0x07,0x07,0x06,0x00,0x00,
  0xf8,0x80,0x80,0xf0,0x80,0x80,0xf8,0x05,0x07,0x07,0x06,0x00,0x00,0xf8,0x80,0x80,
  0xf0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x98,0x88,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0xf8,0x88,0x88,0x88,0x03,0x07,
  0x07,0x06,0x01,0x00,0xe0,0x40,0x40,0x40,0x40,0x40,0xe0,0x05,0x07,0x07,0x06,0x00,
  0x00,0x38,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x90,
  0xa0,0xc0,0xa0,0x90,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0x80,0x80,0x80,
  0x80,0xf8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0xd8,0xa8,0x88,0x88,0x88,0x88,0x05,
  0x07,0x07,0x06,0x00,0x00,0x88,0x88,0xc8,0xa8,0x98,0x88,0x88,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,
  0x88,0x88,0xf0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0x88,
  0xa8,0x90,0x68,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,0x88,0x88,0xf0,0xa0,0x90,0x88,
  0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x70,0x08,0x88,0x70,0x05,0x07,0x07,
  0x06,0x00,0x00,0xf8,0x20,0x20,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,
  0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,
  0x88,0x50,0x50,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,0xa8,0xa8,
  0x50,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x50,0x88,0x88,0x05,0x07,
  0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,
  0x00,0xf8,0x08,0x10,0x20,0x40,0x80,0xf8,0x03,0x09,0x09,0x06,0x01,0xff,0xe0,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0xe0,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x40,0x40,
  0x20,0x10,0x10,0x08,0x03,0x09,0x09,0x06,0x01,0xff,0xe0,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0xe0,0x05,0x03,0x03,0x06,0x00,0x05,0x20,0x50,0x88,0x05,0x01,0x01,0x06,
  0x00,0xfe,0xf8,0x03,0x03,0x03,0x06,0x01,0x05,0x80,0x40,0x20,0x05,0x05,0x05,0x06,
  0x00,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xf0,
  0x88,0x88,0x88,0xf0,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x80,0x80,0x88,0x70,0x05,
  0x07,0x07,0x06,0x00,0x00,0x08,0x08,0x78,0x88,0x88,0x88,0x78,0x05,0x05,0x05,0x06,
  0x00,0x00,0x70,0x88,0xf0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x48,0x40,
  0xe0,0x40,0x40,0x40,0x05,0x07,0x07,0x06,0x00,0xfe,0x70,0x88,0x88,0x88,0x78,0x08,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xf0,0x88,0x88,0x88,0x88,0x03,0x07,
  0x07,0x06,0x01,0x00,0x40,0x00,0xc0,0x40,0x40,0x40,0xe0,0x04,0x09,0x09,0x06,0x01,
  0xfe,0x10,0x00,0x30,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,
  0x80,0x80,0x88,0x90,0xe0,0x90,0x88,0x03,0x07,0x07,0x06,0x01,0x00,0xc0,0x40,0x40,
  0x40,0x40,0x40,0xe0,0x05,0x05,0x05,0x06,0x00,0x00,0xd0,0xa8,0xa8,0xa8,0xa8,0x05,
  0x05,0x05,0x06,0x00,0x00,0xb0,0xc8,0x88,0x88,0x88,0x05,0x05,0x05,0x06,0x00,0x00,
  0x70,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0xfe,0xf0,0x88,0x88,0x88,0xf0,
  0x80,0x80,0x05,0x07,0x07,0x06,0x00,0xfe,0x78,0x88,0x88,0x88,0x78,0x08,0x08,0x05,
  0x05,0x05,0x06,0x00,0x00,0xb0,0xc8,0x80,0x80,0x80,0x05,0x05,0x05,0x06,0x00,0x00,
  0x78,0x80,0x70,0x08,0xf0,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xf8,0x20,0x20,
  0x20,0x18,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0x88,0x98,0x68,0x05,0x05,0x05,
  0x06,0x00,0x00,0x88,0x88,0x88,0x50,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,
  0xa8,0xa8,0x50,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x50,0x20,0x50,0x88,0x05,0x07,
  0x07,0x06,0x00,0xfe,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x05,0x05,0x06,0x00,
  0x00,0xf8,0x10,0x20,0x40,0xf8,0x03,0x09,0x09,0x06,0x01,0xff,0x20,0x40,0x40,0x40,
  0x80,0x40,0x40,0x40,0x20,0x01,0x09,0x09,0x06,0x02,0xff,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xff,0x80,0x40,0x40,0x40,0x20,0x40,
  0x40,0x40,0x80,0x05,0x03,0x03,0x06,0x00,0x02,0x48,0xa8,0x90,0xff};
#else
  // extended (original) font (symbols 1 - 255)

/*
  Fontname: -MK4duo6x12-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Copyright: Public domain terminal emulator font.  Share and enjoy. original font -Misc-Fixed-Medium-R-SemiCondensed--12-110-75-75-C-60-ISO10646-1
  Capital A Height: 7, '1' Height: 7
  Calculated Max Values w= 6 h=10 x= 5 y= 7 dx= 6 dy= 0 ascent=10 len=10
  Font Bounding box     w= 6 h=12 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 7 descent=-2
  X Font      ascent = 8 descent=-2
  Max Font    ascent =10 descent=-2
*/
const u8g_fntpgm_uint8_t ISO10646_1_5x7[2648] U8G_FONT_SECTION("ISO10646_1_5x7") = {
  0x00,0x06,0x0c,0x00,0xfe,0x07,0x02,0x26,0x03,0xbc,0x01,0xff,0xfe,0x0a,0xfe,0x08,
  0xfe,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0xf0,0xc8,0x88,0x88,0x98,0x78,0x10,0x05,
  0x08,0x08,0x06,0x00,0x00,0xc0,0xf8,0x88,0x88,0x88,0x88,0x88,0xf8,0x05,0x05,0x05,
  0x06,0x00,0x01,0x20,0x30,0xf8,0x30,0x20,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x70,
  0xf8,0x20,0x20,0x20,0x20,0xe0,0x05,0x09,0x09,0x06,0x00,0xff,0x20,0x70,0xa8,0xa8,
  0xb8,0x88,0x88,0x70,0x20,0x05,0x06,0x06,0x06,0x00,0x01,0xe0,0x8c,0xea,0x8c,0x8a,
  0x0a,0x05,0x09,0x09,0x06,0x00,0xff,0xf8,0xa8,0x88,0x88,0x88,0x88,0x88,0xa8,0xf8,
  0x05,0x0a,0x0a,0x06,0x00,0xfe,0x20,0x50,0x50,0x50,0x50,0x88,0xa8,0xa8,0x88,0x70,
  0x03,0x03,0x03,0x06,0x00,0x03,0x40,0xa0,0x40,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,
  0x00,0x00,0x06,0x05,0xff,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x80,0x80,
  0x00,0x80,0x03,0x03,0x03,0x06,0x01,0x05,0xa0,0xa0,0xa0,0x05,0x06,0x06,0x06,0x00,
  0x00,0x50,0xf8,0x50,0x50,0xf8,0x50,0x05,0x09,0x09,0x06,0x00,0xff,0x20,0x70,0xa8,
  0xa0,0x70,0x28,0xa8,0x70,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0xc8,0xc8,0x10,0x20,
  0x40,0x98,0x98,0x05,0x07,0x07,0x06,0x00,0x00,0x40,0xa0,0xa0,0x40,0xa8,0x90,0x68,
  0x01,0x03,0x03,0x06,0x02,0x05,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xff,0x20,
  0x40,0x40,0x80,0x80,0x80,0x40,0x40,0x20,0x03,0x09,0x09,0x06,0x01,0xff,0x80,0x40,
  0x40,0x20,0x20,0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0xa8,0x70,
  0x20,0x70,0xa8,0x20,0x05,0x05,0x05,0x06,0x00,0x01,0x20,0x20,0xf8,0x20,0x20,0x02,
  0x03,0x03,0x06,0x01,0xff,0xc0,0x40,0x80,0x05,0x01,0x01,0x06,0x00,0x03,0xf8,0x02,
  0x02,0x02,0x06,0x01,0x00,0xc0,0xc0,0x05,0x07,0x07,0x06,0x00,0x00,0x08,0x10,0x10,
  0x20,0x40,0x40,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x98,0xa8,0xc8,0x88,
  0x70,0x03,0x07,0x07,0x06,0x01,0x00,0x40,0xc0,0x40,0x40,0x40,0x40,0xe0,0x05,0x07,
  0x07,0x06,0x00,0x00,0x70,0x88,0x08,0x10,0x20,0x40,0xf8,0x05,0x07,0x07,0x06,0x00,
  0x00,0xf8,0x08,0x10,0x30,0x08,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x10,0x30,
  0x50,0x90,0xf8,0x10,0x10,0x05,0x07,0x07,0x06,0x00,0x00,0xf8,0x80,0xf0,0x08,0x08,
  0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x40,0x80,0xf0,0x88,0x88,0x70,0x05,
  0x07,0x07,0x06,0x00,0x00,0xf8,0x08,0x10,0x10,0x20,0x20,0x20,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,
  0x88,0x88,0x78,0x08,0x10,0x60,0x02,0x05,0x05,0x06,0x01,0x00,0xc0,0xc0,0x00,0xc0,
  0xc0,0x02,0x06,0x06,0x06,0x01,0xff,0xc0,0xc0,0x00,0xc0,0x40,0x80,0x03,0x05,0x05,
  0x06,0x01,0x01,0x20,0x40,0x80,0x40,0x20,0x05,0x03,0x03,0x06,0x00,0x02,0xf8,0x00,
  0xf8,0x03,0x05,0x05,0x06,0x01,0x01,0x80,0x40,0x20,0x40,0x80,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x10,0x20,0x20,0x00,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x70,
  0x88,0xb8,0xa8,0xb8,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0xf8,
  0x88,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,0x48,0x48,0x70,0x48,0x48,0xf0,
  0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x80,0x88,0x70,0x05,0x07,0x07,
  0x06,0x00,0x00,0xf0,0x48,0x48,0x48,0x48,0x48,0xf0,0x05,0x07,0x07,0x06,0x00,0x00,
  0xf8,0x80,0x80,0xf0,0x80,0x80,0xf8,0x05,0x07,0x07,0x06,0x00,0x00,0xf8,0x80,0x80,
  0xf0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x80,0x98,0x88,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0xf8,0x88,0x88,0x88,0x03,0x07,
  0x07,0x06,0x01,0x00,0xe0,0x40,0x40,0x40,0x40,0x40,0xe0,0x05,0x07,0x07,0x06,0x00,
  0x00,0x38,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x90,
  0xa0,0xc0,0xa0,0x90,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0x80,0x80,0x80,
  0x80,0xf8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0xd8,0xa8,0x88,0x88,0x88,0x88,0x05,
  0x07,0x07,0x06,0x00,0x00,0x88,0x88,0xc8,0xa8,0x98,0x88,0x88,0x05,0x07,0x07,0x06,
  0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,
  0x88,0x88,0xf0,0x80,0x80,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x88,0x88,
  0xa8,0x90,0x68,0x05,0x07,0x07,0x06,0x00,0x00,0xf0,0x88,0x88,0xf0,0xa0,0x90,0x88,
  0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x80,0x70,0x08,0x88,0x70,0x05,0x07,0x07,
  0x06,0x00,0x00,0xf8,0x20,0x20,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,0x00,
  0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,
  0x88,0x50,0x50,0x20,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x88,0x88,0xa8,0xa8,
  0x50,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x50,0x88,0x88,0x05,0x07,
  0x07,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x05,0x07,0x07,0x06,0x00,
  0x00,0xf8,0x08,0x10,0x20,0x40,0x80,0xf8,0x03,0x09,0x09,0x06,0x01,0xff,0xe0,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0xe0,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x40,0x40,
  0x20,0x10,0x10,0x08,0x03,0x09,0x09,0x06,0x01,0xff,0xe0,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0xe0,0x05,0x03,0x03,0x06,0x00,0x05,0x20,0x50,0x88,0x05,0x01,0x01,0x06,
  0x00,0xfe,0xf8,0x03,0x03,0x03,0x06,0x01,0x05,0x80,0x40,0x20,0x05,0x05,0x05,0x06,
  0x00,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xf0,
  0x88,0x88,0x88,0xf0,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x80,0x80,0x88,0x70,0x05,
  0x07,0x07,0x06,0x00,0x00,0x08,0x08,0x78,0x88,0x88,0x88,0x78,0x05,0x05,0x05,0x06,
  0x00,0x00,0x70,0x88,0xf0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x30,0x48,0x40,
  0xe0,0x40,0x40,0x40,0x05,0x07,0x07,0x06,0x00,0xfe,0x70,0x88,0x88,0x88,0x78,0x08,
  0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x80,0x80,0xf0,0x88,0x88,0x88,0x88,0x03,0x07,
  0x07,0x06,0x01,0x00,0x40,0x00,0xc0,0x40,0x40,0x40,0xe0,0x04,0x09,0x09,0x06,0x01,
  0xfe,0x10,0x00,0x30,0x10,0x10,0x10,0x10,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,
  0x80,0x80,0x88,0x90,0xe0,0x90,0x88,0x03,0x07,0x07,0x06,0x01,0x00,0xc0,0x40,0x40,
  0x40,0x40,0x40,0xe0,0x05,0x05,0x05,0x06,0x00,0x00,0xd0,0xa8,0xa8,0xa8,0xa8,0x05,
  0x05,0x05,0x06,0x00,0x00,0xb0,0xc8,0x88,0x88,0x88,0x05,0x05,0x05,0x06,0x00,0x00,
  0x70,0x88,0x88,0x88,0x70,0x05,0x07,0x07,0x06,0x00,0xfe,0xf0,0x88,0x88,0x88,0xf0,
  0x80,0x80,0x05,0x07,0x07,0x06,0x00,0xfe,0x78,0x88,0x88,0x88,0x78,0x08,0x08,0x05,
  0x05,0x05,0x06,0x00,0x00,0xb0,0xc8,0x80,0x80,0x80,0x05,0x05,0x05,0x06,0x00,0x00,
  0x78,0x80,0x70,0x08,0xf0,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xf8,0x20,0x20,
  0x20,0x18,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,0x88,0x98,0x68,0x05,0x05,0x05,
  0x06,0x00,0x00,0x88,0x88,0x88,0x50,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x88,
  0xa8,0xa8,0x50,0x05,0x05,0x05,0x06,0x00,0x00,0x88,0x50,0x20,0x50,0x88,0x05,0x07,
  0x07,0x06,0x00,0xfe,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x05,0x05,0x06,0x00,
  0x00,0xf8,0x10,0x20,0x40,0xf8,0x03,0x09,0x09,0x06,0x01,0xff,0x20,0x40,0x40,0x40,
  0x80,0x40,0x40,0x40,0x20,0x01,0x09,0x09,0x06,0x02,0xff,0x80,0x80,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x03,0x09,0x09,0x06,0x01,0xff,0x80,0x40,0x40,0x40,0x20,0x40,
  0x40,0x40,0x80,0x05,0x03,0x03,0x06,0x00,0x02,0x48,0xa8,0x90,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,
  0x06,0x05,0xff,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x00,0x80,0x80,0x80,0x80,0x80,
  0x05,0x07,0x07,0x06,0x00,0xff,0x20,0x70,0xa8,0xa0,0xa8,0x70,0x20,0x05,0x07,0x07,
  0x06,0x00,0x00,0x30,0x48,0x40,0xe0,0x40,0x48,0xb0,0x05,0x05,0x05,0x06,0x00,0x00,
  0xa8,0x50,0x88,0x50,0xa8,0x05,0x07,0x07,0x06,0x00,0x00,0x88,0x50,0xf8,0x20,0xf8,
  0x20,0x20,0x01,0x07,0x07,0x06,0x02,0x00,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x04,
  0x08,0x08,0x06,0x01,0x00,0x70,0x80,0x60,0x90,0x90,0x60,0x10,0xe0,0x03,0x01,0x01,
  0x06,0x01,0x07,0xa0,0x06,0x07,0x07,0x06,0x00,0x00,0x78,0x84,0xb4,0xa4,0xb4,0x84,
  0x78,0x03,0x05,0x05,0x06,0x01,0x04,0x60,0xa0,0x60,0x00,0xe0,0x05,0x05,0x05,0x06,
  0x00,0x00,0x28,0x50,0xa0,0x50,0x28,0x05,0x03,0x03,0x06,0x00,0x01,0xf8,0x08,0x08,
  0x03,0x01,0x01,0x06,0x01,0x03,0xe0,0x06,0x07,0x07,0x06,0x00,0x00,0x78,0x84,0xb4,
  0xa4,0xa4,0x84,0x78,0x05,0x01,0x01,0x06,0x00,0x07,0xf8,0x04,0x04,0x04,0x06,0x01,
  0x05,0x60,0x90,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x20,0xf8,0x20,0x20,
  0x00,0xf8,0x03,0x05,0x05,0x06,0x01,0x04,0x40,0xa0,0x20,0x40,0xe0,0x03,0x05,0x05,
  0x06,0x01,0x04,0xc0,0x20,0x40,0x20,0xc0,0x03,0x03,0x03,0x06,0x01,0x05,0x20,0x40,
  0x80,0x05,0x07,0x07,0x06,0x00,0xfe,0x88,0x88,0x88,0x98,0xe8,0x80,0x80,0x05,0x08,
  0x08,0x06,0x00,0x00,0x78,0xe8,0xe8,0xe8,0x68,0x28,0x28,0x28,0x02,0x02,0x02,0x06,
  0x02,0x03,0xc0,0xc0,0x03,0x02,0x02,0x06,0x01,0xfe,0x20,0xc0,0x03,0x05,0x05,0x06,
  0x01,0x04,0x40,0xc0,0x40,0x40,0xe0,0x03,0x05,0x05,0x06,0x01,0x05,0x40,0xa0,0x40,
  0x00,0xe0,0x05,0x05,0x05,0x06,0x00,0x00,0xa0,0x50,0x28,0x50,0xa0,0x05,0x0a,0x0a,
  0x06,0x00,0x00,0x40,0xc0,0x48,0x50,0x60,0x50,0xb0,0x50,0x78,0x10,0x05,0x0a,0x0a,
  0x06,0x00,0x00,0x40,0xc0,0x48,0x50,0x60,0x50,0xa8,0x08,0x10,0x38,0x05,0x0a,0x0a,
  0x06,0x00,0x00,0xc0,0x20,0x48,0x30,0xe0,0x50,0xb0,0x50,0x78,0x10,0x05,0x07,0x07,
  0x06,0x00,0x00,0x20,0x00,0x20,0x20,0x40,0x88,0x70,0x05,0x0a,0x0a,0x06,0x00,0x00,
  0x40,0x20,0x00,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x0a,0x0a,0x06,0x00,0x00,
  0x10,0x20,0x00,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x0a,0x0a,0x06,0x00,0x00,
  0x20,0x50,0x00,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x0a,0x0a,0x06,0x00,0x00,
  0x68,0xb0,0x00,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x09,0x09,0x06,0x00,0x00,
  0x50,0x00,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x0a,0x0a,0x06,0x00,0x00,0x20,
  0x50,0x20,0x70,0x88,0x88,0xf8,0x88,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x78,
  0xa0,0xa0,0xf0,0xa0,0xa0,0xb8,0x05,0x09,0x09,0x06,0x00,0xfe,0x70,0x88,0x80,0x80,
  0x80,0x88,0x70,0x10,0x60,0x05,0x0a,0x0a,0x06,0x00,0x00,0x40,0x20,0x00,0xf8,0x80,
  0x80,0xf0,0x80,0x80,0xf8,0x05,0x0a,0x0a,0x06,0x00,0x00,0x10,0x20,0x00,0xf8,0x80,
  0x80,0xf0,0x80,0x80,0xf8,0x05,0x0a,0x0a,0x06,0x00,0x00,0x20,0x50,0x00,0xf8,0x80,
  0x80,0xf0,0x80,0x80,0xf8,0x05,0x09,0x09,0x06,0x00,0x00,0x50,0x00,0xf8,0x80,0x80,
  0xf0,0x80,0x80,0xf8,0x03,0x0a,0x0a,0x06,0x01,0x00,0x80,0x40,0x00,0xe0,0x40,0x40,
  0x40,0x40,0x40,0xe0,0x03,0x0a,0x0a,0x06,0x01,0x00,0x20,0x40,0x00,0xe0,0x40,0x40,
  0x40,0x40,0x40,0xe0,0x03,0x0a,0x0a,0x06,0x01,0x00,0x40,0xa0,0x00,0xe0,0x40,0x40,
  0x40,0x40,0x40,0xe0,0x03,0x09,0x09,0x06,0x01,0x00,0xa0,0x00,0xe0,0x40,0x40,0x40,
  0x40,0x40,0xe0,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x48,0x48,0xe8,0x48,0x48,0x70,
  0x05,0x0a,0x0a,0x06,0x00,0x00,0x68,0xb0,0x00,0x88,0x88,0xc8,0xa8,0x98,0x88,0x88,
  0x05,0x0a,0x0a,0x06,0x00,0x00,0x40,0x20,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,
  0x05,0x0a,0x0a,0x06,0x00,0x00,0x10,0x20,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,
  0x05,0x0a,0x0a,0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,
  0x05,0x0a,0x0a,0x06,0x00,0x00,0x68,0xb0,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,
  0x05,0x09,0x09,0x06,0x00,0x00,0x50,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x05,
  0x05,0x05,0x06,0x00,0x01,0x88,0x50,0x20,0x50,0x88,0x05,0x09,0x09,0x06,0x00,0xff,
  0x08,0x70,0x98,0xa8,0xa8,0xa8,0xc8,0x70,0x80,0x05,0x0a,0x0a,0x06,0x00,0x00,0x40,
  0x20,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0a,0x0a,0x06,0x00,0x00,0x10,
  0x20,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0a,0x0a,0x06,0x00,0x00,0x20,
  0x50,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x09,0x09,0x06,0x00,0x00,0x50,
  0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x05,0x0a,0x0a,0x06,0x00,0x00,0x10,0x20,
  0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x20,0x04,0x07,0x07,0x06,0x01,0x00,0x80,0xe0,
  0x90,0x90,0x90,0xe0,0x80,0x05,0x07,0x07,0x06,0x00,0x00,0x70,0x88,0x90,0xa0,0x90,
  0x88,0xb0,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,0x00,0x70,0x08,0x78,0x88,0x78,
  0x05,0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,
  0x08,0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,0x08,0x06,
  0x00,0x00,0x68,0xb0,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x07,0x07,0x06,0x00,0x00,
  0x50,0x00,0x70,0x08,0x78,0x88,0x78,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x50,0x20,
  0x70,0x08,0x78,0x88,0x78,0x05,0x05,0x05,0x06,0x00,0x00,0x70,0x28,0x70,0xa0,0x78,
  0x05,0x07,0x07,0x06,0x00,0xfe,0x70,0x88,0x80,0x88,0x70,0x10,0x60,0x05,0x08,0x08,
  0x06,0x00,0x00,0x40,0x20,0x00,0x70,0x88,0xf0,0x80,0x70,0x05,0x08,0x08,0x06,0x00,
  0x00,0x10,0x20,0x00,0x70,0x88,0xf0,0x80,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x20,
  0x50,0x00,0x70,0x88,0xf0,0x80,0x70,0x05,0x07,0x07,0x06,0x00,0x00,0x50,0x00,0x70,
  0x88,0xf0,0x80,0x70,0x03,0x08,0x08,0x06,0x01,0x00,0x80,0x40,0x00,0xc0,0x40,0x40,
  0x40,0xe0,0x03,0x08,0x08,0x06,0x01,0x00,0x20,0x40,0x00,0xc0,0x40,0x40,0x40,0xe0,
  0x03,0x08,0x08,0x06,0x01,0x00,0x40,0xa0,0x00,0xc0,0x40,0x40,0x40,0xe0,0x03,0x07,
  0x07,0x06,0x01,0x00,0xa0,0x00,0xc0,0x40,0x40,0x40,0xe0,0x05,0x09,0x09,0x06,0x00,
  0x00,0x50,0x20,0x50,0x08,0x78,0x88,0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,
  0x68,0xb0,0x00,0xb0,0xc8,0x88,0x88,0x88,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,
  0x00,0x70,0x88,0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x70,
  0x88,0x88,0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x20,0x50,0x00,0x70,0x88,0x88,
  0x88,0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x68,0xb0,0x00,0x70,0x88,0x88,0x88,0x70,
  0x05,0x07,0x07,0x06,0x00,0x00,0x50,0x00,0x70,0x88,0x88,0x88,0x70,0x05,0x05,0x05,
  0x06,0x00,0x01,0x20,0x00,0xf8,0x00,0x20,0x05,0x05,0x05,0x06,0x00,0x00,0x78,0x98,
  0xa8,0xc8,0xf0,0x05,0x08,0x08,0x06,0x00,0x00,0x40,0x20,0x00,0x88,0x88,0x88,0x88,
  0x70,0x05,0x08,0x08,0x06,0x00,0x00,0x10,0x20,0x00,0x88,0x88,0x88,0x88,0x70,0x05,
  0x08,0x08,0x06,0x00,0x00,0x20,0x50,0x00,0x88,0x88,0x88,0x88,0x70,0x05,0x07,0x07,
  0x06,0x00,0x00,0x50,0x00,0x88,0x88,0x88,0x88,0x70,0x05,0x0a,0x0a,0x06,0x00,0xfe,
  0x10,0x20,0x00,0x88,0x88,0x88,0x50,0x20,0x40,0x80,0x05,0x09,0x09,0x06,0x00,0xfe,
  0x80,0x80,0xf0,0x88,0x88,0x88,0xf0,0x80,0x80,0x05,0x09,0x09,0x06,0x00,0xfe,0x50,
  0x00,0x88,0x88,0x88,0x50,0x20,0x40,0x80};

#endif
