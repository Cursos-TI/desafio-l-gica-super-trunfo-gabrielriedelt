#include <stdio.h>

int main(){


    /*Informações da carta 1*/
    char estado1[20] = "SP";
    char codigodacarta1[20] = "A01";
    char cidade1[6] = "SP";
    float populacao1 = 11.895578;
    int pontosturisticos1 = 37;
    float area1 = 1.521;
    float pib1 = 3.5;
    char carta1[20] = "Carta 1";
    float densidade1 = populacao1 / area1;
    float pibpercarpita1 = pib1 / populacao1;

    /*Informações da carta 2*/
    char estado2[20] = "PE";
    char codigodacarta2[20] = "A02";
    char cidade2[6] = "REC";
    float populacao2 = 1.587707;
    int pontosturisticos2 = 30;
    float area2 = 218.8;
    float pib2 =  54.970;
    char carta2[20] = "Carta 2";
    float densidade2 = populacao2 / area2;
    float pibpercarpita2 = pib2 / populacao2;
    

    /*Carta 1*/
    printf("%s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Densidade: %.2f\n", populacao1 / area1);
    printf("Pibpercarpita: %.2f\n", pib1 / populacao1);
    printf("\n");


    /*Carta 2*/
    printf("%s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Densidade: %.2f\n", populacao2 / area2);
    printf("Pibpercarpita: %.2f\n", pib2 / populacao2);



    printf("Comparação de cartas entre populações\n");
    printf("Carta 1 - SP: 11.895578\n");
    printf("Carta 2 - Recife: 1.587707\n");


    if (populacao1 > populacao2)
    {
        printf("Resultado: São Paulo venceu!");
    }
    else
    {
        printf("Resultado: Recife venceu!");
    }
    
    
    
    
    return 0;



}