#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#define MAX 2048

int main (int argc,char *argv[]){
	char ** str_linea;
	int nfila = 0;
	FILE *fp;
	int i,j;
	if(argc == 2 && (strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0)){
		printf("bocabajo: Uso: bocabajo [ fichero... ]\n");
		printf("bocabajo: Invierte el orden de las lineas de los ficheros (o de la entrada).\n");
		return EX_OK;
	}else if(argc == 1){
		str_linea = (char **)malloc(sizeof (char *));
		while(fgets(linea,MAX,stdin))
			str_linea = (char **)realloc(str_linea,sizeof(char *));
		str_linea[nfila] = strup(linea);
		nfila ++;
		for(i = 0;i<nfila;i++)
			printf("%s\n", linea[nfila-1-i]);
		for (i = 0; i < nfila; i++)
			free (linea[i]);
		free (str_linea);
	}else{
		for(i=argc-1;i>0;i--){
			char *archivo =argv[1];
			str_linea = (char **) malloc(sizeof (char *));
      nfila = 0;
			if ((fp = fopen (argv[i], "rt") ) == NULL){
				fprintf(stderr, "Error(EX_NOINPUT), uso incorrecto del mandato.\"Success\"\n");
				fprintf(stderr, "El fichero %s no puede ser leido.",argv[i]);
				return EX_NOINPUT;
			}else{
				while(fgets(linea,MAX,fp))
					str_linea = (char **)realloc(str_linea,sizeof(char *));
				str_linea[nfila] = strup(linea);
				nfila ++;
				fclose(fp);
				for(j = 0;j<nfila;j++)
					printf("%s\n", linea[nfila-1-j]);
				for (j = 0; j < nfila; j++)
					free (linea[j]);
				free (str_linea);
			}
		}
	}
	return EX_OK;
}
