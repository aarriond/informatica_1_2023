#include <stdio.h>
#include "funciones.h"
#define ARRAY_MAX 50

int main (void){
    
    unsigned int opcion = 0;
    unsigned int retorno = 0;
    
    printf("Ingrese una opción: \n");
    printf("1 - Parte 1\n");
    printf("2 - Parte 2\n");
    printf("3 - Parte 3\n");
    printf("4 - Parte 4\n");
    printf("5 - Parte 5\n");
    printf("0 - salir del programa\n");

    scanf("%u", &opcion);

    switch(opcion){
        case 1:
            printf("Parte 1 - ingrese un ejercicio: \n");
            printf("1\n");
            printf("2\n");
            printf("3\n");
            printf("4\n");
            printf("5\n");
            printf("6\n");
            printf("7\n");
            printf("8\n");
            scanf("%d", &opcion);
            switch(opcion){
                case 1:
                    int arg1, arg2;
                    unsigned int arg3;
                    printf("Ingrese un número entero: \n");
                    scanf("%d", &arg1);
                    printf("Ingrese un número entero: \n");
                    scanf("%d", &arg2);
                    printf("Ingrese un tipo de intervalo: \n");
                    printf("1 - cerrado \n");
                    printf("2 - abierto a izquierda\n");
                    printf("3 - abierto a derecha\n");
                    printf("4 - abierto\n");
                    scanf("%d", arg3);
                    devolverNumeroAleatorio(arg1, arg2, arg3);
                    break;
                case 2:
                    float var1;
                    printf("Ingrese un número real: \n");
                    scanf("%f", &arg1);
                    imprimeFloatByteAByte(&var1);
                    break;
                case 3:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverMediana(array1);
                    break;
                case 4:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverMedia(array1);
                    break;
                case 5:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverModa(array1);
                    break;
                case 6:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverMayor(array1);
                    break;
                case 7:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverMenor(array1);
                    break;
                case 8:
                    int array1[ARRAY_MAX];
                    int array2[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    for (int i = 0; i < 50; i++){
                        array2[i] = 0;
                    }
                    copiarSoloPrimos(array1, array2);
                    break;
            }
        case 2:
            printf("Parte 2 - ingrese un ejercicio: \n");
            printf("1\n");
            printf("2\n");
            printf("3\n");
            printf("4\n");
            printf("5\n");
            printf("6\n");
            printf("7\n");
            printf("8\n");
            scanf("%d", &opcion);
            switch(opcion){
                case 1:
                    char *ptrString;
                    printf("Ingrese un string para invertir: \n");
                    ptrString = fgets();
                    invertirString(*ptrString);
                    break;
                case 2:
                    float var1;
                    printf("Ingrese un número real: \n");
                    scanf("%f", &var1);
                    removerEspacios(&var1);
                    break;
                case 3:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    convertirAMayusculas(array1);
                    break;
                case 4:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    convertirAMinusculas(array1);
                    break;
                case 5:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    convertirACamelCase(array1);
                    break;
                case 6:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    encontrarCaracter(array1);
                    break;
                case 7:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    removerCaracter(array1);
                    break;
                case 8:
                    int array1[ARRAY_MAX];
                    int array2[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    for (int i = 0; i < 50; i++){
                        array2[i] = 0;
                    }
                    desplazarNPosiciones(array1, array2);
                    break;
            }
            break;
        case 3:
        printf("Parte 1 - ingrese un ejercicio: \n");
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("4\n");
        printf("5\n");
        scanf("%d", opcion);
            switch(opcion){
                case 1:
                    int arg1, arg2;
                    unsigned int arg3;
                    printf("Ingrese un número entero: \n");
                    scanf("%d", &arg1);
                    printf("Ingrese un número entero: \n");
                    scanf("%d", &arg2);
                    printf("Ingrese un tipo de intervalo: \n");
                    printf("1 - cerrado \n");
                    printf("2 - abierto a izquierda\n");
                    printf("3 - abierto a derecha\n");
                    printf("4 - abierto\n");
                    scanf("%u", &arg3);
                    devolverStringBinarioComoNumero(arg1, arg2, arg3);
                    break;
                case 2:
                    float var1;
                    printf("Ingrese un número real: \n");
                    scanf("%f", &arg1);
                    devolverStringOctalComoNumero(&var1);
                    break;
                case 3:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    devolverStringHexaComoNumero(array1);
                    break;
                case 4:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    imprimirNumeroEnBases(array1);
                    break;
                case 5:
                    float array1[ARRAY_MAX];
                    unsigned int varControl = 0;
                    for (int i = 0; i < 50 || varControl != 0; i++){
                        printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        scanf("%f", array1[i]);
                        varControl = array1[i];
                    }
                    imprimirNumerBaseNComoString(array1);
                    break;
            }
            break;
        case 4:
            printf("Enunciado A\n");
            //menu control de ventas;
            break;
        case 5:
            printf("Enunciado B\n");
            //menu encriptado;
            break;
        case 0:
            retorno = 1;
            break;
    }

    if(retorno==1){
        printf("Salida del programa\n\n");
        return 0;
    }

    return 0;
}