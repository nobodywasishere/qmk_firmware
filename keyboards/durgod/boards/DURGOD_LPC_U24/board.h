// Copyright 2021 Vlad Conut (@putyn)
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef _BOARD_H_
#define _BOARD_H_

#include <stdint.h>

/* Setup for DURGOD Taurus K320 (base) w/ LPC11U24/401 */

/* Board identifiers. */
#define DURGOD_LPC_U24
#define BOARD_NAME "Durgod K320 w/ LPC11U24"

/* MCU even if you are actually using an LPC11U24 */
#define LPC11U35

/*  Board frequencies. */
#define LPC_SYSOSC_FREQUENCY    12000000UL

/* Pin mapping
 * Idealy would have used PIOx_y however that conflicts with LPC_IOCON_Type struct
 */

/* USB */
#define USBCONN         PAL_LINE(IOPORT0, 6)
#define USBVBUS         PAL_LINE(IOPORT0, 3)

/* Switch K1 */
#define P1_29        PAL_LINE(IOPORT1, 29)
/* CAPS_LOCK (LED135) */
#define P1_28        PAL_LINE(IOPORT1, 28)
/* SCROLL_LOCK (LED136) */
#define P1_31        PAL_LINE(IOPORT1, 31)
/* WIN_LOCK (LED137) */
#define P1_21        PAL_LINE(IOPORT1, 21)
/* MB_LOCK (LED138) */
#define P1_13        PAL_LINE(IOPORT1, 13)

/* Columns */
#define P1_22        PAL_LINE(IOPORT1, 22)
#define P0_16        PAL_LINE(IOPORT0, 16)
#define P0_23        PAL_LINE(IOPORT0, 23)
#define P1_15        PAL_LINE(IOPORT1, 15)
#define P0_17        PAL_LINE(IOPORT0, 17)
#define P0_18        PAL_LINE(IOPORT0, 18)
#define P0_19        PAL_LINE(IOPORT0, 19)
#define P1_16        PAL_LINE(IOPORT1, 16)
#define P1_25        PAL_LINE(IOPORT1, 25)
#define P1_19        PAL_LINE(IOPORT1, 19)
#define P0_2         PAL_LINE(IOPORT0,  2)
#define P1_26        PAL_LINE(IOPORT1, 26)
#define P1_27        PAL_LINE(IOPORT1, 27)
#define P1_20        PAL_LINE(IOPORT1, 20)
#define P0_21        PAL_LINE(IOPORT0, 21)
#define P1_23        PAL_LINE(IOPORT1, 23)

/* Rows */
#define P0_7         PAL_LINE(IOPORT0,  7)
#define P0_8         PAL_LINE(IOPORT0,  8)
#define P0_9         PAL_LINE(IOPORT0,  9)
#define P0_22        PAL_LINE(IOPORT0, 22)
#define P0_11        PAL_LINE(IOPORT0, 11)
#define P0_12        PAL_LINE(IOPORT0, 12)
#define P0_13        PAL_LINE(IOPORT0, 13)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif

#endif
