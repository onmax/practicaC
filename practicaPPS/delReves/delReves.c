#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 2048
int main (int argc,char **argv){
	if(strcmp(argv[1], "-h") == 0){
		printf("delreves: Uso: delreves [ fichero... ]\n");
		printf("delreves: Invierte el contenido de las lineas de los ficheros (o de la entrada).\n");
	}else{
	// 	FILE *fp;
	// 	int c;
	// 	int i = 0;
	// 	int str[2048];
	// 	fp = fopen("prueba1.txt","r");
	// 	while(!feof(fp)) {
	// 	  c = fgetc(fp);
	// 		str[i]=c;
	// 		if(c == '\n'){
	// 			while(i != (-1)){
	// 				printf("%c",str[i]);
	// 				i --;
		// 			}
	// 			i = 0;
	// 		}else{
	// 			i ++;
	// 		}
	// 	}
	// 	fclose(fp);
	// 	return(0);
		FILE *fp;
		fp = fopen("prueba1.txt" , "r");
		char *str;
		char *str2;
		char temp;
		int longitud;
		while(!feof(fp)) {
			fgets(str,MAX,fp);
			longitud = strlen(str);
			for(int i-1 = longitud; i>= 0; i--){
				temp = str[longitud-i];
				str2[i] = temp;
			}
			fputs(str2, stdout);
		}
		fclose(fp);
	}
	return 0;
}
