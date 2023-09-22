#include "main.h"

int printchar(char *cont)
{
	int len = 0;
	while (*(cont + len) != '\0')
	{
		len++;
	}
	write(1, cont, len);
}
