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
