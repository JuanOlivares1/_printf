#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    printf("----------------------------------\n");
    len = _printf("len %d hola\n", 1323333);
    len2 = printf("len %d hola\n", 1323333);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("len %%\n");
    len2 = printf("len %%\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("----------------------------------\n");
    len = _printf("len %c hola\n", 'z');
    len2 = printf("len %c hola\n", 'z');
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("len %s hola %c more %s txt\n", "string", 'z', "asdasd");
    len2 = printf("len %s hola %c more %s txt\n", "string", 'z', "asdasd");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("len %c hola %k\n", 'z');
    len2 = printf("len %c hola %k\n", 'z');
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%s\n",(char *)0);
    len2 = printf("%s\n",(char *)0);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("123%s456\n", NULL);
    len2 = printf("123%s456\n", NULL);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf(NULL);
    len2 = printf(NULL);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("asd%\n");
    len2 = printf("asd%\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("###############################################################\n");
    int max = INT_MAX, min = INT_MIN;

    len = _printf("asd%dasd %i, %d %i %d\n", max, min, -999*9, 4444, 5);
    len2 = printf("asd%dasd %i, %d %i %d\n", max, min, -999*9, 4444, 5);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    printf("///////////////////////////////////////////////////////////////\n");

    len = _printf("%o\n", -123);
    len2 = printf("%o\n", -123);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%x\n", -123);
    len2 = printf("%x\n", -123);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("%X\n", -123);
    len2 = printf("%X\n", -123);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    len = _printf("%u\n", UINT_MAX);
    len2 = printf("%u\n", UINT_MAX);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
}
