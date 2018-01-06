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

// #include<stdio.h>
// #include<stdlib.h>
// #define MAX_OUTPUT 100
//
// void imprimir(double fin,double inicio,double salto){
//   int i;
//   for(i = inicio; i<=fin; i += salto){
//     fprintf(stdout,"%d\n", i);
//   }
// }
// void error(char *primero, char *segundo){
//   fprintf(stderr, "%s\n", primero);
//   fprintf(stderr, "%s\n", segundo);
// }
// int main (int argc,char *argv[]){
//   char *ptr;
//   if(argc == 1){
//     imprimir(1,10,1);
//   }else{
//     double primer;
//     primer = strtod(argv[1], &ptr);
//
//     if(primer>MAX_OUTPUT || primer==10){
//       if(primer>MAX_OUTPUT)
//         error("secuencia: Error(EX_NOPERM), permiso denegado.\"Success\"","secuencia+ Se intento superar el límite de salida.");
//       if(primer==10)
//         error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"hasta\" no es un numero real válido.");
//     }else{
//       switch(argc){
//         case 2:
//           imprimir(1,primer,1);
//           break;
//
//         case 3:
//           double segundo;
//           segundo = strtod(argv[2], &ptr);
//           if(segundo==1)
//             error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"hasta\" no es un numero real válido.");
//           else
//             imprimir(primer,segundo,1);
//           break;
//
//         case 4:
//           double segundo;
//           double tercer;
//           segundo = strtod(argv[2], &ptr);
//           tercer = strtod(argv[3], &ptr);
//           if(segundo==1)
//             error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"desde\" no es un numero real válido.");
//           if(tercer==1)
//             error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"paso\" no es un numero real válido.");
//           if(tercer==0)
//             error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"paso\" no puede valer 0.");
//           else
//             imprimir(primer,segundo,tercer);
//           break;
//
//         default:
//           error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El número de argumentos no es correcto");
//           break;
//
//       }
//     }
//   }
// }
