#include <stdio.h>
#include <stdlib.h>

#define MAX_L 10
#define MAX_C 10

// Estrutura para armazenar o ponto e o movimento realizado para chegar nele
typedef struct {
  int x, y;
  const char *movimento;
} Passo;

int totalCaminhos = 0;

void encontrarCaminhosBaixoDireita(int x, int y, int destX, int destY, int l, int c,
                                  int lab[MAX_L][MAX_C], Passo caminho[], int totalPassos,
                                  const char *movimento) {
  // 1. Validação: se ultrapassar os limites da matriz ou bater em obstáculo (1), encerra o ramo
  if (x >= l || y >= c || lab[x][y] != 0) {
    return;
  }

  // 2. Registra a posição atual e a direção tomada
  caminho[totalPassos].x = x;
  caminho[totalPassos].y = y;
  caminho[totalPassos].movimento = movimento;
  totalPassos++;

  // 3. CASO BASE: Alcançou o destino final (destX, destY)
  if (x == destX && y == destY) {
    totalCaminhos++;
    printf("Caminho %d:\n  Coordenadas: ", totalCaminhos);
    for (int i = 0; i < totalPassos; i++) {
      printf("(%d,%d)%s", caminho[i].x, caminho[i].y, (i < totalPassos - 1) ? " -> " : "");
    }
    printf("\n  Direções:    ");
    for (int i = 1; i < totalPassos; i++) {
      printf("[%s]%s", caminho[i].movimento, (i < totalPassos - 1) ? " -> " : "");
    }
    printf("\n\n");
    return;
  }

  // 4. PASSO RECURSIVO 1: Tenta ir para BAIXO (x + 1)
  encontrarCaminhosBaixoDireita(x + 1, y, destX, destY, l, c, lab, caminho, totalPassos, "BAIXO");

  // 5. PASSO RECURSIVO 2: Tenta ir para a DIREITA (y + 1)
  encontrarCaminhosBaixoDireita(x, y + 1, destX, destY, l, c, lab, caminho, totalPassos, "DIREITA");
}

int main() {
  int l = 3;
  int c = 3;

  // Matriz de exemplo 3x3 (0 = livre, 1 = obstáculo)
  int lab[MAX_L][MAX_C] = {
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0}
  };

  Passo caminho[MAX_L + MAX_C];
  int inicioX = 0, inicioY = 0;
  int fimX = 2, fimY = 2;

  printf("=== Todos os Caminhos Possíveis (Apenas BAIXO e DIREITA) ===\n");
  printf("Origem: (%d,%d) -> Destino: (%d,%d) em matriz %dx%d\n\n", inicioX, inicioY, fimX, fimY, l, c);

  encontrarCaminhosBaixoDireita(inicioX, inicioY, fimX, fimY, l, c, lab, caminho, 0, "INICIO");

  printf("Total de caminhos encontrados: %d\n", totalCaminhos);

  return 0;
}
