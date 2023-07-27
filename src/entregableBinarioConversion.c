/*
* Entregable 3 - iteración
* Alexis Arriondo (1380527)
*/

#include <stdio.h>
#include <math.h>
#include <stddef.h>

int main (){

    int numero = 0;
    int resultado[50];
    int contador = 0;
    printf("Ingrese un número: \n");
    scanf("%d", &numero);

    //convertir por el método de las divisiones
    int resto = numero;
    for (size_t i = 0; resto > 0; i++){
        resultado[i] = resto % 2;
        resto = resto / 2;
        contador++;
    }    

    for (size_t j = 0; j < contador/2; j++)
    {
        int hold = resultado[j];
        resultado[j] = resultado[contador-1-j];
        resultado[contador-1-j] = hold;
    }
      
    for (size_t k = 0; k < contador; k++){
        printf("%d",resultado[k]);
    }    
        puts("Método de división: \n");

    //convertir por el método de las divisiones

    int contador2 = 0;
    int resultado2[50];

    while (pow(2, contador2) < numero){
        contador2++;
    }
    contador2--;
    printf("Contador2: %d\n",contador2);
    
    for (size_t i = contador2, x = 0; i > 0; i--, x++){
        if (pow(2,i)<=numero)
        {
            numero = numero - pow(2,i);
            resultado2[x]=1;
        }else{
            resultado2[x]=0;
        }
        
    }
    printf("Número: %d\n\n", numero);
    
    if (pow(2,0)<=numero)
        {
            resultado2[contador2]=1;
        }else{
            resultado2[contador2]=0;
        }

    for (size_t k = 0; k < contador; k++){
        printf("%d",resultado2[k]);
    }    
        puts("Método de restas: \n");

    return 0;
}
