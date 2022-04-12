#include "main.h"
char print_alphabet(void)
{
	for(int i=97; i<=121; i++)
	{
		char result=i+'0';	
		_putchar(result);
	}
	_putchar('\n');

	return 0;
}
