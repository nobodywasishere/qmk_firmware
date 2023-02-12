// Copyright 2021 Vlad Conut (@putyn)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x1532
#define PRODUCT_ID   0x0214
#define DEVICE_VER   0x0001
#define MANUFACTURER "Razer USA, Ltd"
#define PRODUCT      "BlackWidow Ultimate 2016"

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 16

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { P0_7, P0_8, P0_9, P0_22, P0_11, P0_12, P0_13 }
#define MATRIX_COL_PINS { P1_22, P0_16, P0_23, P1_15, P0_17, P0_18, P0_19, P1_16, P1_25, P1_19, P0_2 , P1_26, P1_27, P1_20, P0_21, P1_23 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* LED indicator pins */
#define LED_CAPS_LOCK_PIN   P1_28
#define LED_SCROLL_LOCK_PIN P1_31
#define LED_WIN_LOCK_PIN    P1_21
#define LED_MR_LOCK_PIN     P1_13
#define LED_PIN_ON_STATE    0

/* Original hardware "reset" button */
#define HARDWARE_RESET_PIN  P1_29
