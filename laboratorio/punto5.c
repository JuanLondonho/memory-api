#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = malloc(100*sizeof(int));
	*(p+100) = 0;
	return 0;
}
