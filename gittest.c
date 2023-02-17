#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *a = malloc(4);
	
	strcpy(a, "alo");
	printf("%s\n", a);
	
	return 0;
}
