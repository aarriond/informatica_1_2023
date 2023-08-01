#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int devolverStringBinarioComoNumero(char* stringEntrada){

    int resultado = 0, control = 0;

    for (size_t i = 0; i < strlen(stringEntrada)-1; i++){
        if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='1'){
            resultado = resultado + pow(2, i);
            
        }else{
            control = -1;
        }
    }

    if(control == -1){
        resultado = -1;
    }else{
        return resultado;
    }

    return resultado;

}
int devolverStringOctalComoNumero(char* stringEntrada){

    int resultado = 0, control = 0;

    for (size_t i = 0; i < strlen(stringEntrada)-1; i++){
        if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='1'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='2'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='3'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='4'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='5'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='6'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='7'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(8, i));
            
        }else{
            control = -1;
        }
    }

    if(control == -1){
        resultado = -1;
    }else{
        return resultado;
    }

    return resultado;
}
int devolverStringHexaComoNumero(char* stringEntrada){
    int resultado = 0, control = 0;

    for (size_t i = 0; i < strlen(stringEntrada)-1; i++){
        if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='1'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='2'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='3'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='4'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='5'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='6'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='7'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='8'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='9'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-48) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='A'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='B'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='C'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='D'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='E'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='F'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-55) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='a'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='b'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='c'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='d'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='e'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else if(stringEntrada[(strlen(stringEntrada)-1)-i-1]=='f'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada)-1)-i-1]-87) * pow(16, i));
            
        }else{
            control = -1;
        }
    }

    if(control == -1){
        resultado = -1;
    }else{
        return resultado;
    }

    return resultado;
}

/*acomodar bien esta función para que resuelva los valores*/

void imprimirNumeroEnBases(int numero){

    printf("Decimal: %d\n", numero);

    int n = numero;
    int array1[50];
    int array2[50];
    int array3[50];
    int i = 0;
    //bin
    while(n>0){
        array1[i] = n % 2;
        printf ("array: %d", array1[i]);
        n = n / 2;
        printf ("array numero: %d", n);
        i++;
    }
    printf("\n");
    for (size_t t = 0; t <= i; ++t)
    {

        printf("Binario: %d",array1[i-t]);
    }
    
    i = 0;
    n = numero;

    //octal
        while(n>0){
        array2[i] = n % 8;
        printf ("array: %d", array2[i]);
        n = n / 8;
        printf ("array numero: %d", n);
        i++;
    }
    printf("\n");
    for (size_t t = 0; t <= i; ++t)
    {

        printf("Octal: %d",array2[i-t]);
    }

    i = 0;
    n = numero;

    //hexa
        while(n>0){
        array3[i] = n % 16;
        printf ("array: %d", array3[i]);
        n = n / 16;
        printf ("array numero: %d", n);
        i++;
    }
    printf("\n");
    for (size_t t = 0; t <= i; ++t)
    {

        printf("Hexa: %d",array3[i-t]);
    }
}