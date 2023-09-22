#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
void printint(int x)
{
	char buffer[20];
	snprintf(buffer, sizeof(buffer), "%d\n", x);
	write(1, buffer, strlen(buffer));
}
