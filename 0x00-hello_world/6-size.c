#include <stdio.h>
/**
 * main - A program that prints the size of various types of computer
 * Return: 0
 */
int main(void)
{
printf("size of char: %zu bytes(s)\n", sizeof(char));
printf("size of int: %zu bytes(s)\n", sizeof(int));
printf("size of long int: %zu bytes(s)\n", sizeof(long int));
printf("size of long long int: %zu bytes(s)\n", sizeof(long long int));
printf("size of float: %zu bytes(s)\n", sizeof(float));
return (0);
}
