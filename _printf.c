#include<stdio.h> 
#include<stdarg.h>						
 
void _printf(const char * const format,...); 
char* convert(unsigned int, int);
 
 
int main() 
{ 
	_printf("probando printf char:  %c hexadecimal: %x string: %s mas texto\n", '9', 10, "www10"); 
	return 0;
} 
 
 
void _printf(const char * const format,...) 
{
	unsigned int i, num; 
	char *str;
	int flag = 0;

	va_list arg; 
	va_start(arg, format); 
	
	i = 0;
	while (format && format[i] != '\0')
	{ 
		while (format[i] != '%') 
		{ 
			putchar(format[i]);
			i++;
			if (format[i] == '\0')
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
		i++;

		switch(format[i]) 
		{ 
			case 'c' :
				num = va_arg(arg, int);
				putchar(num);
				break;		
			case 'd' :
				num = va_arg(arg, int);
				if (num < 0)
				{
					num = -num;
					putchar('-'); 
				}
				puts(convert(num, 10));
				break; 		
			case 'o':
				num = va_arg(arg,unsigned int); // Octal
				puts(convert(num, 8));
				break;		
			case 's':
				str = va_arg(arg, char *); 	//string
				puts(str); 
				break;		
			case 'x':
				num = va_arg(arg, unsigned int); //Hexadecimal
				puts(convert(num, 16));
				break; 
		}
		i++;	
	}
	va_end(arg); 
} 
 
char *convert(unsigned int num, int base) 
{
	//Converts integer number into octal, hex, etc.
	static char Representation[]= "0123456789ABCDEF";
	static char buffer[50]; 
	char *ptr; 
	
	ptr = &buffer[49]; 
	*ptr = '\0'; 
	
	do 
	{ 
		*--ptr = Representation[num % base]; 
		num /= base; 
	}while(num != 0); 
	
	return(ptr); 
}
