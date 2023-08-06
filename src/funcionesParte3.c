#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

long long int devolverStringBinarioComoNumero(char* stringEntrada){

    int resultado = 0, control = 0;
    
    if(stringEntrada[strlen(stringEntrada)-1] == '\n'){ //borro el '\n' que pudo haber insertado el fgets
        stringEntrada[strlen(stringEntrada)-1] = '\0';
    }

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if(stringEntrada[(strlen(stringEntrada))-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='1'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(2, i));
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
long long int devolverStringOctalComoNumero(char* stringEntrada){

    long long int resultado = 0;
    int control = 0;


    if(stringEntrada[strlen(stringEntrada)-1] == '\n'){ //borro el '\n' que pudo haber insertado el fgets
        stringEntrada[strlen(stringEntrada)-1] = '\0';
    }

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if(stringEntrada[(strlen(stringEntrada))-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='1'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='2'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='3'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='4'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='5'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='6'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='7'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(8, i));
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
long long int devolverStringHexaComoNumero(char* stringEntrada){

    long long int resultado = 0;
    int control = 0;

    if(stringEntrada[strlen(stringEntrada)-1] == '\n'){ //borro el '\n' que pudo haber insertado el fgets
        stringEntrada[strlen(stringEntrada)-1] = '\0';
    }

    for (size_t i = 0; i < strlen(stringEntrada); i++){
        if(stringEntrada[(strlen(stringEntrada))-i-1]=='0'){
            resultado = resultado + 0; // el 0 no suma pero se deja esta línea para controlar que el valor "0" exista en el string
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='1'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='2'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='3'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='4'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='5'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='6'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='7'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='8'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='9'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-48) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='A'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='B'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='C'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='D'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='E'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='F'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-55) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='a'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='b'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='c'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='d'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='e'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
        }else if(stringEntrada[(strlen(stringEntrada))-i-1]=='f'){
            resultado = resultado + ((stringEntrada[(strlen(stringEntrada))-i-1]-87) * pow(16, i));
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
void imprimirNumeroEnBases(int numero){

    printf("Decimal: %d\n", numero);

    int n = numero;
    char array1[50];
    char array2[50];
    char array3[50];
    char aux = '0';
    int i = 0;
    //bin
    while(n>0){
        array1[i] = (n % 2) + 48;
        n = n / 2;
        i++;
    }
            //invertir string
    for(int k = 0; k <= (i-1)/2; k++)
        {
            aux = array1[k];
            array1[k] = array1[i-1-k];
            array1[i-1-k] = aux;
        }

    array1[i] = '\0';
    
    printf("Binario: ");
    printf("%s",array1);
    printf("\n");

    i = 0;
    n = numero;

    //octal
    while(n>0){
        array2[i] = (n % 8) + 48;
        n = n / 8;
        i++;
    }
    //invertir string
    for(int k = 0; k <= (i-1)/2; k++)
        {
            aux = array2[k];
            array2[k] = array2[i-1-k];
            array2[i-1-k] = aux;
        }

    array2[i] = '\0';
    
    printf("Octal: ");
    printf("%s",array2);
    printf("\n");

    i = 0;
    n = numero;

    //hexa
        while(n>0){
        switch (n % 16){
            case 10:
                array3[i] = 'A';
                break;
            case 11:
                array3[i] = 'B';
                break;
            case 12:
                array3[i] = 'C';
                break;
            case 13:
                array3[i] = 'D';
                break;
            case 14:
                array3[i] = 'E';
                break;
            case 15:
                array3[i] = 'F';
                break;
            default:
                array3[i] = (n % 16) + 48;
                break;
        }
        n = n / 16;
        i++;
    }

    //invertir string
    for(int k = 0; k <= (i-1)/2; k++)
        {
            aux = array3[k];
            array3[k] = array3[i-1-k];
            array3[i-1-k] = aux;
        }

    array3[i] = '\0';
    
    printf("Hexa: ");
    printf("%s",array3);
    printf("\n");
}
void imprimirNumeroEnXBase(long long int cantidad,char* stringSalida,unsigned int base){

    int n = cantidad;
    char aux = '0';
    int i = 0;

    switch (base)
    {
    case 1: //binario
        while(n>0){
            stringSalida[i] = (n % 2) + 48;
            n = n / 2;
            i++;
        }
        //invertir string
        for(int k = 0; k <= (i-1)/2; k++)
            {
                aux = stringSalida[k];
                stringSalida[k] = stringSalida[i-1-k];
                stringSalida[i-1-k] = aux;
            }

        stringSalida[i] = '\0';
        
        printf("Binario: ");
        printf("%s",stringSalida);
        printf("\n");
        break;
    case 2: //octal
        while(n>0){
            stringSalida[i] = (n % 8) + 48;
            n = n / 8;
            i++;
        }
        //invertir string
        for(int k = 0; k <= (i-1)/2; k++)
            {
                aux = stringSalida[k];
                stringSalida[k] = stringSalida[i-1-k];
                stringSalida[i-1-k] = aux;
            }

        stringSalida[i] = '\0';
        
        printf("Octal: ");
        printf("%s",stringSalida);
        printf("\n");
        break;
    case 3: //decimal
        while(n>0){
            stringSalida[i] = (n % 10) + 48;
            n = n / 10;
            i++;
        }
        //invertir string
        for(int k = 0; k <= (i-1)/2; k++)
            {
                aux = stringSalida[k];
                stringSalida[k] = stringSalida[i-1-k];
                stringSalida[i-1-k] = aux;
            }

        stringSalida[i] = '\0';
        
        printf("Decimal: ");
        printf("%s",stringSalida);
        printf("\n");
        break;
    case 4: //hexa
        while(n>0){
            switch (n % 16){
                case 10:
                    stringSalida[i] = 'A';
                    break;
                case 11:
                    stringSalida[i] = 'B';
                    break;
                case 12:
                    stringSalida[i] = 'C';
                    break;
                case 13:
                    stringSalida[i] = 'D';
                    break;
                case 14:
                    stringSalida[i] = 'E';
                    break;
                case 15:
                    stringSalida[i] = 'F';
                    break;
                default:
                    stringSalida[i] = (n % 16) + 48;
                    break;
            }
            n = n / 16;
            i++;
        }

    //invertir string
    for(int k = 0; k <= (i-1)/2; k++)
        {
            aux = stringSalida[k];
            stringSalida[k] = stringSalida[i-1-k];
            stringSalida[i-1-k] = aux;
        }

    stringSalida[i] = '\0';
    
    printf("Hexa: ");
    printf("%s",stringSalida);
    printf("\n");
        break;                    
    default:
        break;
    }

}