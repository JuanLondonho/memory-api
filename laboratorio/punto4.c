#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = malloc(1*sizeof(int));
	*p = 5;
	return 0;
}