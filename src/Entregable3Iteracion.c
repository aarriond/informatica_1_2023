/*
* Entregable 3 - iteración
* Alexis Arriondo (1380527)
*/

#include <stdio.h>
#include <math.h>

int main (){

    float totalPuntos = 0;
    int x, y = 0;
    float distancia = 0;
    int count = 21;

    for (int i = 1; i < count; i++)
    {
        printf("Ingrese coordenada x del disparo número %d\n", i);
        scanf("%d",&x);
        printf("Ingrese coordenada y del disparo número %d\n", i);
        scanf("%d",&y);

        distancia = sqrt(pow(x,2)+pow(y,2));

        if (distancia <= 1){
            totalPuntos += 10;
        }else if (distancia <= 5 ){
            totalPuntos += 5;
        }else if (distancia <= 10 ){
            totalPuntos += 1;
        }
        
    }
    
    printf("Puntos: %.2f\n", totalPuntos);

return 0;
}
