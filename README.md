# Project: C - printf
The _printf_ function mirrors the functionalities of the printf function found in the C library included in the stdio.h file, in this case we use these conversion specifiers: c, s, %, d and i.
Printf is a special function, the first argument it receives is fixed and is the format string (the format string is a normal string containing a series of format conversions, each starting with the % character and describing the format to be applied to the corresponding argument).
This printf calls as many parameters as the number of marks included in the format string, plus one that is the format string itself.

# For example
#include "main.h"
_printf("I get up every day at %d in the morning and go to %s"., 6, "work");

Print this:
I get up every day at 6 in the morning and go to work.

# Specifiers characteres:
| Specifier | Character |
| ------------- | ------------- |
|  c  |  Character  |
|  s  | String of character  |
|  %  |  Followed by a %, prints another %  |
|  d  |  Decimal  |
|  i  |  Integer  |
