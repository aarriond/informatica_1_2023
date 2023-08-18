#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include "../funciones.h"

void ingresarVenta(struct vendedor **ventas,struct producto **productos, int *ptrCantidadVentas){

    printf("Ingrese tienda\n");
    scanf("%u",&(ventas[*ptrCantidadVentas]->tiendaId));
    printf("Ingrese vendedor\n");
    scanf("%u",&(ventas[*ptrCantidadVentas]->vendedorId));
    // printf("Ingrese producto\n");
    // fflush(stdin);
    // fgets (productos[*cantidadVentas].categoria,3,stdin);
    printf("Ingrese cantidad\n");
    scanf("%u",&(productos[*ptrCantidadVentas]->cantidadVendida));
    printf("Ingrese precio\n");
    scanf("%f",&(productos[*ptrCantidadVentas]->precio));
    ventas[*ptrCantidadVentas]->comisionAcumulada = (productos[*ptrCantidadVentas]->precio)*0.01;
    printf("Comisión: %f\n",ventas[*ptrCantidadVentas]->comisionAcumulada);
    // (*ptrCantidadVentas)++;
    (*ptrCantidadVentas)++;
}

void comisionesPorVendedor(struct vendedor *ventas){

    int *** arrayMatriz=NULL;
    int ** matriz=NULL;

    //inicializo array de matrices 3 x 3 para guardar el resultado de cada tienda

    arrayMatriz = (int ***)malloc((sizeof(int**)));
    matriz = (int**)malloc((sizeof(int*)));
    for (size_t i = 0; i < 3; i++)
    {
        *(matriz+i)=(int*)malloc(3*sizeof(int));
    }
    
    //para cada elemento del array de entrada (ventas) doy de alta una nueva matriz a medida que las tiendas cambian

    for (size_t i = 0; i < (sizeof(ventas)/sizeof(struct vendedor *)); i++)
    {
        for (size_t j = 0; j < (sizeof(arrayMatriz)/sizeof(int ***)); j++)
        {
            if (ventas[i].tiendaId != *(*(arrayMatriz+j))[0])
            {
                *(matriz)[0] = ventas[i].tiendaId;
                *(matriz+1)[0] = ventas[i].tiendaId;
                *(matriz+2)[0] = ventas[i].tiendaId;
            }
        }
        

    }

    for (size_t i = 0; i < (sizeof(arrayMatriz)/sizeof(int ***)); i++)
    {
        printf("Valor de tienda: %d\t", *(matriz+i)[0]);
    }
    

}