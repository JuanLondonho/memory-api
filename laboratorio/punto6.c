#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = malloc(100*sizeof(int));
	free(p);
	printf("%d\n", *(p+1));
	return 0;


}
