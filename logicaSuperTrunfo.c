
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Jogo de cartas Super Trunfo - Comparando atributos

    char Estado1 = 'A';
    char Codigo1[20] = "A01";
    char Cidade1[20] = "São Paulo";
    int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float Pib1 = 699280000000;
    int PontosTur1 = 50;
    float DensidadePop1 = Populacao1 / Area1;
    float PIBperCap1 = Pib1 / Populacao1;
    float SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTur1 + (1 / DensidadePop1) + PIBperCap1;

    char Estado2 = 'B';
    char Codigo2[20] = "A02";
    char Cidade2[20] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300500000000;
    int PontosTur2 = 30;
    float DensidadePop2 = Populacao2 / Area2;
    float PIBperCap2 = Pib2 / Populacao2;
    float SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTur2 + (1 / DensidadePop2) + PIBperCap2;

    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    // Menu interativo para escolher o primeiro atributo
    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &primeiroAtributo);

    // Comparação do primeiro atributo
    switch (primeiroAtributo) {
        case 1:
            printf("Você escolheu População!\n\n");
            resultado1 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área!\n\n");
            resultado1 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB!\n\n");
            resultado1 = Pib1 > Pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos turísticos!\n\n");
            resultado1 = PontosTur1 > PontosTur2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n\n");
            resultado1 = DensidadePop1 < DensidadePop2 ? 1 : 0; // Menor densidade vence
            break;
        default:
            printf("Opção inválida!\n\n");
            break;
    }

    // Menu interativo para escolher o segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &segundoAtributo);

    // Lógica para o jogador não digitar o mesmo atributo
    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo!\n\n");
    }

    // Comparação do segundo atributo
    switch (segundoAtributo) {
        case 1:
            printf("Você escolheu População!\n\n");
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área!\n\n");
            resultado2 = Area1 > Area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB!\n\n");
            resultado2 = Pib1 > Pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos turísticos!\n\n");
            resultado2 = PontosTur1 > PontosTur2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n\n");
            resultado2 = DensidadePop1 < DensidadePop2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n\n");
            break;
    }

    // Exibir o resultado final
    printf("==== RESULTADO ====\n");
    if (resultado1 + resultado2 == 2)
        printf("A carta 1 (%s) venceu nos dois atributos!\n", Cidade1);
    else if (resultado1 + resultado2 == 0)
        printf("A carta 2 (%s) venceu nos dois atributos!\n", Cidade2);
    else
        printf("Empate, cada cidade venceu um atributo!\n");

    return 0;
}
