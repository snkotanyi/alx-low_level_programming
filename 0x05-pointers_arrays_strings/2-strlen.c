#include "main.h"
/**
 *_strlen - calculating the length of a string
 *@s : string pointer
 *Return: Returns the length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);



}
