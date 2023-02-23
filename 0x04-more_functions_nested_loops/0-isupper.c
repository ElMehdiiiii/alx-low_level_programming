#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z'){
		return(1);
	}
	return(0);
}
