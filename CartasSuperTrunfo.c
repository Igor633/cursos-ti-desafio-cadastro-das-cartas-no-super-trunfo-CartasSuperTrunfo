#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

void inserirDados(struct Carta* carta) {
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta->nomeCidade);
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB: ");
    scanf("%f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirDados(struct Carta carta) {
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2;
    
    printf("Insira os dados da Carta 1:\n");
    inserirDados(&carta1);
    
    printf("\nInsira os dados da Carta 2:\n");
    inserirDados(&carta2);
    
    printf("\nCarta 1:\n");
    exibirDados(carta1);
    
    printf("\nCarta 2:\n");
    exibirDados(carta2);
    
    return 0;
}

