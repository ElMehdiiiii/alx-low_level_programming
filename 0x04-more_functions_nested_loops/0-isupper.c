#include <stdio.h>
#include <ctype.h>
int _isupper(int c)
{
	if (isupper(c)){
		printf("1");
	}
	else {
		printf("0");
	}
	return(0)
}
