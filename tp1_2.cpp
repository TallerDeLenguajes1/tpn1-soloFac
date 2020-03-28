#include <stdio.h>

//punto a
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




//Punto B

void cuadradop(float *x){
    *x = (*x)*(*x);     //podria haber utilizado otra variable puntero inecesariamente
}

int main(){
    float x;

    printf("Escriba un numero para saber su cuadrado: ");
    scanf("%f", &x);

    cuadradop(&x);

    printf("Su cuadrado es: %f", x);

    return 0;
}


