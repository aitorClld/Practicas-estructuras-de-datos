#include "complejos.h"

TComplejo ImpedanciaL(float l, float w) {
    TComplejo zl;
    zl = crearComplejo(0,w*l);
    return zl;
}


TComplejo ImpedanciaR(float r) {
    TComplejo zr;
    zr = crearComplejo(r,0);
    return zr;
}

TComplejo ImpedanciaC(float c, float w) {
    TComplejo zc;
    zc = crearComplejo(0,-1/(c*w));
    return zc;
}

TComplejo ImpedanciaTotal(TComplejo zr, TComplejo zc, TComplejo zl) {
    TComplejo zTotal;
    zTotal = sumaComplejos(zr,zc);
    zTotal = sumaComplejos(zTotal,zl);
    return zTotal;
}

float FrecuenciaAngular(float f) {
    float w;
    w = f*2*M_PI;
    return w;
}

TComplejo Intensidad(TComplejo z, TComplejo v) {
    TComplejo i;
    i = divisionComplejos(v,z);
    return i;
}

TComplejo CaidaPotencial(TComplejo z, TComplejo i) {
    TComplejo v;
    v = multiplicacionComplejos(i,z);
    return v;
}