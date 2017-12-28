#include<stdio.h>
#include<stdlib.h>

void imprimir(double inicio,double fin,double salto){
  for(double i = inicio; i<=fin; i += salto){
    printf("\t%g\n", i);
  }
}
int main (int argc,char **argv){
  if(argc == 1){imprimir(1,10,1);}
  if(argc == 2){imprimir(1,atof(argv[1]),1);}
  if(argc == 3){imprimir(atof(argv[2]),atof(argv[1]),1);}
  if(argc == 4){imprimir(atof(argv[2]),atof(argv[1]),atof(argv[3]));}
}
