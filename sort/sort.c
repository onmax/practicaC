#include <stdio.h>
#include <stdlib.h>
#include "fsort.h"

int main(int argc, char *argv[])
{
  int *enteros;
  char linea[7];
  int n;

  /* Leer el array de stdin */
  /* leer el primer entero de la stdin */
  fgets(linea1, 7, stdin);
  printf("Leido: %s\n",linea1);
  n = atoi(linea1);
  /* Solicitar memoria: necesitamos n enteros */
  enteros = (int*) malloc(n * sizeof(n));
  /* Leer n enteros */
  
  /* array_a_ordenar está desordenado */
  fsort(n, enteros);
  /* array_a_ordenar está ordenado */
  /* imprimir el array en stdout */
  return 0;
}
