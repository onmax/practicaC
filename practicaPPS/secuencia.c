#include<stdio.h>
#include<stdlib.h>

void imprimir(double fin,double inicio,double salto){
  int i;
  for(i = inicio; i<=fin; i += salto){
    fprintf(stdout,"%d\n", i);
  }
}
void error(char *primero, char *segundo){
  fprintf(stderr, "%s\n", primero);
  fprintf(stderr, "%s\n", segundo);
}
int main (int argc,char **argv){
  if(argc == 1){
    imprimir(1,10,1);
  }else{
    if(atoi(argv[1])>100 || atoi(argv[1])==10){
      if(atoi(argv[1])>100)
        error("secuencia: Error(EX_NOPERM), permiso denegado.\"Success\"","secuencia+ Se intento superar el límite de salida.");
      if(atoi(argv[1])==10)
        error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"hasta\" no es un numero real válido.");
    }else{
      switch(argc){
        case 2:
          imprimir(1,atoi(argv[1]),1);
          break;
        case 3:
          if(atoi(argv[2])==1)
            error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"hasta\" no es un numero real válido.");

          else
            imprimir(atoi(argv[2]),atoi(argv[1]),1);

          break;

        case 4:
          if(atoi(argv[2])==1)
            error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"desde\" no es un numero real válido.");

          if(atoi(argv[3])==1)
            error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"paso\" no es un numero real válido.");

          if(atoi(argv[3])==0)
            error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El parametro \"paso\" no puede valer 0.");

          else
            imprimir(atoi(argv[2]),atoi(argv[1]),atoi(argv[3]));

          break;

        default:
          error("secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"","secuencia+ El número de argumentos no es correcto");
          break;

      }
    }
  }
}
//   switch (argc) {
//     case 1:
//       imprimir(1,10,1);
//       break;
//
//     case 2:
//       if(atoi(argv[1])>100){
//         fprintf(stderr,"secuencia: Error(EX_NOPERM), permiso denegado.\"Success\"");
//         fprintf(stderr,"secuencia+ Se intento superar el límite de salida.");
//       }
//       if(atoi(argv[1])==10){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"hasta\" no es un numero real válido.");
//       }
//       else{
//         imprimir(1,atoi(argv[1]),1);}
//       }
//       break;
//
//     case 3:
//       if(atoi(argv[1])>100){
//         fprintf(stderr,"secuencia: Error(EX_NOPERM), permiso denegado.\"Success\"");
//         fprintf(stderr,"secuencia+ Se intento superar el límite de salida.");
//       }
//       if(atoi(argv[1])==10){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"hasta\" no es un numero real válido.");
//       }
//       if(atoi(argv[2])==1){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"hasta\" no es un numero real válido.");
//       }
//       else{
//         imprimir(atoi(argv[2]),atoi(argv[1]),1);
//       }
//       break;
//
//     case 4:
//       if(atoi(argv[1])>100){
//         fprintf(stderr,"secuencia: Error(EX_NOPERM), permiso denegado.\"Success\"");
//         fprintf(stderr,"secuencia+ Se intento superar el límite de salida.");
//       }
//       if(atoi(argv[1])==10){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"hasta\" no es un numero real válido.");
//       }
//       if(atoi(argv[2])==1){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"desde\" no es un numero real válido.");
//       }
//       if(atoi(argv[3])==1){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"paso\" no es un numero real válido.");
//       }
//       if(atoi(argv[3])==0){
//         fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//         fprintf(stderr,"secuencia+ El parametro \"paso\" no puede valer 0.");
//       }
//       else{
//         imprimir(atoi(argv[2]),atoi(argv[1]),atoi(argv[3]));
//       }
//       break;
//
//     default:
//       fprintf(stderr,"secuencia: Error(EX_USAGE), uso incorrecto del mandato.\"Success\"");
//       fprintf(stderr,"secuencia+ El número de argumentos no es correcto");
//       break;
//     }
//   }
// }
