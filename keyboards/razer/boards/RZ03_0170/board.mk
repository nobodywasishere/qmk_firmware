# List of all the board related files.
BOARDSRC = $(BOARD_PATH)/boards/RZ03_0170/board.c

# Required include directories
BOARDINC = $(BOARD_PATH)/boards/RZ03_0170

# Shared variables
ALLCSRC += $(BOARDSRC)
ALLINC  += $(BOARDINC)
