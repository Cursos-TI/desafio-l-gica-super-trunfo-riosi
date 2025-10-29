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
    float pibUm = 699.28 * 1000000000;
    float areaUm = 1521.11;
    int pontosTuristicosUm = 50;
    float densidadePopUm = (float) habitantesUm / areaUm;
    float pibPerCapitaUm = pibUm / (float) habitantesUm;
    float superPoderUm = (float) habitantesUm + areaUm + pibUm + pontosTuristicosUm + pibPerCapitaUm - densidadePopUm;
    
    char cartaDois[10] = "Carta 2";
    char estadoDois[2] = "B";
    char codCartaDois[3] = "B02";
    char nomeCidadeDois[30] = "Rio de Janeiro";
    unsigned long int habitantesDois = 6748000;
    float areaDois = 1200.25;
    float pibDois = 300.50 * 1000000000;
    int pontosTuristicosDois = 30;
    float densidadePopDois = (float) habitantesDois / areaDois;
    float pibPerCapitaDois = pibDois / (float) habitantesDois;
    float superPoderDois = (float) habitantesDois + areaDois + pibDois + pontosTuristicosDois + pibPerCapitaDois - densidadePopDois;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\nComparação de cartas - Atributo: Pontos Turísticos\n");
    printf("%s - %s (SP): %d\n", cartaUm, nomeCidadeUm, pontosTuristicosUm);
    printf("%s - %s (RJ): %d\n", cartaDois, nomeCidadeDois, pontosTuristicosDois);

    if (pontosTuristicosUm > pontosTuristicosDois) {
        printf("Rsultado: %s (%s) venceu!\n", cartaUm, nomeCidadeUm);
    } else {
        printf("Rsultado: %s (%s) venceu!\n", cartaDois, nomeCidadeDois);
    }
    
    printf("\nComparação de cartas - Atributo: Densidade Populacional\n");
    printf("%s - %s (SP): %.2f\n", cartaUm, nomeCidadeUm, densidadePopUm);
    printf("%s - %s (RJ): %.2f\n", cartaDois, nomeCidadeDois, densidadePopDois);

    if (densidadePopUm < densidadePopDois) {
        printf("Rsultado: %s (%s) venceu!\n", cartaUm, nomeCidadeUm);
    } else {
        printf("Rsultado: %s (%s) venceu!\n", cartaDois, nomeCidadeDois);
    }



    return 0;
}
