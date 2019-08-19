#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = malloc(100*sizeof(int));
	int *q = p+50;
	free(q);
	return 0;
}
