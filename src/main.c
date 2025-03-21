#include <stdio.h>
#include <stdlib.h>
#include <commons/txt.h>

int main() {
    float grados,farenheit;
    printf("Ingrese los grados en celsius: \n");
    scanf("%f",&grados);
    farenheit = grados*1.80 + 32;
    printf("Los grados farenheit son: %.3f \n",farenheit);
    return 0;
}
