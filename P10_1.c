#include <stdio.h>
#include <stdlib.h>

int main() {
	int *apuntador=NULL;
	apuntador= (int*)malloc(sizeof(int));
	*apuntador=4;
	printf("%d, %p\n",*apuntador, apuntador);
	free(apuntador);
	return 0;
}