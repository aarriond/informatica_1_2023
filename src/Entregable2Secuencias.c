/*
* Entregable 2 - secuencias
* Alexis Arriondo (1380527)
*/

#include <stdio.h>

int main (){

    int carta1, carta2, carta3, palo1, palo2, palo3;
    int sumatoria = 0;

    printf ("Ingrese valor de su primera carta: 1,2,3,4,5,6,7,10,11,12\n");
    scanf("%d", &carta1);
    if (carta1 > 12){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta1 == 8){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta1 == 9){
        printf ("Carta inválida\n");
        return 0;
    }
    printf ("Ingrese palo de su primera carta 1 espadas 2 basto 3 copa 4 oro\n");
    scanf("%d", &palo1);
    if (palo1 > 4){
        printf ("Palo inválida\n");
        return 0;
    }
    printf ("Ingrese valor de su segunda carta: 1,2,3,4,5,6,7,10,11,12\n");
    scanf("%d", &carta2);
    if (carta2 > 12){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta2 == 8){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta2 == 9){
        printf ("Carta inválida\n");
        return 0;
    }
    printf ("Ingrese palo de su segunda carta 1 espadas 2 basto 3 copa 4 oro\n");
    scanf("%d", &palo2);
    if (palo2 > 4){
        printf ("Palo inválida\n");
        return 0;
    }
    printf ("Ingrese valor de su tercera carta: 1,2,3,4,5,6,7,10,11,12\n");
    scanf("%d", &carta3);
    if (carta3 > 12){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta3 == 8){
        printf ("Carta inválida\n");
        return 0;
    } else if (carta3 == 9){
        printf ("Carta inválida\n");
        return 0;
    }
    printf ("Ingrese palo de su tercera carta 1 espadas 2 basto 3 copa 4 oro\n");
    scanf("%d", &palo3);
    if (palo3 > 4){
        printf ("Palo inválida\n");
        return 0;
    }

    if (palo1 == palo2){
        if (palo2 == palo3){
            printf ("Flor\n");
        } else {
            sumatoria = carta1 + carta2 + 20;
            printf ("Envido: %d puntos\n", sumatoria);
        }
    } else if (palo1 == palo3){
        sumatoria = carta1 + carta3 + 20;
        printf ("Envido: %d puntos\n", sumatoria);
    } else if (palo2 == palo3){
        sumatoria = carta2 + carta3 + 20;
        printf ("Envido: %d puntos\n", sumatoria);
    } else {
        printf ("Todas las cartas son de distinto palo\n");
    }

    return 0;
}
