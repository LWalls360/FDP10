#include <stdio.h>

int main() {
	int N, CONT, AS;
	AS=0;
	CONT=1;
	printf("Teclea un número: \n");
	scanf("%i",&N);
	while (CONT<=N){
		AS=(AS+CONT);
		CONT=(CONT+2);
	}
	printf("\nEl resultado es: %i\n", AS);
	
	return 0;
}