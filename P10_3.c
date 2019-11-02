#include <stdio.h>
/*Este programa genera una calculadora básica*/

int main() {
	int op, uno, dos;
	do {
		printf("---Calculadora---\n");printf("¿Qué desea hacer?\n");printf("1) Sumar\n");printf("2) Restar\n");
		printf("3) Multiplicar\n4) Dividir\n5) Salir\n");
		switch(op){
			case 1:
				printf("\tSumar\n"); 
				printf("Ingrese los números a sumar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d + %d = %d\n", uno, dos, (uno + dos));
				break;
			case 2:
				printf("\tRestar\n"); 
				printf("Ingrese los números a restar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d - %d = %d\n", uno, dos, (uno - dos));
				break;
			case 3:
				printf("\tMultiplicar\n"); 
				printf("Ingrese los números a multiplicar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d * %d = %d\n", uno, dos, (uno * dos));
				break;
			case 4:
				printf("\tDividir\n"); 
				printf("Ingrese los números a dividir separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d / %d = %d\n", uno, dos, (uno / dos));
				break;
			case 5:
				printf("\tSalir\n");
				break;
			default:
				printf("Opción inválida\n");
		}
	}
	while(op!=5);
	return 0;
	}