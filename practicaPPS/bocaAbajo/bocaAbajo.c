#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2048

int getN(FILE *fp){
	int contador = 0;
	while(!feof(fp)){contador++;}
	return contador;
}

int main (int argc,char **argv){
	if(strcmp(argv[1], "-h") == 0){
		printf("bocabajo: Uso: bocabajo [ fichero... ]\n");
		printf("bocabajo: Invierte el orden de las lineas de los ficheros (o de la entrada).\n");
	}else{
		int i;
		for(i=argc-1;i>0;i--){
			FILE *fp;
			fp = fopen(argv[i] , "r");
			int tam = getN(fp);
			char string[tam];
			// while(fgets(string, tam, fp) != NULL) {
			// 	printf("%s\n", string);
			// }
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
