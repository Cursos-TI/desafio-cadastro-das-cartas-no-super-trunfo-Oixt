#include <stdio.h>
int main(){
//variaveis 1
    char estado, nomedacidade[20];
    int  codigodacidade, populacao, pontosturisticos;
    float area, PIB;
//questinonario
    printf("***CADASTRAMENTO DE CARTAS DO SUPER TRUNFO***\n");
    printf("*-=-=CARTA 1=-=-*\n\n");
    printf("Insira o nome da cidade:\n");
    scanf("%20[^\n]s",&nomedacidade);

    printf("insira o estado(Uma letra de 'A' a 'H'): \n");
    scanf("%s",&estado);

    printf("Insira o codigo da carta(Numero de 1 a 4): \n");
    scanf("%d",&codigodacidade);

    printf("insira o numero de Pontos Turisticos que a cidade de %s tem: \n",nomedacidade);
    scanf("%d",&pontosturisticos);

    printf("Insira a populacao(Milhoes):\n");
    scanf("%d",&populacao);

    printf("Insira a area da cidade (Quilometros): \n");
    scanf("%f",&area);

    printf("Insira o PIB(Bilhoes): \n");
    scanf("%f",&PIB);
//impressao
    printf("\n\n\n*-=-= CARTA 1 =-=-*\n\n");
    printf("Nome da cidade: %s.\n", nomedacidade);
    printf("Estado: %c\n",estado);
    printf("Codigo: %c0%d.\n",estado, codigodacidade);
    printf("Pontos Turisticos: %d.\n", pontosturisticos);
    printf("Populacao: %d Milhoes.\n",populacao);
    printf("Area: %.2f Quilometros.\n",area);
    printf("PIB: %.2f Bilhoes.\n",PIB);





    //variaveis 2
    char estado2, nomedacidade2[10];
    int  codigodacidade2, populacao2, pontosturisticos2;
    float area2, PIB2;
//questinonario
    printf("\n*-=-=CARTA 2=-=-*\n\n");
    printf("Insira o nome da cidade:\n");
    scanf("%10[^/n]s",&nomedacidade2);

    printf("insira o estado(Uma letra de 'A' a 'H'): \n");
    scanf("%s",&estado2);

    printf("Insira o codigo da carta(Numero de 1 a 4): \n");
    scanf("%d",&codigodacidade2);

    printf("insira o numero de Pontos Turisticos que a cidade de %s tem: \n",nomedacidade2);
    scanf("%d",&pontosturisticos2);

    printf("Insira a populacao(Milhoes):\n");
    scanf("%d",&populacao2);

    printf("Insira a area da cidade (Quilometros): \n");
    scanf("%f",&area2);

    printf("Insira o PIB(Bilhoes): \n");
    scanf("%f",&PIB2);
//impressao
    printf("\n\n\n*-=-= CARTA 2 =-=-*\n\n");
    printf("Nome da cidade:  %s.\n", nomedacidade2);
    printf("Estado: %c\n",estado2);
    printf("Codigo: %c0%d.\n",estado2, codigodacidade2);
    printf("Pontos Turisticos: %d.\n", pontosturisticos2);
    printf("Populacao: %d Milhoes.\n",populacao2);
    printf("Area: %.2f Quilometros.\n",area2);
    printf("PIB: %.2f Bilhoes.\n",PIB2);

    printf("\nfim!");

    return 0;
}