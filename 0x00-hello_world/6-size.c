#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return: 0 (success)
 */

int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

Sizeof operator is used to evaluate the size of a variable
printf("Size of int: %ld bytes\n", sizeof(integerType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
printf("Size of double: %ld bytes\n", sizeof(doubleType));
printf("Size of char: %ld byte\n", sizeof(charType));

Return(0);
}
