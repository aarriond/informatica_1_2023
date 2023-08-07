#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include "../funciones.h"

char * invertirString(char *stringEntrada){

    char aux = '0';
    for(int k = 0; k <= (strlen(stringEntrada)/2); k++){
        aux = stringEntrada[k];
        stringEntrada[k] = stringEntrada[strlen(stringEntrada)-1-k];
        stringEntrada[strlen(stringEntrada)-1-k] = aux;
    }

    return stringEntrada;
}
char * removerEspacios(char *stringEntrada){

    int d = 0;
    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] != ' '){
            stringEntrada[d] = stringEntrada[k];
            d++;
        }
    }
    stringEntrada[d] = '\0';
    return stringEntrada;
}
char * convertirAMayusculas(char *stringEntrada){

    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] >= 'a' && stringEntrada[k] <= 'z'){
            stringEntrada[k] = stringEntrada[k]-32;
        }
    }

    return stringEntrada;
}
char * convertirAMinusculas(char *stringEntrada){

    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] >= 'A' && stringEntrada[k] <= 'Z'){
            stringEntrada[k] = stringEntrada[k]+32;
        }
    }

    return stringEntrada;
}
char * convertirACamelCase(char *stringEntrada){
    
    int d = 0;
    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] != ' ' && stringEntrada[k] != '_' && stringEntrada[k] != '-'){
            if(stringEntrada[k] >= 'A' && stringEntrada[k] <= 'Z'){
                stringEntrada[d] = stringEntrada[k]+32;
                d++;
            }else{
                stringEntrada[d] = stringEntrada[k];
                d++;                  
            }       
        }else{
            if (stringEntrada[k+1] >= 'a' && stringEntrada[k+1] <= 'z')
            {
                stringEntrada[d] = stringEntrada[k+1]-32;
                d++;
                k++; 
            }else{
                stringEntrada[d] = stringEntrada[k+1];
                d++;
                k++;
            }
            
            
        }
    }          

    stringEntrada[d] = '\0';
    return stringEntrada;
}
int encontrarCaracter(char *stringEntrada, char caracter){

    int retorno = 0;
    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] == caracter){
            retorno = 1;
        }
    }
    return retorno;
}
char * removerCaracter(char *stringEntrada, char caracter){

    int d = 0;
    for(int k = 0; k < (strlen(stringEntrada)); k++){
        if(stringEntrada[k] != caracter){
            stringEntrada[d] = stringEntrada[k];
            d++;
        }
    }
    stringEntrada[d] = '\0';
    return stringEntrada;
}
char * desplazarNPosiciones(char *stringEntrada, char *stringSalida, int desplazamiento){

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if ((stringEntrada[i]+desplazamiento)<=126 && (stringEntrada[i]+desplazamiento)>=32){
                stringSalida[i] = (stringEntrada[i]+desplazamiento);
        }else{
                printf("Caracter en posición %lu no es imprimible, se salteará\n", i+1);
        }
    }
    return stringSalida;
}