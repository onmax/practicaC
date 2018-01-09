#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sysexits.h>
#define MAX 2048
#include<errno.h>
int main (int argc,char **argv){
 if(argc==1){
char str[2048];
char res[2048];

           while(fgets(str,MAX,stdin) != NULL) {
                                strtok(str, "\n");
                                int i;
                                for(i = strlen(str)-1;i>=0; i--){
                                        res[(strlen(str)-1-i)]=str[i];
                                }
                                fputs(res, stdout);
                                printf("\n");
                                memset(str,'\0',2048);
                                memset(res,'\0',2048);
                        }
            }

	else if(argc==2&&(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)){
                        fprintf(stdout, "delreves: Uso: delreves [ fichero... ]\n");
                        fprintf(stdout, "delreves: Invierte el contenido de las lineas de los ficheros (o de la entrada).\n");
        }

        else{
                int i;
                for(i=1;i<argc;i++){
                       	FILE *fp;
                       	fp = fopen(argv[i] , "r");
                        if(fp == NULL){
                               	if(errno==2){
                                 fprintf(stderr, "delreves: Error(EX_NOINPUT), uso incorrecto del mandato.\"Success\"\n");
                                fprintf(stderr, "delreves+.*\"%s\" no pudo ser leído\n", argv[i]);
                                 return EX_NOINPUT;

                                }
                                else{
                                fprintf(stderr, "delreves: Error(EX_NOINPUT), uso incorrecto del mandato.\"Success\"\n");
                                fprintf(stderr, "delreves+.*\"%s\" no pudo ser leído\n", argv[i]);
                                 return EX_NOINPUT;
}
                        }
                        else{
                        char str[2048];
                        char res[2048];
                        memset(str,'\0',2048);
                        memset(res,'\0',2048);
                        while(fgets(str,MAX,fp) != NULL) {
                                strtok(str, "\n");
                                int i;
                                for(i = strlen(str)-1;i>=0; i--){
                                        res[(strlen(str)-1-i)]=str[i];
					  }
                               	fputs(res, stdout);
                               	printf("\n");
                                memset(str,'\0',2048);
                                memset(res,'\0',2048);
                                                }
                        fclose(fp);
                }
}
        }
        return 0;
}






