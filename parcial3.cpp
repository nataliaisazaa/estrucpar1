#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void mostrarDatos();

int nfilas, ncolumnas, **p_matriz;

int main (){
    pedirDatos();
    mostrarDatos();
    return 0;
}

void pedirDatos(){

	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nfilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &ncolumnas);

	p_matriz = (int **)malloc(nfilas * sizeof(int *));
	for(int i = 0; i < ncolumnas; i++){
		p_matriz[i] = (int *)malloc(ncolumnas * sizeof(int ));
	}
	if(p_matriz == NULL){
		printf("\nError Reservando Memoria\n");
		exit (1);
	}else{
		printf("\nLLENADO DE MATRIZ\n");
		for(int f = 0; f < nfilas; f++){
			for(int c = 0; c < ncolumnas; c++){
				printf("\nIngrese dato para posicion [%d,%d]: ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
			}
		}
	}
}

void mostrarDatos(){



	printf("\nLa Matriz ingresada fue: \n\n");

	for(int f = 0; f < nfilas; f += 1){
		for(int c = 0; c < ncolumnas; c++){
			printf(" %d ",*(*(p_matriz+c)+f));
		}printf("\n");
	}

    printf("\t\t\n\nMOSTRAR MATRIZ TRASPUESTA\n\n");

	for(int f = 0; f < nfilas; f += 1){
		for(int c = 0; c < ncolumnas; c++){
			printf(" %d ",*(*(p_matriz+f)+c));
		}printf("\n");
	}
}
