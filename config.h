/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once




//key matrix size
//Rows are doubled up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5}
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6}

#define MASTER_RIGHT

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D0

#define BOOTMAGIC_LITE_ROW_RIGHT 0
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

#define LAYOUT_split_4x6_5( \
        L01, L02, L03, L04, L05, L06,   R01, R02, R03, R04, R05, R06\
        ,L07, L08, L09, L10, L11, L12,   R07, R08, R09, R10, R11, R12\
        ,L13, L14, L15, L16, L17, L18,   R13, R14, R15, R16, R17, R18\
                       ,L19, L20,             R19, R20               \
                       ,L21, L22, L23,   R21, R22, R23               \
                            ,L24, L25,   R24, R25                    \
    ) \
    { \
        { L01, L02, L03, L04, L05, L06 }, \
        { L07, L08, L09, L10, L11, L12 }, \
        { L13, L14, L15, L16, L17, L18 }, \
        { KC_NO, KC_NO, KC_NO, L19, L20, KC_NO}, \
        { KC_NO, KC_NO, KC_NO, L21, L22, L23 }, \
        { KC_NO, KC_NO, KC_NO, KC_NO, L24, L25 }, \
        { R01, R02, R03, R04, R05, R06 }, \
        { R07, R08, R09, R10, R11, R12 }, \
        { R13, R14, R15, R16, R17, R18 }, \
        { KC_NO, R19, R20, KC_NO, KC_NO, KC_NO }, \
        { R21, R22, R23, KC_NO, KC_NO, KC_NO }, \
        { R24, R25, KC_NO, KC_NO, KC_NO, KC_NO }  \
    }
