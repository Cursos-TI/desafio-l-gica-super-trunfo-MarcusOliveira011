#include <stdio.h>

int main(){

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

    // DADOS CARTA 1

    printf("\nEstado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", Populacao1 / Area1);
    printf("PIB per Capita: %.2f reais\n", PIBperCap1);
    printf("Super Poder: %.2lf\n\n", SuperPoder2);
    
    // DADOS CARTA 2

    printf("\nEstado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", PontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCap2);
    printf("Super Poder: %.2lf\n\n", SuperPoder2);

    //* Comparação da População das cartas.

    printf("Comparação do Atributo: População\n\n");

    if (Populacao1 > Populacao2){
        printf("Carta 1 (São Paulo) venceu!\n");
    } else {
        printf("Carta 2 (Rio de Janeiro) venceu!");       
    }

    return 0;

}