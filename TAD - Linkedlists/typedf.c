#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char *nome;
    int matricula;
    int nota;
}Alunos;

int main(){
    Alunos *Aluno1;

    Aluno1->nome = "Esther";
    Aluno1->matricula = 25523206;
    Aluno1->nota = 10;

}