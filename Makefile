CC = gcc
CFLAGS = -Wall -Wextra

TOUPPER_IN = toUppercase/main.c
TOUPPER_OUT = bin/toUpper

TOLOWER_IN = toLowercase/main.c
TOLOWER_OUT = bin/toLower

FILTER_IN = filter_bychar/main.c
FILTER_OUT = bin/filter

REVERSE_IN = reverse_lines/main.c
REVERSE_OUT = bin/reverse

GREP_IN = grep_lines/main.c
GREP_OUT = bin/grep

default:
	mkdir bin
	$(CC) $(TOUPPER_IN) -o $(TOUPPER_OUT) $(CFLAGS)
	$(CC) $(TOLOWER_IN) -o $(TOLOWER_OUT) $(CFLAGS)
	$(CC) $(FILTER_IN) -o $(FILTER_OUT) $(CFLAGS)
	$(CC) $(REVERSE_IN) -o $(REVERSE_OUT) $(CFLAGS)
	$(CC) $(GREP_IN) -o $(GREP_OUT) $(CFLAGS)