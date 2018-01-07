#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2048

int getN(FILE *fp){
	int contador = 0;
	char c;
	while(!feof(fp)){
		c = fgetc(fp);
		if(c == '\n')
			contador++;
	}
	return contador;
}

int main (int argc,char *argv[]){
	if(strcmp(argv[1], "-h") == 0){
		printf("bocabajo: Uso: bocabajo [ fichero... ]\n");
		printf("bocabajo: Invierte el orden de las lineas de los ficheros (o de la entrada).\n");
	}else{
		int i;
		for(i=argc-1;i>0;i--){
			char *archivo =argv[1];
			FILE *fp;
			fp = fopen(archivo , "r");
			// int tam = getN(fp);
			// char string[tam];
			if(fp == NULL) {
		    printf("Error opening file");
   		}else{
				int tam = getN(fp);
				char *arr[tam];
				int j = 0;
				char str[2048];
				while(fgets(str,2048,fp) != NULL){
					arr[j] = str;
					j ++;
				}
				j --;
				for(;j>=0;j--){
					printf("%s\n", arr[j]);
				}
			}
			fclose(fp);
		}
	}
	// char *string = "this is a copy";
	// char *newstr;
	//
	// if ((newstr = strdup(string)) != NULL)
	// 	 printf("The new string is: %s\n", newstr);
	return 0;
}
