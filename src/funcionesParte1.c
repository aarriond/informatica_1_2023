#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void devolverNumeroAleatorio(int a, int b, unsigned int intervalo){

    if(b>a){
        switch (intervalo)
        {
        case 1: //cerrado
            /* rand(min,max) */
            break;
        case 2: //abierto a izquierda
            /* rand(min+1,max) */
            break;            
        case 3: //abierto a derecha
            /* rand(min,max-1) */
            break;
        case 4: //abierto
            /* rand(min+1,max-1) */
            break;                    
        default:
            printf("Opción de intervalo inválida - salir del programa\n");
            break;
        }
    }else{
        printf("Intervalo inválido - salir del programa\n");
    }

}