#include "complejos.h"
TComplejo ImpedanciaL(float l, float w);
TComplejo ImpedanciaR(float r);
TComplejo ImpedanciaC(float c, float w);
TComplejo ImpedanciaTotal(TComplejo zr, TComplejo zc, TComplejo zl);
float FrecuenciaAngular(float f);
TComplejo Intensidad(TComplejo z, TComplejo v);
TComplejo CaidaPotencial(TComplejo z, TComplejo i);