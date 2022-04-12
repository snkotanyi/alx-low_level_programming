#include "main.h"
/**
 * _puts - a function that prints a string
 *
 * @str : pointer string
 *Return : Return nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;

}
_putchar('\n');


}

