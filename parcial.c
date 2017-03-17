#include <stdio.h>
struct fechas{
    int dias;
    int meses;
    int anos;
}fechass[5], *p_fechas=fechass;
void pedirDatos();
void mostrarDatos();
int main (){
    pedirDatos();
    mostrarDatos();
    return 0;
}
void pedirDatos(){
    for(int i=0;i<3;i++){

        printf("Ingrese dias %d: ", i+1);
        scanf("%d",&(p_fechas+i)->dias);
        printf("\n Ingrese meses %d: ", i+1);
        scanf("%d", &(p_fechas+i)->meses);
        printf("\n Ingrese años %d: ", i+1);
        scanf("%d",&(p_fechas+i)->anos);
        printf("\n");
    }
}
void mostrarDatos(){
    int tdias=0;
    int tmeses=0;
    int tanos=0;

    for(int i=0;i<3;i++){
         tdias+=(p_fechas+i)->dias;
        tmeses+=(p_fechas+i)->meses;
        tanos+=(p_fechas+i)->anos;
        if (tdias>=60){
            tmeses+=1;
            tanos-=60;
        }
        if(tmeses>=60){
            tanos+=1;
            tmeses-=60;
        }
    }
    printf("la fecha es en :  %d dia %d mes %d año",tdias,tmeses,tanos);
}
