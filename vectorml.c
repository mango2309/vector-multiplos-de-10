#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivoml=NULL;
    int i;

    archivo=fopen("vector.txt","r");
    archivoml=fopen("vectorml3.txt","w");

    if (archivoml==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    if (archivoml==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    while (!feof(archivo)){
        fscanf(archivo,"%d",&i);
        if(i%10==0){
            fprintf(archivoml,"ES MULTIPLO DE 10\n");
        }else{
            fprintf(archivoml,"%d\n",i);
        }
    
    
    }
    

     fclose(archivo);
     fclose(archivoml);
     return 0;
}