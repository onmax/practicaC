#include<stdio.h>
#include<stdlib.h>

int main (int argc,char **argv){

	int c;
  int nchar = 0;
  FILE *fd;

  for(int i = 1; i < argc; i++){
    char str[2048];
    char res[2048];
  	fd = fopen(argv[i],"rt");
  	if(fd == NULL){
  		printf("Error al tratar de leer el archivo");
  		return 1;
  	}
    int contador = 0;
    while((c=fgetc(fd))!=EOF){
      str[contador] = c;
      contador ++;
      nchar ++;
    }
    res[contador]= 0;
    contador = 0;
    while(nchar > 0){
      res[nchar]=str[contador];
      contador ++;
      nchar --;
    }
    puts(res);
  	fclose(fd);
  }
	return 0;
}
