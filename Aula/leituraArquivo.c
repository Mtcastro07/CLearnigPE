#include <stdio.h>

int main(){
    FILE *fp = fopen("notas.txt", "r");
    FILE *fs = fopen("saida.txt", "w"); 
    float nota;
    float nota_nova;

    while(fscanf(fp,"%f", &nota) == 1){
        nota_nova = nota + 1;
        if(nota_nova > 10){
            nota_nova = 10;
            fprintf(fs,"%f %f\n",nota, nota_nova);
            printf("%f %f\n", nota, nota_nova);
        }
        else{
            fprintf(fs, "%f %f\n", nota, nota_nova);
            printf("%f %f\n", nota, nota_nova);
        }
    }

    
    
    fclose(fs);
    fclose(fp);
}