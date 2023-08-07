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

//Parte 1
int devolverNumeroAleatorio(int, int, unsigned int);
void imprimeFloatByteAByte(float *);
float devolverMediana(float *,int);
float devolverMedia(float *,int);
float devolverModa(float *,int);
float devolverMayor(float *,int);
float devolverMenor(float *,int);
void copiarSoloPrimos(int *, int *,int);

//Parte 2
char * invertirString(char *);
char * removerEspacios(char *);
char * convertirAMayusculas(char *);
char * convertirAMinusculas(char *);
char * convertirACamelCase(char *);
int encontrarCaracter(char *,char);
char * removerCaracter(char *,char);
char * desplazarNPosiciones(char *,char *,int);

//Parte 3
long long int devolverStringBinarioComoNumero(char *);
long long int devolverStringOctalComoNumero(char *);
long long int devolverStringHexaComoNumero(char *);
void imprimirNumeroEnBases(int);
void imprimirNumeroEnXBase(long long int,char *,unsigned int);

//Parte 4
void ingresarVenta(struct vendedor **,struct producto **,int *);
// void ventasPorCategoria();
// void comisionesPorVendedor();

//Parte 5
int desplazar_letras (char*,char *);
void desencriptar_texto (char*,char*,int);
void encriptar_numeros (char*,char*);
void desencriptar_numeros (char*, char*);
int es_encriptable (char *);

//Auxiliares
int aux_esPrimo(int);
