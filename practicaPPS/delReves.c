#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//DESCOMENTAR
//#include<sysexits.h>
// #include"auxiliar.c"
#define MAX 2048

int main (int argc,char **argv){
	if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0){
			fprintf(stdout, "delreves: Uso: delreves [ fichero... ]\n");
			fprintf(stdout, "delreves: Invierte el contenido de las lineas de los ficheros (o de la entrada).\n");
	}else{
		int i;
		for(i=1;i<argc;i++){
			FILE *fp;
			fp = fopen(argv[i] , "r");
			if(fp == NULL){
				fprintf(stderr, "Error(EX_NOINPUT), uso incorrecto del mandato.\"Success\"\n");
				fprintf(stderr, "El fichero %s no pudo ser leído\n", argv[i]);
				//DESCOMENTAR
				// return EX_NOINPUTM;
			}
			char str[2048];
			char res[2048];
			memset(str,'\0',2048);
			memset(res,'\0',2048);
			while(!feof(fp)) {
				fgets(str,MAX,fp);
				for(int i = strlen(str)-1;i>=0; i--){
					res[(strlen(str)-1-i)]=str[i];
				}
				fputs(res, stdout);
				memset(str,'\0',2048);
				memset(res,'\0',2048);
			}
			fclose(fp);
		}
	}
	return 0;
}
