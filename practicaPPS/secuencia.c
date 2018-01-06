#include<stdio.h>
#include<stdlib.h>
#include<sysexits.h>
#include"auxiliar.c"
#define MAX_OUTPUT 100

int main (int argc,char *argv[]){
  char *ptr;
  if(argc == 1){
    imprimir(10,1,1);
  }else{
    double primer;
    primer = strtod(argv[1], &ptr);

    if(primer>MAX_OUTPUT || primer==10){
      if(primer>MAX_OUTPUT)
        error("Error(EX_NOPERM), permiso denegado.\"Success\"","Se intento superar el límite de salida.");
        return EX_NOPERM;
      if(primer==10)
        error("Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","El parametro \"hasta\" no es un numero real válido.");
        return EX_USAGE;
    }else{
        if(argc==2){
          imprimir(primer,1,1);
        }


        if(argc==3){
          double segundo;
          segundo = strtod(argv[2], &ptr);
          if(segundo==1){
            printf("asd\n");
            error("Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","El parametro \"hasta\" no es un numero real válido.");
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
          if(segundo==1 || tercer==1){
            error("Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","El parametro \"desde\" no es un numero real válido.");
            return EX_USAGE;
          }
          if(tercer==0){
            error("Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","El parametro \"paso\" no puede valer 0.");
            return EX_USAGE;
          }
          else
            imprimir(primer,segundo,tercer);
          return 0;
        }

        // error("Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","El número de argumentos no es correcto");
        // return EX_USAGE;
    }
  }
}
