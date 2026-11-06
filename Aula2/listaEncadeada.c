#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int id;
    char nome[255];
    int notas[10];
}Aluno;

typedef struct alunos {
    Aluno info;
    struct alunos *prox;
}Alunos;

Alunos* inserir_aluno(int id, char nome[], int notas[10]){
    Alunos *lista = malloc(sizeof(Alunos));
    Aluno novo_aluno = {
        id,nome,notas
    };
    lista->info = novo_aluno;
    lista->prox = ?
}