CC = cc
CFLAGS = -Wall -Wextra -Wpedantic -Wformat=2 -Wno-unused-parameter -Wshadow -Wwrite-strings -Wstrict-prototypes -Wold-style-definition -Wredundant-decls -Wnested-externs -Wmissing-include-dirs
OPTIMIZE = -O2
SANITIZE = -fsanitize=address
SRC = ""
NAME = a.out

all:
	$(CC) $(CFLAGS) $(SANITIZE) $(SRC)