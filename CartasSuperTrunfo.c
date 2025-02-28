#include <stdio.h>
int main(){
//variaveis 1
    char estado, nomedacidade[20];
    int  codigodacidade, pontosturisticos;
    float area, PIB, densidade, PIBper;
    unsigned long int populacao;
    float SuperPoder;

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

//calculos

densidade = populacao / area;
PIBper = (PIB * 1000000000) / populacao;
SuperPoder = (float) populacao + area + PIB + PIBper + (1 / densidade);

//impressao
    printf("\n\n\n*-=-= CARTA 1 =-=-*\n\n");
    printf("Nome da cidade: %s.\n", nomedacidade);
    printf("Estado: %c\n",estado);
    printf("Codigo: %c0%d.\n",estado, codigodacidade);
    printf("Pontos Turisticos: %d.\n", pontosturisticos);
    printf("Populacao: %d Milhoes.\n",populacao);
    printf("Area: %.2f Quilometros.\n",area);
    printf("PIB: %.2f Bilhoes.\n",PIB);
    printf("Densidade Populacional: %.2f hab/km.\n", densidade);
    printf("PIB per Capita: %.2f reais.\n", PIBper);
    printf("Super Poder: %.2f\n\n", SuperPoder);



    //variaveis 2
    char estado2, nomedacidade2[13];
    int  codigodacidade2, pontosturisticos2;
    float area2, PIB2, densidade2, PIBper2;
    unsigned long int populacao2;
    float SuperPoder2;
//questinonario
    printf("\n*-=-=CARTA 2=-=-*\n\n");
    printf("Insira o nome da cidade:\n");
    scanf("%10[^/n]s",&nomedacidade2);

    printf("insira o estado(Uma letra de 'A' a 'H'): \n");
    scanf("%s",&estado2);

    printf("Insira o codigo da carta(Numero de 1 a 4): \n");
    scanf("%d",&codigodacidade2);

    printf("insira o numero de Pontos Turisticos que a cidade de %s tem: \n", nomedacidade2);
    scanf("%d", &pontosturisticos2);

    printf("Insira a populacao(Milhoes):\n");
    scanf("%d",&populacao2);

    printf("Insira a area da cidade (Quilometros): \n");
    scanf("%f",&area2);

    printf("Insira o PIB(Bilhoes): \n");
    scanf("%f",&PIB2);

//calculos2

densidade2 = populacao2 / area2;
PIBper2 = (PIB2 * 1000000000) / populacao2;
SuperPoder2 = (float) populacao2 + area2 + PIB2 + PIBper2 + (1 / densidade2);

//impressao
    printf("\n\n\n*-=-= CARTA 2 =-=-*\n\n");
    printf("Nome da cidade:  %s.\n", nomedacidade2);
    printf("Estado: %c\n",estado2);
    printf("Codigo: %c0%d.\n",estado2, codigodacidade2);
    printf("Pontos Turisticos: %d.\n", pontosturisticos2);
    printf("Populacao: %d Milhoes.\n",populacao2);
    printf("Area: %.2f Quilometros.\n",area2);
    printf("PIB: %.2f Bilhoes.\n",PIB2);
    printf("Densidade Populacional: %.2f hab/km.\n", densidade2);
    printf("PIB per Capita: %.2f reais.\n", PIBper2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    //comparacoes
    printf("***COMBATE DE CARTAS***\n\n");
    printf("lembre-se 1 para verdadeiro e 0 para falso!\n\n");
    printf("Numero de pontos turisticos de %s e maior que de %s?: %d\n", nomedacidade, nomedacidade2, (pontosturisticos > pontosturisticos2));
    printf("Populacao de cidade %s e maior que de %s?: %d\n", nomedacidade, nomedacidade2, (populacao > populacao2));
    printf("A Area de %s e maior que de %s?: %d\n", nomedacidade, nomedacidade2, (area > area2));
    printf("O PIB da cidade %s e maior que de %s?: %d\n", nomedacidade, nomedacidade2, (PIB > PIB2));
    printf("A Densidade Populacional da cidade de %s e menor que de %s?: %d\n", nomedacidade, nomedacidade2, (densidade < densidade2));
    printf("O PIB per Capita de %s e maior que de %s?: %d\n", nomedacidade, nomedacidade2, (PIBper > PIBper2));
    printf("O Super Poder de %s e maior que de %s?: %d\n\n", nomedacidade, nomedacidade2, (SuperPoder > SuperPoder2));


    
    printf("\nfim!\n");

    return 0;
}
