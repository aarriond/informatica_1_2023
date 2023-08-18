#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "../funciones.h"

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

    printf("\nString cifrado: %s\n", stringSalida);

    return rango;
    
}
void desencriptar_texto (char* stringEntrada,char* stringSalida,int desplazamiento){

    int resto = 0, exceso = 0;

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if((stringEntrada[i]>=65&&stringEntrada[i]<=90)){
            if ((stringEntrada[i]-desplazamiento)>=65){
                stringSalida[i] = (stringEntrada[i]-desplazamiento);
            }else{
                if ((stringEntrada[i]-desplazamiento)< 'A')
                {
                    resto = stringEntrada[i] - 'A';
                    exceso = desplazamiento - resto;
                    stringSalida[i] = 'Z' - (exceso - 1);
                    resto = 0;
                    exceso = 0;
                }                
            }
        }else if((stringEntrada[i]>=97&&stringEntrada[i]<=122)){
                if ((stringEntrada[i]-desplazamiento)>=97){
                stringSalida[i] = (stringEntrada[i]-desplazamiento);
                }else{
                    if ((stringEntrada[i]-desplazamiento) < 'a'){
                        resto = stringEntrada[i] - 'a';
                        exceso = desplazamiento - resto;
                        stringSalida[i] = 'z' - (exceso - 1);
                        resto = 0;
                        exceso = 0;
                    }                
                    }
        }else{
            stringSalida[i] = stringEntrada[i];
        }
    }

    printf("\nString descifrado: %s\n", stringSalida);

}
void encriptar_numeros (char* stringEntrada, char* stringSalida){

    long long int n = 0;
    int i = 0;
    int k = 0;
    char aux = '0'; 

    printf("\n");

    if(strlen(stringEntrada) < 18){
        //convertir string a int
        for (i; (stringEntrada[i] != '\0' && stringEntrada[i] != '\n'); i++){
                n = (n * 10) + (stringEntrada[i] - 48);
        }

        printf("numero string a int sin cifrar: %lld\n", n);

        i = 0;

        //conversión a octal
        while(n>0){
            stringSalida[i] = (n % 8) + '0';
            n = n / 8;
            i++;
        }

        //invertir string
        for(k = 0; k <= (i-1)/2; k++)
            {
                aux = stringSalida[k];
                stringSalida[k] = stringSalida[i-1-k];
                stringSalida[i-1-k] = aux;
            }

        stringSalida[i] = '\0';

        //desplazar string una posición para agregar los # y el nuevo \0
        k = i;
        
        for (k; k>0; k--) {
            stringSalida[k] = stringSalida[k-1];
        }    

        stringSalida[0] = '#';
        stringSalida[i+1] = '#';
        stringSalida[i+2] = '\0';

        //cifrado de los números
        
        for (k = 1; k<i+1; k++) {
            switch (stringSalida[k])
            {
            case '0':
                stringSalida[k] = '$';
                break;
            case '1':
                stringSalida[k] = '%';
                break;
            case '2':
                stringSalida[k] = '&';
                break;
            case '3':
                stringSalida[k] = '*';
                break;
            case '4':
                stringSalida[k] = '@';
                break;
            case '5':
                stringSalida[k] = '!';
                break;
            case '6':
                stringSalida[k] = '+';
                break;
            case '7':
                stringSalida[k] = '=';
                break;
            default:
                break;
            }
        }  

        printf("\nString numérico cifrado: %s\n",stringSalida);
    }else{
        printf("El string de salida no puede guardar la salida completa\n\n");
    }
}
void desencriptar_numeros(char* stringEntrada, char* stringSalida){

    //desplazar los caracteres 1 lugar a la izquierda y borrar los #
    int k = 0;
    int i = 0;
    char aux = '0';
    long long int resultado = 0;

    // printf("%c y %c\n", stringEntrada[0], stringEntrada)
    if (stringEntrada[0] == '#' && stringEntrada[strlen(stringEntrada)-1] == '#'){
    for (k; k < strlen(stringEntrada); k++) {
            stringSalida[k] = stringEntrada[k+1];
        }
    stringSalida[k-2] = '\0';

    //descifrado de los números
    for (i; i<k-2; i++) {
        switch (stringSalida[i])
        {
        case '$':
            stringSalida[i] = '0';
            break;
        case '%':
            stringSalida[i] = '1';
            break;
        case '&':
            stringSalida[i] = '2';
            break;
        case '*':
            stringSalida[i] = '3';
            break;
        case '@':
            stringSalida[i] = '4';
            break;
        case '!':
            stringSalida[i] = '5';
            break;
        case '+':
            stringSalida[i] = '6';
            break;
        case '=':
            stringSalida[i] = '7';
            break;
        default:
            break;
        }
    }  

    resultado = devolverStringOctalComoNumero(stringSalida);

    //numero en array
    i = 0;
    for (i; resultado > 0; i++, resultado /= 10){
        stringSalida[i] = (resultado % 10) + '0';
    }

    k = 0;
    //invertir string
    for(k; k <= (i-1)/2; k++){
            aux = stringSalida[k];
            stringSalida[k] = stringSalida[i-1-k];
            stringSalida[i-1-k] = aux;
        }

    stringSalida[i] = '\0';
    printf("\n");
    printf("String descifrado: %s\n\n",stringSalida);
    }else{
        printf("\nString no tiene el formato a descifrar\n");
    }    
}
int es_encriptable (char* stringEntrada){

    int resultado = 0;

    for (size_t i = 0; i < strlen(stringEntrada); i++){
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