#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Dados da primeira carta
    char codigo_1[3];
    char nome_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Dados da segunda carta
    char codigo_2[3];
    char nome_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira os dados da primeira carta:\n");
    printf("Código: ");
    scanf("%s",codigo_1);
    printf("Nome: ");
    scanf("%s",nome_1);
    printf("População: ");
    scanf("%d",&populacao_1);
    printf("Area: ");
    scanf("%f",&area_1);
    printf("PIB: ");
    scanf("%f",&pib_1);
    printf("Pontos Turísticos: ");
    scanf("%d",&pontos_turisticos_1);


    printf("\n\nInsira os dados da segunda carta:\n");
    printf("Código: ");
    scanf("%s",codigo_2);
    printf("Nome: ");
    scanf("%s",nome_2);
    printf("População: ");
    scanf("%d",&populacao_2);
    printf("Area: ");
    scanf("%f",&area_2);
    printf("PIB: ");
    scanf("%f",&pib_2);
    printf("Pontos Turísticos: ");
    scanf("%d",&pontos_turisticos_2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--------------------\n");
    printf("Carta 1:\n");
    printf("Código: %s\n",codigo_1);
    printf("Nome: %s\n",nome_1);
    printf("População: %d\n",populacao_1);
    printf("Area: %f Km²\n",area_1);
    printf("PIB: %f\n",pib_1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos_1);

    printf("--------------------\n");

    printf("Segunda carta:\n");
    printf("Código: %s\n",codigo_2);
    printf("Nome: %s\n",nome_2);
    printf("População: %d\n",populacao_2);
    printf("Area: %f Km²\n",area_2);
    printf("PIB: %f\n",pib_2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos_2);
    return 0;
}
