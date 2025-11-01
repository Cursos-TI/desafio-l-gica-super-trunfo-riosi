#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char cartaUm[10] = "Carta 1";
    char estadoUm[1] = "A";
    char codCartaUm[3] = "A01";
    char nomeCidadeUm[30] = "São Paulo";
    unsigned long int habitantesUm = 12325000;
    float pibUm = 699.28;
    float areaUm = 1521.11;
    int pontosTuristicosUm = 50;
    float densidadePopUm = (float) habitantesUm / areaUm;
    float pibPerCapitaUm = (pibUm * 1000000000) / (float) habitantesUm;
    float superPoderUm = (float) habitantesUm + areaUm + pibUm + pontosTuristicosUm + pibPerCapitaUm - densidadePopUm;
    
    char cartaDois[10] = "Carta 2";
    char estadoDois[2] = "B";
    char codCartaDois[3] = "B02";
    char nomeCidadeDois[30] = "Rio de Janeiro";
    unsigned long int habitantesDois = 6748000;
    float areaDois = 1200.25;
    float pibDois = 300.50;
    int pontosTuristicosDois = 30;
    float densidadePopDois = (float) habitantesDois / areaDois;
    float pibPerCapitaDois = (pibDois * 1000000000) / (float) habitantesDois;
    float superPoderDois = (float) habitantesDois + areaDois + pibDois + pontosTuristicosDois + pibPerCapitaDois - densidadePopDois;

    int cartaUmAtributo1, cartaUmAtributo2, cartaUmResultado1, cartaUmResultado2, cartaDoisAtributo1, cartaDoisAtributo2, cartaDoisResultado1, cartaDoisResultado2;
    int pontoAtributo1, pontoAtributo2, somaCartaUm, somaCartaDois;

    // criar menu interativo
    printf("Bem-vindo ao Super Trunfo: Cidades do Brasil");
    printf("%s - %s\n", cartaUm, nomeCidadeUm);
    printf("%s - %s\n", cartaDois, nomeCidadeDois);
    printf("Atributos para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Para cada atributo vitorioso a carta ganha 1 ponto.\n");
    printf("No final, a carta com mais pontos é a vencedora.\n");

// Escolha do primeiro atributo da carta 1
    printf("\nEscolha o primeiro atributo da Carta 1: ");
    scanf("%d", &cartaUmAtributo1);

    switch (cartaUmAtributo1)
    {
    case 1:
        printf("\nComparação de cartas - Atributo: População\n");
        printf("%s - %s (SP): %d\n", cartaUm, nomeCidadeUm, habitantesUm);
        cartaUmResultado1 = habitantesUm > habitantesDois ? 1 : 0;
    break;
    case 2:
        printf("\nComparação de cartas - Atributo: Área\n");
        printf("%s - %s (SP): %.2f km²\n", cartaUm, nomeCidadeUm, areaUm);
        cartaUmResultado1 = areaUm > areaDois ? 1 : 0;  
    break;
    case 3:
        printf("\nComparação de cartas - Atributo: PIB\n");
        printf("%s - %s (SP): %.2f bilhões\n", cartaUm, nomeCidadeUm, pibUm);
        cartaUmResultado1 = pibUm > pibDois ? 1 : 0;
    break;
    case 4:
        printf("\nComparação de cartas - Atributo: Pontos Turísticos\n");
        printf("%s - %s (SP): %d\n", cartaUm, nomeCidadeUm, pontosTuristicosUm);
        cartaUmResultado1 = pontosTuristicosUm > pontosTuristicosDois ? 1 : 0;
    break;
    case 5:
        printf("\nComparação de cartas - Atributo: Densidade Populacional\n");
        printf("%s - %s (SP): %.2f\n", cartaUm, nomeCidadeUm, densidadePopUm);
        cartaUmResultado1 = densidadePopUm > densidadePopDois ? 0 : 1;
    break;
    case 6:
        printf("\nComparação de cartas - Atributo: PIB per Capita\n");
        printf("%s - %s (SP): %.2f\n", cartaUm, nomeCidadeUm, pibPerCapitaUm);
        cartaUmResultado1 = pibPerCapitaUm > pibDois ? 1 : 0;
    break;
    default:
    printf("Opção inválida.\n");
        break;
    }   

    // escolha do segundo atributo da carta 1

    printf("\nEscolha o segundo atributo da Carta 1: ");
    scanf("%d", &cartaUmAtributo2);

    if (cartaUmAtributo1 == cartaUmAtributo2) {
        printf("Você escolheu o mesmo atributo. Reinicie a comparação.\n");
    } else {
        switch (cartaUmAtributo2)
    {
    case 1:
        printf("\nComparação de cartas - Atributo: População\n");
        printf("%s - %s (SP): %d\n", cartaUm, nomeCidadeUm, habitantesUm);
        cartaUmResultado2 = habitantesUm > habitantesDois ? 1 : 0;
    break;
    case 2:
        printf("\nComparação de cartas - Atributo: Área\n");
        printf("%s - %s (SP): %.2f km²\n", cartaUm, nomeCidadeUm, areaUm);
        cartaUmResultado2 = areaUm > areaDois ? 1 : 0;  
    break;
    case 3:
        printf("\nComparação de cartas - Atributo: PIB\n");
        printf("%s - %s (SP): %.2f bilhões\n", cartaUm, nomeCidadeUm, pibUm);
        cartaUmResultado2 = pibUm > pibDois ? 1 : 0;
    break;
    case 4:
        printf("\nComparação de cartas - Atributo: Pontos Turísticos\n");
        printf("%s - %s (SP): %d\n", cartaUm, nomeCidadeUm, pontosTuristicosUm);
        cartaUmResultado2 = pontosTuristicosUm > pontosTuristicosDois ? 1 : 0;
    break;
    case 5:
        printf("\nComparação de cartas - Atributo: Densidade Populacional\n");
        printf("%s - %s (SP): %.2f\n", cartaUm, nomeCidadeUm, densidadePopUm);
        cartaUmResultado2 = densidadePopUm > densidadePopDois ? 0 : 1;
    break;
    case 6:
        printf("\nComparação de cartas - Atributo: PIB per Capita\n");
        printf("%s - %s (SP): %.2f\n", cartaUm, nomeCidadeUm, pibPerCapitaUm);
        cartaUmResultado2 = pibPerCapitaUm > pibPerCapitaDois ? 1 : 0;
    break;
    default:
    printf("Opção inválida.\n");
        break;
        }   
    }

    // soma da pontuação dos dois atributos da carta 1
    somaCartaUm = cartaUmResultado1 + cartaUmResultado2;
    printf("\nPontos da Carta 1 nessa rodada: %d\n", somaCartaUm);

    // escolha do primeiro atributo da carta 2

     printf("\nEscolha o primeiro atributo da Carta 2: ");
    scanf("%d", &cartaDoisAtributo1);

    switch (cartaDoisAtributo1)
    {
    case 1:
        printf("\nComparação de cartas - Atributo: População\n");
        printf("%s - %s (RJ): %d\n", cartaDois, nomeCidadeDois, habitantesDois);
        cartaDoisResultado1 = habitantesUm < habitantesDois ? 1 : 0;
    break;
    case 2:
        printf("\nComparação de cartas - Atributo: Área\n");
        printf("%s - %s (RJ): %.2f km²\n", cartaDois, nomeCidadeDois, areaDois);
        cartaDoisResultado1 = areaUm < areaDois ? 1 : 0;  
    break;
    case 3:
        printf("\nComparação de cartas - Atributo: PIB\n");
        printf("%s - %s (RJ): %.2f bilhões\n", cartaDois, nomeCidadeDois, pibDois);
        cartaDoisResultado1 = pibUm < pibDois ? 1 : 0;
    break;
    case 4:
        printf("\nComparação de cartas - Atributo: Pontos Turísticos\n");
        printf("%s - %s (RJ): %d\n", cartaDois, nomeCidadeDois, pontosTuristicosDois);
        cartaDoisResultado1 = pontosTuristicosUm < pontosTuristicosDois ? 1 : 0;
    break;
    case 5:
        printf("\nComparação de cartas - Atributo: Densidade Populacional\n");
        printf("%s - %s (RJ): %.2f\n", cartaDois, nomeCidadeDois, densidadePopDois);
        cartaDoisResultado1 = densidadePopUm < densidadePopDois ? 0 : 1;
    break;
    case 6:
        printf("\nComparação de cartas - Atributo: PIB per Capita\n");
        printf("%s - %s (RJ): %.2f\n", cartaDois, nomeCidadeDois, pibPerCapitaDois);
        cartaDoisResultado1 = pibPerCapitaUm < pibPerCapitaDois ? 1 : 0;
    break;
    default:
    printf("Opção inválida.\n");
        break;
    }   

    // escolhendo o segundo atributo da carta 2

    printf("\nEscolha o segundo atributo da Carta 2: ");
    scanf("%d", &cartaDoisAtributo2);

    if (cartaDoisAtributo1 == cartaDoisAtributo2) {
        printf("Você escolheu o mesmo atributo. Reinicie a comparação.\n");
    } else {
        switch (cartaDoisAtributo2) {

    case 1:
        printf("\nComparação de cartas - Atributo: População\n");
        printf("%s - %s (RJ): %d\n", cartaDois, nomeCidadeDois, habitantesDois);
        cartaDoisResultado2 = habitantesUm < habitantesDois ? 1 : 0;
    break;
    case 2:
        printf("\nComparação de cartas - Atributo: Área\n");
        printf("%s - %s (RJ): %.2f km²\n", cartaDois, nomeCidadeDois, areaDois);
        cartaDoisResultado2 = areaUm < areaDois ? 1 : 0;  
    break;
    case 3:
        printf("\nComparação de cartas - Atributo: PIB\n");
        printf("%s - %s (RJ): %.2f bilhões\n", cartaDois, nomeCidadeDois, pibDois);
        cartaDoisResultado2 = pibUm < pibDois ? 1 : 0;
    break;
    case 4:
        printf("\nComparação de cartas - Atributo: Pontos Turísticos\n");
        printf("%s - %s (RJ): %d\n", cartaDois, nomeCidadeDois, pontosTuristicosDois);
        cartaDoisResultado2 = pontosTuristicosUm < pontosTuristicosDois ? 1 : 0;
    break;
    case 5:
        printf("\nComparação de cartas - Atributo: Densidade Populacional\n");
        printf("%s - %s (RJ): %.2f\n", cartaDois, nomeCidadeDois, densidadePopDois);
        cartaDoisResultado2 = densidadePopUm < densidadePopDois ? 0 : 1;
    break;
    case 6:
        printf("\nComparação de cartas - Atributo: PIB per Capita\n");
        printf("%s - %s (RJ): %.2f\n", cartaDois, nomeCidadeDois, pibPerCapitaDois);
        cartaDoisResultado2 = pibPerCapitaUm < pibPerCapitaDois ? 1 : 0;
    break;
    default:
    printf("Opção inválida.\n");
        break;
        }   
    }
    somaCartaDois = cartaDoisResultado1 + cartaDoisResultado2;
    printf("\nPontos da Carta 2 nessa rodada: %d\n", somaCartaDois);

    if (somaCartaUm > somaCartaDois) {
        printf("\nParabéns! A %s - %s obteve %d pontos e é a vencedora!\n", cartaUm, nomeCidadeUm, somaCartaUm);
    } else if (somaCartaUm == somaCartaDois) {
        printf("\nOpa! Temos um empate.\n");
    } else {
        printf("\nParabéns! A %s - %s obteve %d pontos e é a vencedora!\n", cartaDois, nomeCidadeDois, somaCartaDois);
    }


    return 0;
}