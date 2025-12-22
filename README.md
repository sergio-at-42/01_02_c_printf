*This project has been created as part of the 42 curriculum by sbeldjao*

---

# Printf
### Because ft_putnbr() and ft_putstr() aren’t enough

---

## Description
The goal of this project is pretty straightforward. You will recode printf(). You will mainly learn about using a variable number of arguments. How cool is that? It is actually pretty cool.

## Instructions
Add `#include "ft_printf.h.h"` at beginnig of your code to use the included functions.  

`make all` : create libftprintf.a  
`make clean` : delete .o files.  
`make fclean` : do clean + delete libftprintf.a  
`make re` : do fclean, then all.  
`make test` : compile without flags library files + main.c and create an executable file *prog* to test the code.  

`int	ft_printf(const char *format, ...)`  

**ARGUMENTS :**  
*format :*  
The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and  ends  with a conversion specifier. In between there may be (in this order) zero or more flags.  

*conversions :*  
- %c Prints a single character.  
- %s Prints a string (as defined by the common C convention).  
- %p The void * pointer argument has to be printed in hexadecimal format.  
- %d Prints a decimal (base 10) number.  
- %i Prints an integer in base 10.  
- %u Prints an unsigned decimal (base 10) number.  
- %x Prints a number in hexadecimal (base 16) lowercase format.  
- %X Prints a number in hexadecimal (base 16) uppercase format.  
- %% Prints a percent sign.  

**RETURN VALUE :**  
These functions return the number of bytes printed (excluding the null byte used to end output to strings).

## Resources
C Programming Language - 2nd Edition (Brian W.Kernighan / Dennis M.Ritchie).  
https://www.learn-c.org  
https://koor.fr/C/cstdarg/va_arg.wp  
IA : none  

Sid I., for pointing out that the 'write' function returned the number of characters it displayed, which allowed me to halve my code ;-).  

Wissem B., for helping me when I was desperately trying to figure out why my function was returning an extra character during my tests, when I was forgetting to count the line break (\n).  
