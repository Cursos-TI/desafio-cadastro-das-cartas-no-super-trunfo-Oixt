#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigodacidade;
    char nomedacidade[20];
    int populacao, pontosturisticos;
    float area, PIB;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("*** CADASTRO DAS CARTAS ***\n");
    printf ("-=- CARTA 1 -=-\n");
    printf ("Insira o nome da cidade:\n");
    scanf ("%s", &nomedacidade);

    printf ("Insira o codigo da cidade:\n");
    scanf ("%c", &codigodacidade);

    printf ("Insira a quantidade de pontos turistricos de %s:\n", nomedacidade);
    scanf ("%d", &pontosturisticos);

    printf ("Insira a populacao:\n");
    scanf ("%d", &populacao);

    printf ("Insira a Area da cidade:\n");
    scanf ("%f", &area);

    printf ("Insira o PIB:\n");
    scanf ("%f", &PIB);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf ("=-= CARTA 1 =-=\n");

    printf("Nome da Cidade: %s.\n", nomedacidade);
    printf("Codigo: %c.\n", codigodacidade);
    printf("Pontos Turisticos: %d.\n", pontosturisticos);
    printf("Populacao: %d.\n", populacao);
    printf("Area: %f metros quadrados.\n", area);
    printf("PIB: %f.\n", PIB);

    return 0;
}
