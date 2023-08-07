#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "../funciones.h"

int aux_esPrimo(int numero){

    int salida = 0;

    if (numero%2 == 0 && numero != 2){
        salida = 0;
    }else if(numero%3 == 0 && numero != 3){
        salida = 0;
    }else if(numero%5 == 0 && numero != 5){
        salida = 0;
    }else if(numero%7 == 0 && numero != 7){
        salida = 0;
    }else{
        salida = 1;
    }
    
    return salida;

}