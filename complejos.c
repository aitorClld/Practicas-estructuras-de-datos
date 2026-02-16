#include <math.h>
#include <stdio.h>

typedef struct {
    float re;
    float im;
}TComplejo;

TComplejo crearComplejo(float re, float im) {
    TComplejo z;
    z.re = re;
    z.im = im;
    return z;
}

float parteReal(TComplejo z) {
    float re;
    re = z.re;
    return re;
}

float parteImaginaria(TComplejo z) {
    float im;
    im = z.im;
    return im;
}

float modulo(TComplejo z) {
    float modulo;
    modulo = sqrt(pow(z.re,2)+pow(z.im,2));
    return modulo;
}

TComplejo conjugado(TComplejo z) {
    TComplejo zConjugado;
    zConjugado.re = z.re;
    zConjugado.im = -z.im;
    return zConjugado;
}

TComplejo sumaComplejos(TComplejo z1, TComplejo z2) {
    TComplejo suma;
    suma.re = z1.re + z2.re;
    suma.im = z1.im + z2.im;
    return suma;
}

TComplejo restaComplejos(TComplejo z1, TComplejo z2) {
    TComplejo resta;
    resta.re = z1.re - z2.re;
    resta.im = z1.im - z2.im;
    return resta;
}

TComplejo multiplicacionComplejos(TComplejo z1, TComplejo z2) {
    TComplejo multiplicacion;
    multiplicacion.re = (z1.re*z2.re) - (z1.im*z2.im);
    multiplicacion.im = (z1.im*z2.re) + (z1.re*z2.im);
    return multiplicacion;
}

TComplejo divisionComplejos(TComplejo z1, TComplejo z2) {
    TComplejo division;
    division.re = ((z1.re*z2.re) + (z1.im*z2.im)) / (pow(z2.re,2)+pow(z2.im,2));
    division.im = ((z1.im*z2.re) - (z1.re*z2.im)) / (pow(z2.re,2)+pow(z2.im,2));
    return division;
}

void imprimirComplejo(TComplejo z) {
    if (z.im >= 0) {
        printf("%.2f",z.re);
        printf(" +%.2fj",z.im);
    }else {
        printf("%.2f",z.re);
        printf(" %.2fj",z.im);
    }
}