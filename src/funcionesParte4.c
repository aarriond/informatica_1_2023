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
    *(ptrCantidadVentas) = *(ptrCantidadVentas) + 1;
    printf("cantidad de ventas dentro de la función: %d\n",*ptrCantidadVentas);
}
    