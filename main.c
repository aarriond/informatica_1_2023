#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include"funciones.h"
#define ARRAY_MAX 50

struct vendedor
{
    unsigned int tiendaId;
    unsigned int vendedorId;
    float comisionAcumulada;
};

struct producto
{
    char categoria[3];
    float precio;
    unsigned int cantidadVendida;
};

int main (void){
    
    //defino variables
    unsigned int opcion = -1;
    unsigned int opcion2 = -1;
    int arg1 = 0;
    int arg2 = 0;
    unsigned int arg3 = 0;
    float var1 = 0;
    float array1[ARRAY_MAX];
    unsigned int varControl = 0;
    int tamanioArray = 0;
    int array1int[ARRAY_MAX];
    int array2int[ARRAY_MAX];
    char ptrString[ARRAY_MAX];
    char caracter;
    unsigned int salida = 0;
    char arraySalida[ARRAY_MAX];
    int desplazamiento = 0;
    int numero = 0;
    unsigned int base = 0;
    char stringSalida[ARRAY_MAX];
    int salidaint = 0;
    int contadorArrayInt = 0;

    while (opcion != 0){
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
                printf("Parte 1 - ingrese un ejercicio, 0 para volver al menú principal: \n");
                printf("1\n");
                printf("2\n");
                printf("3\n");
                printf("4\n");
                printf("5\n");
                printf("6\n");
                printf("7\n");
                printf("8\n");
                scanf("%u", &opcion2);
                switch(opcion2){
                    case 1:
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
                        printf("Número aleatorio: %d\n",devolverNumeroAleatorio(arg1, arg2, arg3));
                        break;
                    case 2:
                        printf("Ingrese un número real: \n");
                        scanf("%f", &var1);
                        imprimeFloatByteAByte(&var1);
                        break;
                    case 3:
                        for (int i = 0; i < ARRAY_MAX && varControl != -1; i++){
                            printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                            scanf("%f", &array1[i]);
                            varControl = array1[i];
                            contadorArrayInt++;
                        }
                        tamanioArray = contadorArrayInt-1;
                        printf("Media: %f\n",devolverMedia(array1,tamanioArray));
                        contadorArrayInt = 0;
                        break;
                    case 4:
                        for (int i = 0; i < ARRAY_MAX && varControl != -1; i++){
                            printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                            scanf("%f", &array1[i]);
                            varControl = array1[i];
                            contadorArrayInt++;
                        }
                        tamanioArray = contadorArrayInt-1;
                        printf("Mediana: %f\n",devolverMediana(array1,tamanioArray));
                        contadorArrayInt = 0;
                        break;
                    case 5:
                        printf("función MODA pendiente de desarrollar\n");
                        // float array1[ARRAY_MAX];
                        // unsigned int varControl = 0;
                        // for (int i = 0; i < 50 || varControl != 0; i++){
                        //     printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                        //     scanf("%f", array1[i]);
                        //     varControl = array1[i];
                        // }
                        // devolverModa(array1);
                        break;
                    case 6:
                        for (int i = 0; i < ARRAY_MAX && varControl != -1; i++){
                            printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                            scanf("%f", &array1[i]);
                            varControl = array1[i];
                            contadorArrayInt++;
                        }
                        tamanioArray = contadorArrayInt-1;
                        printf("El número más grande del array es: %f\n",devolverMayor(array1,tamanioArray));
                        contadorArrayInt = 0;
                        break;
                    case 7:
                        for (int i = 0; i < ARRAY_MAX && varControl != -1; i++){
                            printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                            scanf("%f", &array1[i]);
                            varControl = array1[i];
                            contadorArrayInt++;
                        }
                        tamanioArray = contadorArrayInt-1;
                        printf("El número más chico del array es: %f\n",devolverMenor(array1,tamanioArray));
                        contadorArrayInt = 0;
                        break;
                    case 8:
                        unsigned int varControl = 0;
                        for (int i = 0; i < ARRAY_MAX && varControl != -1; i++){
                            printf("Ingrese un valor para el array (\"-1\" para finalizar, array máximo configurado en 50 elementos): \n");
                            scanf("%d", &array1int[i]);
                            varControl = array1int[i];
                            contadorArrayInt++;
                        }
                        tamanioArray = contadorArrayInt-1;
                        for (int i = 0; i < 50; i++){
                            array2int[i] = 0;
                        }

                        copiarSoloPrimos(array1int, array2int, tamanioArray);
                        contadorArrayInt = 0;
                        break;
                }
            case 2:
                printf("Parte 2 - ingrese un ejercicio, 0 para volver al menú principal: \n");
                printf("1\n");
                printf("2\n");
                printf("3\n");
                printf("4\n");
                printf("5\n");
                printf("6\n");
                printf("7\n");
                printf("8\n");
                scanf("%u", &opcion2);
                system("clear");
                switch(opcion2){
                    case 1:
                        printf("Ingrese un string para invertir: \n");
                        setbuf(stdin, NULL);
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String invertido: %s\n",invertirString(ptrString));
                        break;
                    case 2:                        
                        printf("Ingrese un string para borrar espacios: \n");
                        setbuf(stdin, NULL);
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String sin espacios: %s\n",removerEspacios(ptrString));
                        break;
                    case 3:
                        printf("Ingrese un string para convertir a mayúsculas: \n");
                        setbuf(stdin, NULL);
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String sin minúsculas: %s\n",convertirAMayusculas(ptrString));
                        break;
                    case 4:
                        printf("Ingrese un string para convertir a mayúsculas: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String sin mayúsculas: %s\n",convertirAMinusculas(ptrString));
                        break;
                    case 5:
                        printf("Ingrese un string para convertir a camel case: \n");
                        setbuf(stdin, NULL);
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String en camel case: %s\n",convertirACamelCase(ptrString));
                        break;
                    case 6:
                        printf("Ingrese un string: \n");
                        setbuf(stdin, NULL);
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("Ingrese un caracter a buscar: \n");
                        scanf("%c",&caracter);
                        salida = encontrarCaracter(ptrString,caracter);
                        if (salida == 1)
                        {
                            printf("Caracter %c encontrado en el string\n", caracter);
                        }else{
                            printf("Caracter %c no encontrado en el string\n", caracter);
                        }                        
                        break;
                    case 7:
                        printf("Ingrese un string: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("Ingrese un caracter a remover: \n");
                        scanf("%c",&caracter);
                        printf("String original: %s\n", ptrString);
                        printf("String modificado sin el caracter %c: %s\n",caracter,removerCaracter(ptrString,caracter));                  
                        break;
                    case 8:
                        printf("Ingrese un string: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("Ingrese un string: \n");
                        scanf("%d",&desplazamiento);
                        printf("String original: %s\n", ptrString);
                        printf("String desplazado %d posiciones: %s\n",desplazamiento,desplazarNPosiciones(ptrString,arraySalida,desplazamiento));                  
                        break;
                }
                break;
            case 3:
                system("clear");
                printf("Parte 3 - ingrese un ejercicio, 0 para volver al menú principal: \n");
                printf("1\n");
                printf("2\n");
                printf("3\n");
                printf("4\n");
                printf("5\n");
                scanf("%u", &opcion2);
                switch(opcion2){
                    case 1:
                        printf("Ingrese un número binario: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("Valor númerico decimal del string: %lld\n",devolverStringBinarioComoNumero(ptrString));
                        break;
                    case 2:
                        printf("Ingrese un número octal: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("Valor númerico decimal del string: %lld\n",devolverStringOctalComoNumero(ptrString));
                        break;
                    case 3:
                        printf("Ingrese un número hexadecimal: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("Valor númerico decimal del string: %lld\n",devolverStringHexaComoNumero(ptrString));
                        break;
                    case 4:                        
                        printf("Ingrese un número: \n");
                        scanf("%d",&numero);
                        imprimirNumeroEnBases(numero);
                        break;
                    case 5:                     
                        printf("Ingrese un número: \n");
                        scanf("%d",&numero);
                        printf("Ingrese una base: \n");
                        printf("1 - binario\n");
                        printf("2 - octal\n");
                        printf("3 - decimal\n");
                        printf("4 - hexa\n");
                        scanf("%u",&base);
                        imprimirNumeroEnXBase(numero,ptrString,base);
                        break;
                }
                break;
            case 4:
                system("clear");
                printf("Enunciado A\n");
                //menu control de ventas;
                break;
            case 5:
                system("clear");
                printf("Enunciado B\n");
                printf("Ingrese una función: \n");
                printf("1 - desplazar letras\n");
                printf("2 - desencriptar texto\n");
                printf("3 - encriptar números\n");
                printf("4 - desencriptar números\n");
                printf("5 - verificar si una cadena es encriptable\n");
                printf("6 - salir\n");
                scanf("%u", &opcion2);
                switch(opcion2){
                    case 1:
                        printf("Ingrese un string para desplazar: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        printf("String desplazado %d posiciones\n",desplazar_letras(ptrString,stringSalida));
                        break;
                    case 2:
                        printf("Ingrese un string para descifrar: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("Ingrese el desplazamiento del string: \n");
                        scanf("%d",&desplazamiento);
                        printf("String original: %s\n", ptrString);
                        desencriptar_texto(ptrString,stringSalida,desplazamiento);
                        break;
                    case 3:
                        printf("Ingrese un string numérico para cifrar: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        encriptar_numeros(ptrString,stringSalida);
                        break;
                    case 4:
                        printf("Ingrese un string numérico cifrado: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        desencriptar_numeros(ptrString,stringSalida);
                        break;
                    case 5:
                        printf("Ingrese un string para verificar: \n");
                        setbuf(stdin, NULL);                        
                        fgets(ptrString,ARRAY_MAX,stdin);
                        printf("String original: %s\n", ptrString);
                        salidaint = es_encriptable(ptrString);
                        if(salidaint == 0){
                            printf("String válido\n");
                        }else{
                            printf("String no válido para cifrar\n");
                        }
                        break;
                    default:
                        break;
                }
                break;
            case 0:
                break;
        }
    }        
}