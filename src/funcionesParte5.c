#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int desplazar_letras (char* stringEntrada,char* stringSalida){
    
    int rango = 0, resto = 0, exceso = 0;

    srand((unsigned)time(NULL));
    rango = rand() % 25;

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if((stringEntrada[i]>=65&&stringEntrada[i]<=90)){
            if ((stringEntrada[i]+rango)<=90){
                stringSalida[i] = (stringEntrada[i]+rango);
            }else{
                if ((stringEntrada[i]+rango)> 'Z')
                {
                    resto = 'Z' - stringEntrada[i];
                    exceso = rango - resto;
                    stringSalida[i] = 'A' + (exceso - 1);
                    resto = 0;
                    exceso = 0;
                }                
            }
        }else if((stringEntrada[i]>=97&&stringEntrada[i]<=122)){
                if ((stringEntrada[i]+rango)<=122){
                stringSalida[i] = (stringEntrada[i]+rango);
                }else{
                    if ((stringEntrada[i]+rango)> 'z'){
                        resto = 'z' - stringEntrada[i];
                        exceso = rango - resto;
                        stringSalida[i] = 'a' + (exceso - 1);
                        resto = 0;
                        exceso = 0;
                    }                
                    }
        }else{
            stringSalida[i] = stringEntrada[i];
        }
    }

    printf("%s\n", stringSalida);

    return rango;
    
}

void desencriptar_texto (char* stringEntrada,char* stringSalida,int desplazamiento){

}

void encriptar_numeros (char* stringEntrada, char* stringSalida){

    for (size_t i = 0; i < strlen(stringEntrada)-1; i++){
        if((stringEntrada[i]>='0'&&stringEntrada[i]<='9')){
            stringSalida[(strlen(stringEntrada)-1)-(i+2)] = stringEntrada[i];
            printf("%c\n", stringSalida[(strlen(stringEntrada)-1)-(i+1)]);
        }
    }

    printf("%s\n", stringSalida);

}

void desencriptar_numero (char* stringEntrada,char* stringSalida){

}

int es_encriptable (char* stringEntrada){

    int resultado = 0;

    for (size_t i = 0; i < strlen(stringEntrada)-1; i++){
        if((stringEntrada[i] < '0')&&(stringEntrada[i] != ' ')){
            resultado = -1;
        }else if((stringEntrada[i] > '9')&&(stringEntrada[i] < 'A')){
            resultado = -1;
        }else if((stringEntrada[i] > 'Z')&&(stringEntrada[i] < 'a')){
            resultado = -1;
        }else if((stringEntrada[i] > 'z')){
            resultado = -1;
        }
    }

    return resultado;
}