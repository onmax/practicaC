#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2048

int main (int argc,char **argv){
	if(strcmp(argv[1], "-h") == 0){
			printf("delreves: Uso: delreves [ fichero... ]\n");
			printf("delreves: Invierte el contenido de las lineas de los ficheros (o de la entrada).\n");
	}else{
		for(int i=1;i<argc;i++){
			FILE *fp;
			fp = fopen(argv[i] , "r");
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
