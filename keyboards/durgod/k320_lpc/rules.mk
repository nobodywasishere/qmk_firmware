# MCU
MCU = cortex-m0
ARMV = 6
USE_FPU = no
MCU_FAMILY = LPC
MCU_SERIES = LPC11Uxx
MCU_LDSCRIPT = LPC11U24_401
MCU_STARTUP = lpc11uxx
BOARD = DURGOD_LPC_U24

DEFAULT_FOLDER=durgod/k320_lpc

# Build Options
EXTRAKEY_ENABLE = yes       # Audio control and System control
LTO_ENABLE = yes			# Enables Link Time Optimization
