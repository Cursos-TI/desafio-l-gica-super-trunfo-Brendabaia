#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
    typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;
int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
      Carta c1, c2;

    printf("Cadastro da Carta 1\n");
    printf("Estado: "); scanf("%s", c1.estado);
    printf("Código: "); scanf("%s", c1.codigo);
    printf("Cidade: "); scanf("%s", c1.cidade);
    printf("População: "); scanf("%d", &c1.populacao);
    printf("Área: "); scanf("%f", &c1.area);
    printf("PIB: "); scanf("%f", &c1.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c1.pontos_turisticos);

    printf("\nCadastro da Carta 2\n");
    printf("Estado: "); scanf("%s", c2.estado);
    printf("Código: "); scanf("%s", c2.codigo);
    printf("Cidade: "); scanf("%s", c2.cidade);
    printf("População: "); scanf("%d", &c2.populacao);
    printf("Área: "); scanf("%f", &c2.area);
    printf("PIB: "); scanf("%f", &c2.pib);
    printf("Pontos Turísticos: "); scanf("%d", &c2.pontos_turisticos);

    printf("\nComparando pelo atributo População...\n");
    if (c1.populacao > c2.populacao) {
        printf("Vencedor: %s (%s)\n", c1.cidade, c1.codigo);
    } else if (c2.populacao > c1.populacao) {
        printf("Vencedor: %s (%s)\n", c2.cidade, c2.codigo);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
