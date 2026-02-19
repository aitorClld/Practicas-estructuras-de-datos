#include <stdio.h>
#include "corrienteAlterna.h"


int main(void) {
    TComplejo i,v,zr,zl,zc,va,vb,vc,vd,zTotal;
    float w;
    v = crearComplejo(220,0);
    w = FrecuenciaAngular(50);
    zr = ImpedanciaR(5000);
    zc = ImpedanciaC(1.2*pow(10,-6),w);
    zl = ImpedanciaL(0.003,w);
    zTotal = ImpedanciaTotal(zr,zc,zl);
    i = Intensidad(zTotal,v);
    va = v;
    vb = sumaComplejos(CaidaPotencial(zl,i),CaidaPotencial(zc,i));
    vc = CaidaPotencial(zc,i);
    vd = crearComplejo(0,0);
    imprimirComplejo(va);
    printf("\n");
    imprimirComplejo(vb);
    printf("\n");
    imprimirComplejo(vc);
    printf("\n");
    imprimirComplejo(vd);
    return 0;
}