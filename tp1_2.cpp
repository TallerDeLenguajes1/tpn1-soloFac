#include <stdio.h>

//PUNTO 3
//Apartado a
/*
float cuadrado(float x){

    x = x*x;

    return x;
}

int main(){
    float x;

    printf("Escriba un numero para saber su cuadrado: ");
    scanf("%f", &x);

    x = cuadrado(x);

    printf("Su cuadrado es: %f", x);

    return 0;
}*/




//Apartado B
/*
void cuadradop(float *x){
    *x = (*x)*(*x);                 //podria haber utilizado otra variable puntero inecesariamente
}*/

//Apartado C
/*
void mostrar(float x){
    float *px;
    px = &x;

    printf("Direccion de la variable: %p", px);
    printf("Contenido de la variable: %f", *px);
}
*/

//Apartado D
/*void invertir(float *p1,float *p2){
    float aux;

    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}*/

//Apartado E
/*
void ordenar(float *p1, float *p2){             //Considero que el usuario ingresara dos valores distintos
    float aux;

    if (*p1 > *p2)
    {
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
    
}
*/

int main(){
    float x, p1, p2;

    /*Apartado E
    printf("Escriba dos valores a ser ordenados en p1 sera el menor\n");
    printf("Escriba el valor del primer parametro: ");
    scanf("%f", &p1);
    printf("Escriba el valor del segundo parametro: ");
    scanf("%f", &p2);

    ordenar(&p1, &p2);

    printf("El valor de p1 ahora es: %f\n", p1);
    printf("El valor de p2 ahora es: %f\n", p2);
    */

    /* Apartado D
    printf("Escriba dos valores a ser invertidos\n");
    printf("Escriba el valor del primer parametro: ");
    scanf("%f", &p1);
    printf("Escriba el valor del segundo parametro: ");
    scanf("%f", &p2);

    invertir(&p1, &p2);

    printf("El valor de p1 ahora es: %f\n", p1);
    printf("El valor de p2 ahora es: %f\n", p2);
    */


   /*Apartado B
    printf("Escriba un numero para saber su cuadrado: ");
    scanf("%f", &x);

    cuadradop(&x);

    printf("Su cuadrado es: %f", x);
    */


    //mostrar(x);


    return 0;
}



