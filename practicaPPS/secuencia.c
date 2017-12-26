#include<stdio.h>
#include<stdlib.h>

void imprimir(double inicio,double fin,double salto){
  printf("Salto %d\n", salto);
  for(int i = inicio; i<=fin; i += salto){
    printf("%d\n", i);
  }
}
int main (int argc,char **argv){
  if(argc == 1){imprimir(1,10,1);}
  if(argc == 2){imprimir(1,atoi(argv[1]),1);}
  if(argc == 3){imprimir(atoi(argv[2]),atoi(argv[1]),1);}
  if(argc == 4){imprimir(atoi(argv[2]),atoi(argv[1]),atoi(argv[3]));}
}
