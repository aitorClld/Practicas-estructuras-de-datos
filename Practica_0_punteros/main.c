#include <stdio.h>
#include "Ejercicios.h"

 int main(void) {
     //Declarar variables
     int n=0;
     do {
         printf("*****PRACTICA 0*****\n");
         printf("1.Ejercicio 1.\n");
         printf("2.Ejercicio 2.\n");
         printf("3.Ejercicio 3.\n");
         printf("4.Finalizar.\n");
         do {
             printf("Elige ejercicio:");
             scanf("%d",&n);
         }while (n<1 || n>4);
         switch (n) {
             case 1://Ejercicio 1
                 ejercicio1();
                 break;
             case 2://Ejercicio 2
                 ejercicio2();
                 break;
             case 3://Ejercicio 3
                 ejercicio3();
                 break;
             case 4://Finalizar
                 printf("La practica 0 finalizo.");
                 break;
         }
     }while (n=!4);
     return 0;
 }
