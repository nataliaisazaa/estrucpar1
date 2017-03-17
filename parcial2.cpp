#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void mostrarDatos();
void fibonacci();

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

		}
	}
	int fibo(int n)
{

}


void fibonacci(){
    if(ffilas == 0 || ffilas == 1)
       return ffilas;
    else
       return ffilas(n - 2) + ffilas(n - 1);
}
void mostrarDatos(){
    int i;

    do
    {


    } while(ffilas < 0);

    printf("\nLa serie es: \n\n\t");

    for(i=0; i<ffilas; i++)
    {
       if(fibonacci(i) != 0)


        printf("el fibonacci",fibonacci());
    }

printf("\n");
		}


