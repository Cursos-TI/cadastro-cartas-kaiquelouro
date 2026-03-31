#include <stdio.h>
#include <string.h>

int main(){

    char estado1, estado2; 
    char nomeCidade1[50], nomeCidade2[50];
    char codigoCarta1[10], codigoCarta2[10];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float areaKm1, areaKm2, pib1, pib2;
    
    //CARTA NUMERO 1

    printf("Informe os dados da Carta 1\n");

    printf("Digite o Estado: "); //PEDE AO USUARIO QUAL O ESTADO ELE QUER
    scanf(" %c", &estado1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o Código da Carta: ");   //PEDE AO USUARIO QUAL O CODIGO DA CARTA
    scanf(" %s", codigoCarta1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o nome da cidade: "); //PEDE AO USUARIO QUAL O NOME DA CIDADE ELE QUER
    scanf(" %[^\n]", nomeCidade1); // GUARDA O QUE O USARIO ESCREVE e O COMANDO SERVE PARA LER TODA LINHA INCLUINDO ESPAÇOS

    printf("Digite o tamanho da População: "); //PEDE AO USUARIO O TAMANHO DA POPULAÇÃO
    scanf("%d", &populacao1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite a Area em KM: "); //PEDE PARA O USUARIO COLOCAR A AREA EM KM
    scanf("%f", &areaKm1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o PIB (Em Bilhões de Reais): "); //PEDE AO USUARIO O PIB 
    scanf("%f", &pib1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o numero de pontos turisticos: "); //PEDE AO USUARIO O NUMERO DE PONTOS TURISTICOS
    scanf("%d", &pontosTuristicos1);

     printf("\n");

    //CARTA NUMERO 2

    printf("Agora informe os dados da Carta 2\n");

    printf("Digite o Estado: "); 
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: ");   
    scanf(" %s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite o tamanho da População: "); 
    scanf("%d", &populacao2);

    printf("Digite a Area em KM: "); 
    scanf("%f", &areaKm2);

    printf("Digite o PIB (Em Bilhões de Reais): ");  
    scanf("%f", &pib2);  

    printf("Digite o numero de pontos turisticos: "); 
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    //IMPRIMINDO O RESULTADO

    printf("CARTA 1 \n");  
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", areaKm1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("CARTA 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}