#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "../funciones.h"

int devolverNumeroAleatorio(int a, int b, unsigned int intervalo){

    int resultado = 0;    

    if(b>a){
        switch (intervalo)
        {
        case 1: //cerrado
            resultado = a + rand() / (RAND_MAX / (b - a + 1) + 1);
            break;
        case 2: //abierto a izquierda
            /* rand(min+1,max) */
            resultado = (a+1) + rand() / (RAND_MAX / (b - (a+1) + 1) + 1);
            break;            
        case 3: //abierto a derecha
            /* rand(min,max-1) */
            resultado = a + rand() / (RAND_MAX / ((b-1) - a + 1) + 1);
            break;
        case 4: //abierto
            /* rand(min+1,max-1) */
            resultado = (a+1) + rand() / (RAND_MAX / ((b-1) - (a+1) + 1) + 1);
            break;                
        default:
            printf("Opción de intervalo inválida - salir del programa\n");
            break;
        }
    }else{
        printf("Intervalo inválido - salir del programa\n");
    }

    return resultado;
}

void imprimeFloatByteAByte(float *ptrNumero){

    char *ptrChar = 0;
    ptrChar = (char*)ptrNumero;

    printf("Bytes impresos en hexa:\t");
    for (int i = sizeof(*ptrNumero)-1; i > -1; i--)
    {
        printf("%02x\t", *(ptrChar+i));
    }

    printf("\n");
}

float devolverMedia(float *stringEntrada,int tamanio){

    int tamanioArray = 0;
    float suma = 0.0;
    float resultado = 0.0;
    tamanioArray = tamanio;
    for (size_t i = 0; i < tamanioArray; i++)
    {
        suma = (suma + stringEntrada[i]);
    }

    resultado = (suma/tamanioArray);
    
    return resultado;

}

float devolverMediana(float *stringEntrada,int tamanio){

    int tamanioArray = 0;
    float resultado = 0.0;
    float aux = 0.0;
    tamanioArray = tamanio;
    printf("tamanio de la entrada: %d\n", tamanioArray);
    printf("entrada del array parcial: %f\n",stringEntrada[0]);

    //ordenar array
    
    for (size_t j = 0; j < tamanioArray-1; j++)
    {
        for(size_t k = j + 1; k < tamanioArray; k++){
            if(stringEntrada[j]>stringEntrada[k]){
                aux = stringEntrada[j];
                stringEntrada[j]=stringEntrada[k];
                stringEntrada[k]=aux;
            }
        }
    }
    
    if(tamanioArray%2 == 1){
        resultado = stringEntrada[(tamanioArray/2)];
    }else{
        resultado = (stringEntrada[tamanioArray/2]+stringEntrada[(tamanioArray/2)-1])/2;
    }
    
    return resultado;
}

float devolverMayor(float *stringEntrada,int tamanio){

    int tamanioArray = 0;
    float acumulador = stringEntrada[0];
    tamanioArray = tamanio;
    printf("tamanio de la entrada: %d\n", tamanioArray);
    printf("entrada del array parcial: %f\n",stringEntrada[0]);
    for (size_t i = 0; i < tamanioArray; i++)
    {
        if(acumulador < stringEntrada[i])
        {
            acumulador = stringEntrada[i];
        }
    }
   
    return acumulador;

}

float devolverMenor(float *stringEntrada,int tamanio){

    int tamanioArray = 0;
    float acumulador = stringEntrada[0];
    tamanioArray = tamanio;
    printf("tamanio de la entrada: %d\n", tamanioArray);
    printf("entrada del array parcial: %f\n",stringEntrada[0]);
    for (size_t i = 0; i < tamanioArray; i++)
    {
        if(acumulador > stringEntrada[i])
        {
            acumulador = stringEntrada[i];
        }
    }
   
    return acumulador;

}

void copiarSoloPrimos(int *stringEntrada, int *stringSalida, int tamanio){

    int tamanioArray = 0;
    tamanioArray = tamanio;
    int d = 0;
    for (size_t i = 0; i < tamanioArray; i++)
    {
        
        if(aux_esPrimo(stringEntrada[i]) == 1){
            stringSalida[d] = stringEntrada[i];
            d++;
        }
    }
    
    for (size_t k = 0; k < d; k++)
    {
        printf("%d\t", stringSalida[k]);
    }
    

}

