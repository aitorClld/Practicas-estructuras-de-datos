#include <stdio.h>
#define NUMELEMS 2
void intercambiarPorValor(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void intercambiarPorReferencia(int *a,int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ejercicio1(){
    //Declarar variables
    int x,y;
    //Pedir los numeros a los que les vamos a cambiar los valores
    printf("Introduzca el primer numero:");
    scanf("%d",&x);
    printf("Introduzca el segundo numero:");
    scanf("%d",&y);
    //Cambiamos los valores
    intercambiarPorValor(&x,&y);
    printf("Por valor: ");
    printf("x = %d, ",x);
    printf("y = %d\n",y);
    intercambiarPorReferencia(&x,&y);
    printf("Por referencia: ");
    printf("x = %d, ",x);
    printf("y = %d\n",y);
}

void intercambiarPorValorArray(int arr[NUMELEMS]){
    int aux;
    aux = arr[0];
    arr[0] = arr[1];
    arr[1] = aux;
}

void intercambiarPorReferenciaArray(int *arr){
    int aux;
    aux = *arr;
    *arr = *(arr+1);
    *(arr+1) = aux;
}

void ejercicio2(){
    //Declarar variables
    int array[NUMELEMS];
    //Pedir los numeros a los que les vamos a cambiar los valores
    printf("Introduzca el primer numero:");
    scanf("%d",&array[0]);
    printf("Introduzca el segundo numero:");
    scanf("%d",&array[1]);
    //Cambiamos los valores
    intercambiarPorValorArray(array);
    printf("Por valor: ");
    printf("x = %d, ",array[0]);
    printf("y = %d\n",array[1]);
    intercambiarPorReferenciaArray(&array);
    printf("Por referencia: ");
    printf("x = %d, ",array[0]);
    printf("y = %d\n",array[1]);
}


void intercambiarPorValorContenido(int a[], int b[], int dim) {
    for (int i=0;i<dim;i++) {
        int aux;
        aux = a[i];
        a[i] = b[i];
        b[i] = aux;
    }
}

void intercambiarPorValor3(int *a, int *b) {
    int *aux;
    aux = a;
    a = b;
    b = aux;
}

void intercambiarPorReferencia3(int **pa, int **pb) {
    int *aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void ejercicio3(){
    //Declarar las variables
    int a[NUMELEMS];
    int b[NUMELEMS];
    //Pedir los numeros
    printf("x1:");
    scanf("%d",&a[0]);
    printf("x2:");
    scanf("%d",&a[1]);
    printf("y1:");
    scanf("%d",&b[0]);
    printf("y2:");
    scanf("%d",&b[1]);
    //Le pasamos la drieccion del primer elemento del array a un puntero
    int *pa=&a[0];
    int *pb=&b[0];
    //Version buena
    intercambiarPorReferencia3(pa, pb);
    //Imprimir los arrays
    for (int i =0; i<NUMELEMS;i++) {
        printf("x%d = %d, ",i+1,a[i]);
    }
    for (int i =0; i<NUMELEMS;i++) {
        printf("y%d = %d, ",i+1,b[i]);
    }
}

