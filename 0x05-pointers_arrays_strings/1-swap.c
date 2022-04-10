#include "main.h"
/**
 *swap_int - Afunction that swaps twointeger values
 *@a : integer1
 *@b : integer2
 *
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;

}



