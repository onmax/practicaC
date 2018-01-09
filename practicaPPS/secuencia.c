#include<stdio.h>
#include<stdlib.h>
#include<sysexits.h>
#define MAX_OUTPUT 100
#include <string.h>
void imprimir(double fin,double inicio,double salto){
  double i;
  if(inicio < fin){
    for(i = inicio; i<=fin; i += salto){
      fprintf(stdout,"\t%g\n", i);
    }
  }else{
    for(i = inicio; i>=fin; i += salto){
      fprintf(stdout,"\t%g\n", i);
    }
  }
}

int main (int argc,char *argv[]){
  if((strcmp(argv[1],"-h")==0) || (strcmp(argv[1],"--help")==0)){
    printf("secuencia: Uso: secuencia [ hasta [ desde [ paso ]]]\n");
    printf("secuencia+ Genera la secuencia de números en el intervalo y paso indicados.\n");
    return EX_OK;
  }
  char *ptr;
  if(argc == 1){
    imprimir(10,1,1);
  }else{
    double primer;
    primer = strtod(argv[1], &ptr);
    if(primer>MAX_OUTPUT || primer==10){
      if(primer>MAX_OUTPUT){
        printf("secuencia:Error(EX_NOPERM), permiso denegado.\"Success\"");
        printf("secuencia+ Se intento superar el límite de salida.\n");
        return EX_NOPERM;
      }
     if(primer==10){
       printf("secuencia:Error(EX_USAGE), permiso denegado.\"Success\"");
       printf("secuencia+ El parametro \"hasta\" no es un numero real válido.");
       return EX_NOPERM;
     }
   }else if(argc==2){
       imprimir(primer,1,1);
       return EX_OK;
     }

     if(argc==3){
       double segundo;
       segundo = strtod(argv[2], &ptr);
       if(segundo==1){
         printf("secuencia:Error(EX_USAGE), permiso denegado.\"Success\"");
         printf("secuencia+ El parametro \"hasta\" no es un numero real válido.");
         return EX_USAGE;
       }else{
         imprimir(primer,segundo,1);
       }
}

if(argc==4){
  double segundo;
  double tercer;
  segundo = strtod(argv[2], &ptr);
  tercer = strtod(argv[3], &ptr);
  double aux = primer + tercer;
  if((tercer-aux)>(tercer-primer)){
    printf("secuencia:Error(EX_USAGE), permiso denegado.\"Success\"\n");
    printf("secuencia+ El signo de \"paso\" no permite recorrer el intervalo en el sentido \"desde\"\n");
    return EX_USAGE;
  }
  else if(segundo==1 || tercer==1){
    printf("secuencia:Error(EX_USAGE), permiso denegado.\"Success\"\n");
    printf("secuencia+ El parametro \"desde\" no es un numero real válido.\n");
    return EX_USAGE;
  }
  else if(tercer==0){
    printf("secuencia:Error(EX_USAGE), permiso denegado.\"Success\"\n");
    printf("secuencia+ El parametro \"paso\" no puede valer 0.\n");
    return EX_USAGE;
  }
  else
    imprimir(primer,segundo,tercer);
  return 0;
  }
}
}
return 0;
}
