#include <stdio.h>
#include <stdlib.h>

typedef struct produtos {
    char nome[256];
    float preco;
} produto;

void aplicar_desconto(produto* product, float desconto){
    product->preco -= product->preco*(desconto/100);
}

int main(){
    produto *product = malloc(sizeof(produto));

    scanf("%s", &product->nome);
    getchar();
    scanf("%f", &product->preco);
    aplicar_desconto(product, 10.0);
    printf("Seu produto de nome %s tem o valor agora de %f",product->nome,product->preco);
    
}