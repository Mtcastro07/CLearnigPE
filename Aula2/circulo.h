typedef struct circulo Circulo;

Circulo* criarCiculo(int* x, int* y, int* raio);
void liberarCirculo(Circulo* circulo);
void calcularArea(Circulo* circulo, int* resultado);
void pontoDentro(Circulo* circulo,int* resultado, int x, int y);
