# Práctica 3: Números complejos :fire:
En esta práctica se desea implementar el TAD de los números complejos y que se utilice en un problema de resolución de circuitos RLC. 

## TAD Números Complejos :japanese_ogre:
En primer lugar, se pide crear un módulo en C (`complejos.h` y `complejos.c`) que defina el TAD de números complejos con el tipo `TipoComplejo` que incluya las siguientes operaciones. Recuerda que en el `.h` estarán declarados los prototipos de las funciones y en el `.c` estarán las definiciones de dichas funciones:

```
OPERACIONES
(* OPERACIONES CONSTRUCTORAS GENERADORAS *)
CrearComplejo: Real x Real -> TipoComplejo

(* OPERACIONES OBSERVADORAS SELECTORAS *)
ParteReal: TipoComplejo -> Real
ParteImaginaria: TipoComplejo -> Real

(* OPERACIONES OBSERVADORAS NO SELECTORAS *)
Modulo: TipoComplejo -> Real

(* OPERACIONES CONSTRUCTORAS NO GENERADORAS *)
Conjugado: TipoComplejo -> TipoComplejo
Sumar: TipoComplejo x TipoComplejo -> TipoComplejo
Restar: TipoComplejo x TipoComplejo -> TipoComplejo
Multiplicar: TipoComplejo x TipoComplejo -> TipoComplejO
Dividir: TipoComplejo x TipoComplejo -> TipoComplejo
```
Se recuerda que las fórmulas para el manejo de números complejos son:

Número complejo: 

``z = (re, im)`` 

Suma de números complejos:

$z_1 + z_2$ = $(re_1 + re_2, im_1 + im_2)$ 

Resta de números complejos:

$z_1 - z_2$ = $(re_1 - re_2, im_1 - im_2)$

Producto de números complejos: 

$z_1$ $\times$ $z_2$ = $(re_1 · re_2 - im_1 · im_2, re_1 · im_2 + im_1 · re_2)$

Cociente de números complejos:

$\\frac{z_1}{z_2}$ = $(\\frac{re_1·re_2 + im_1·im_2}{re_2^2 + im_2^2})$, $(\\frac{im_1·re_2 - re_1·im_2}{re_2^2 + im_2^2})$

Módulo de un número complejo:

$|z|$ = $\sqrt{re^2 + im^2}$

Conjugado de un número complejo (dado z por la primera definición):

$\overline{x} = (re, -im)$

Ahora puedes crear un programa principal de prueba que importe la cabecera `complejos.h`, declare un par de variables de tipo complejo y las utilice con operaciones básicas llamando a las operaciones disponibles que has creado.

## TAD Circuito RLC :scream_cat:
Para utilizar a fondo el TAD anterior, se pide crear la implementación de otra unidad que defina una extensión del TAD `TipoComplejo` con la que podamos calcular los parámetros en un circuito eléctrico RCL en serie. La Ley de Ohm puede generalizarse para corriente alterna si hacemos una analogía entre la resistencia de un circuito de corriente continua y las impedancias en corriente alterna. Para el cálculo tanto de las impedancias de los componentes individuales del circuito, como de las caídas de potencial en cada componente, frecuencia de resonancia del circuito,... haremos uso de las operaciones que habíamos implementado para el manejo de variables `TipoComplejo`.

```
ImpedanciaL: Real x Real -> TipoComplejo
ImpedanciaR: Real ->  TipoComplejo
ImpedanciaC: Real x Real -> TipoComplejo
ImpedanciaTotal: TipoComplejo x TipoComplejo x TipoComplejo -> TipoComplejo
FrecuenciaAngular: Real -> Real
Intensidad: TipoComplejo x TipoComplejo -> TipoComplejo
CaidaPotencial: TipoComplejo x TipoComplejo -> TipoComplejo
```
<img width="224" height="223" alt="Captura de pantalla 2026-02-11 184228" src="https://github.com/user-attachments/assets/771befbc-a7e1-458b-bffe-5d7a1aeafe43" />

donde la relación entre la frecuencia y la frecuencia angular: $\omega = 2 \pi \nu$

La impedancia resistiva: $Z_R = R$

La impedancia capacitiva: $Z_C = \frac{1}{j\omega C} = \frac{-j}{\omega C}$

La impedancia inductiva: $Z_L = j\omega L$

Ley de Ohm: $V = I · Z$

## Programa principal :v:

A continuación crearemos un programa principal `main`que haga uso de las unidades anteriores para resolver el problema del cálculo de caídas de potencial en cada dispositivo (puntos A, B, C, D) de un circuito RCL con una fuente de corriente alterna para valores coherentes de $V_0$, $\nu$ , $C$, $L$ y $R$ (por ejemplo 220V, 50Hz, 1.2 $\micro$ F, 3 mHr, 5 k $\Omega$).

