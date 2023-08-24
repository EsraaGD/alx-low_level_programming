#include "main.h"
#include <stdio.h>
/**
* rot13 - encoder rot13
* @s: pointer to string params
*
* Return: *s
*/
char *rot13(char *s)
{
int w;
int x;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (w = 0; s[w] != '\0'; w++)
{
for (x = 0; x < 52; x++)
{
if (s[w] == data1[x])
{
s[w] = datarot[x];
break;
}
}
}
return (s);
}
