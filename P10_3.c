#include <stdio.h>
/*Este programa genera una calculadora b�sica*/

int main() {
	int op, uno, dos;
	do {
		printf("---Calculadora---\n");printf("�Qu� desea hacer?\n");printf("1) Sumar\n");printf("2) Restar\n");
		printf("3) Multiplicar\n4) Dividir\n5) Salir\n");
		switch(op){
			case 1:
				printf("\tSumar\n"); 
				printf("Ingrese los n�meros a sumar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d + %d = %d\n", uno, dos, (uno + dos));
				break;
			case 2:
				printf("\tRestar\n"); 
				printf("Ingrese los n�meros a restar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d - %d = %d\n", uno, dos, (uno - dos));
				break;
			case 3:
				printf("\tMultiplicar\n"); 
				printf("Ingrese los n�meros a multiplicar separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d * %d = %d\n", uno, dos, (uno * dos));
				break;
			case 4:
				printf("\tDividir\n"); 
				printf("Ingrese los n�meros a dividir separados por coma\n");scanf("%d, %d", &uno, &dos);
				printf("%d / %d = %d\n", uno, dos, (uno / dos));
				break;
			case 5:
				printf("\tSalir\n");
				break;
			default:
				printf("Opci�n inv�lida\n");
		}
	}
	while(op!=5);
	return 0;
	}