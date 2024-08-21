#include <stdio.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

struct Retangulo {
    struct Ponto sup_esq;
    struct Ponto inf_dir;
};

int calcularArea(struct Retangulo r) {
    int largura = r.inf_dir.x - r.sup_esq.x;
    int altura = r.sup_esq.y - r.inf_dir.y;
    return largura * altura;
}

double calcularDiagonal(struct Retangulo r) {
    int largura = r.inf_dir.x - r.sup_esq.x;
    int altura = r.sup_esq.y - r.inf_dir.y;
    return sqrt(largura * largura + altura * altura);
}

int calcularPerimetro(struct Retangulo r) {
    int largura = r.inf_dir.x - r.sup_esq.x;
    int altura = r.sup_esq.y - r.inf_dir.y;
    return 2 * (largura + altura);
}

int main() {
    struct Retangulo ret;

    
    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%d %d", &ret.sup_esq.x, &ret.sup_esq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%d %d", &ret.inf_dir.x, &ret.inf_dir.y);

    int area = calcularArea(ret);
    double diagonal = calcularDiagonal(ret);
    int perimetro = calcularPerimetro(ret);

    printf("Área do retângulo: %d\n", area);
    printf("Comprimento da diagonal do retângulo: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %d\n", perimetro);

    return 0;
}