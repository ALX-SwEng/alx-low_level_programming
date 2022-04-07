//A program that prints the size of various types on the computer it is compiled and run on.
#include <stdio.h>
int main(void)
{
printf("size of char: %d byte(s)\n", sizeof(char));
printf("size of int: %d byte(s)\n", sizeof(int));
printf("size of long int: %d byte(s)\n", sizeof(long int));
printf("size of long long int: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return (0);
}
