#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;
/*
    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
   
    p = malloc(sizeof(char) * 30); 
    p = _realloc(p, sizeof(char) * 30, sizeof(char) * 120);
    i = 0;
    while (i < 120)
    {
        p[i++] = 120;
    }
    simple_print_buffer(p, 120);
    free(p);
    
    _realloc(NULL, sizeof(char) * 30, sizeof(char) * 120);
    
    p = malloc(sizeof(char) * 30);
    p = _realloc(p, sizeof(char) * 30, sizeof(char) * 30);
     i = 0;
    while (i < 30)
    {
        p[i++] = 30;
    }
    simple_print_buffer(p, 30);
    free(p);
    */
    p = malloc(sizeof(char) * 30);
    p = _realloc(p, sizeof(char) * 30, sizeof(char) * 20);
     i = 0;
    while (i < 20)
    {
        p[i++] = 0;
    }
    simple_print_buffer(p, 0);
    free(p);
    
    return (0);
}
