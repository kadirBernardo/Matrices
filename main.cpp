#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int f, c;
    float matrizVentas[3][5];
    float promedio=0, total=0;

    for(f=0; f<3; f++){
        for(c=0; c<5; c++){
            printf("Ingrese el valor para el vendedor %i: ", f+1);
            scanf("%f", &matrizVentas[f][c]);
        }
    }

    for(f=0; f<3; f++){
        for(c=0; c<5; c++){
        total += matrizVentas[f][c];
        }
    }

    promedio = total/15.0;

    printf("El valor total vendido esta semana fue de: %.2f\n", total);
    printf("El total de las ventas es: %.2f", promedio);

 return 0;
}
