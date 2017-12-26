#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc,char **argv){
	if(strcmp(argv[1], "-h") == 0){
		printf("delreves: Uso: delreves [ fichero... ]\n");
		printf("delreves: Invierte el contenido de las lineas de los ficheros (o de la entrada).\n");
	}else{
		FILE *fp;
		int c;
		int i = 0;
		int str[2048];
		fp = fopen("prueba1.txt","r");
		while(!feof(fp)) {
		  c = fgetc(fp);
			str[i]=c;
			if(c == '\n'){
				while(i != (-1)){
					printf("%c",str[i]);
					i --;
				}
				i = 0;
			}else{
				i ++;
			}
		}
		fclose(fp);
		return(0);
	}
	return 0;
}
