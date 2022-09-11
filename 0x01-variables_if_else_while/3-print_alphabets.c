#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwasy 0 (success)
 */
int main(void)
{
char c = 'a';
char C = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (c <= 'Z')
{
putchar(C);
c++;
}
putchar('\n');
return (0);
}
