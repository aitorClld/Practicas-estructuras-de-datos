#include <math.h>
#include <stdio.h>
typedef struct {
    float re;
    float im;
}TComplejo;
TComplejo crearComplejo(float re, float im);
float parteReal(TComplejo z);
float parteImaginaria(TComplejo z);
float modulo(TComplejo z);
TComplejo conjugado(TComplejo z);
TComplejo sumaComplejos(TComplejo z1, TComplejo z2);
TComplejo restaComplejos(TComplejo z1, TComplejo z2);
TComplejo multiplicacionComplejos(TComplejo z1, TComplejo z2);
TComplejo divisionComplejos(TComplejo z1, TComplejo z2);
void imprimirComplejo(TComplejo z);