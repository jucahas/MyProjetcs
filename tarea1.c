/*
*Autor: Juan Carlos Gutierrez Astudillo
*Fecha: 11 de septiembre del 2022
*Ramo: Estructuras de datos y algoritmos ELO320
*Profesora: Maria Jose Escobar Silva
*/

//Importación de las librerias que se utilizan en el programa.
#include <stdio.h>
#include <stdlib.h>
#include "tarea1.h"
#include <time.h>

//Imprime todos los números pares del 1 al 50.
void funcion1(){
    int i, arreglo[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    for (i = 0; i < 50; i++){
        if (arreglo[i] % 2 == 0){
            printf("\n%d", arreglo[i]);
        }
    }
}

//Imprime todos los números impares del 1 al 50.
void funcion2(){
    int i, arreglo[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    for (i = 0; i < 50; i++){
        if (arreglo[i] % 2 == 1){
            printf("\n%d", arreglo[i]);
        }
    }
}

//Calcula el factorial de un número.
void funcion3(){
    int i = 1, f = 1,n;
    printf("Digite un numero\n");
    scanf("%d",&n);
    if (n >= 0){
        while (i <= n){
            f *= i;
            i++;
        }
        printf("El factorial del numero %d es: %d",n,f);
    }
    else{
        printf("No se puede calcular el factorial de ese numero");
    }
}

//Le pide al usuario que ingrese un número, luego calcula el volumen de una esfera con ese radio.
void funcion4(){
    double radio_esfera, volumen_esfera;
    printf("Digite el radio de la esfera: ");
    scanf("%lf", &radio_esfera);
    double radio_al_cubo = (radio_esfera * radio_esfera * radio_esfera);
    volumen_esfera = (4/3.0) * 3.1416 * (radio_al_cubo);
    printf("\nEl volumen de la esfera es: %lf",volumen_esfera);
}

// Genera un numero aleatorio entre 1 y 6.
void funcion5(){
//Se utiliza para que la semilla sea aleatorio y no sea estatico.
    srand(time(NULL));
    int rango=6-1;
//Se genera un numero aleatorio y se acota mediante modulo.
    int n=rand() %rango + 1;
    printf("\nLa cara que sale al lanzar el dado es: %d", n);
}

//Función principal.
int main(){
    int opcion=-1;

//Este es el menú que permite al usuario seleccionar la función que desea implementar.
    printf("\nIngrese la funcion que desea implementar:\n");
    printf("\t1. Mostrar los numeros pares del 1 al 50\n");
    printf("\t2. Mostrar los numeros impares del 1 al 50\n");
    printf("\t3. Calcular el factorial de un numero\n");
    printf("\t4. Calcular el volumen de una esfera a partir de su radio\n");
    printf("\t5. Muestre por pantalla el resultado de lanzar un dado de 6 caras\n\n");

//Esta es una función que permite al usuario ingresar un número y almacenarlo en la variable "opcion"
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

/*
*Esta es una declaración de cambio
*Se utiliza para ejecutar un bloque de código dependiendo del caso seleccionado
*/
    switch (opcion)
    {
    case 1:
        funcion1();
        printf("\n");
        break;
    case 2:
        funcion2();
        printf("\n");
        break;
    case 3:
        funcion3();
        printf("\n");
        break;
    case 4:
        funcion4();
        printf("\n");
        break;
    case 5:
        funcion5();
        printf("\n");
        break;
    default:
        printf("Opcion no valida\n\n");
        break;
    }

}

