#include <stdio.h>
/**
 * main - print the string in the printf function
 * today 19th sept
 * Description: using the main function
 * this program prints sizes of char, int, floats
 * Return: 0
 */
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: byte(s)\n", sizeof(li));
printf("Size of a long long int: byte(s)\n", sizeof(lli));
printf("Size of a float: byte(s)\n", sizeof(f));
return (0);
}
