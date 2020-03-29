#include <stdio.h>

int main(){
    int a = 3, tam;
    int *punta;
    punta = &a;

    printf("Contenido de puntero: %d \n", *punta);
    printf("Direccion de memoria que almacena la variable puntero: %p \n", punta);
    printf("Direccion de memoria de la variable: %p \n", &a);
    printf("Direccion de memoria del puntero: %p \n", &punta);
    tam = sizeof(a);
    printf("Tamaño de memoria utilizada por la variable: %d \n", tam);

    return 0;   //Se puede debuguear en c, no me funciona, solo funciona con c++
}