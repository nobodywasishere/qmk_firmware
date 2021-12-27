// Copyright 2021 Vlad Conut (@putyn)
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef _MCUCONF_H_
#define _MCUCONF_H_

//even if we are actually using an LPC11U24
#define LPC11U35_MCUCONF

#define LPC_USE_SYSOSC                              TRUE
#define LPC_SYSOSC_FREQUENCY                        12000000UL // 12MHz
#define LPC_SYSPLLCLKSEL                            SYSCON_SYSPLLCLKSEL_SYSOSC
#define LPC_MAINCLKSEL                              SYSCON_MAINCLKSEL_PLLOUT
#define LPC_SYSPLL_MULT                             4   // MVALUE 4 -> bits 0b00011
#define LPC_SYSPLL_PDIV                             4   // PSEL 2 -> bits 0b01
#define LPC_SYS_DIV                                 1   // NO SYS DIV

#define LPC_USB_USE_USB1                            TRUE
#define LPC_USB_USB1_IRQ_PRIORITY                   1

#endif /* _MCUCONF_H_ */
