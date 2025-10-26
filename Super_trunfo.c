# include <stdio.h>

// O objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as 
//cartas com informações sobre as cidades. 
int main ();{
    //Coleta de informações para carta 01
    printf("\nDefina o nome do país 1 usando uma letra de A a H:\n ");
    scanf ("estado_1:");
    printf("\nDefina a letra do país 1 seguida de um número de 01 a 04: \n");
    scanf("código_1");
    printf("\nDefina o nome da cidade 1:\n");
    scanf("nome_da_cidade_1");
    printf("\nDefina o número de habitantes da cidade 1 em milhares:\n");
    scanf("habitantes_da_cidade_1");
    printf("\nDefina a área da cidade 1 em km²: \n");
    scanf("área_da_cidade_1");
    printf("\nDefina o PIB da cidade 1 em milhões de dólares: \n");
    scanf("pib_da_cidade_1");
    printf("\nDefina a quantidade de pontos turísticos da cidade 1: \n");
    scanf("número_de_pontos_turisticos_da_cidade_1");

     // Declaração da estrutura de informações para carta 1
    char estado_1 [2];
    char código_1 [4];
    char nome_da_cidade_1[30];
    int habitantes_da_cidade_1;
    float área_da_cidade_1;
    float pib_da_cidade_1;
    int número_de_pontos_turisticos_da_cidade_1;

    // Coleta de informações para carta 2
    
    printf("\nDefina o nome do país 2 usando uma letra de A a H: \n");
    scanf("Estado_2");
    printf("\nDefina a letra do país 2 seguida de um número de 01 a 04: \n");
    scanf("Código_2");
    printf("\nDefina o nome da cidade 2: \n");
    scanf(" Nome_da_cidade_2");
    printf("\nDefina o número de habitantes da cidade 2 em milhares: \n");
    scanf("habitantes_da_cidade_2");
    printf("\nDefina a área da cidade 2 em km²: \n");
    scanf("Área_da_cidade_2");
    printf("\nDefina o PIB da cidade 2 em milhões de dólares: \n");
    scanf("PIB_da_cidade_2");
    printf("\nDefina a quantidade de pontos turísticos da cidade 2: \n");
    scanf("Número_de_pontos_turisticos_da_cidade_2");

  // Declaração da estrutura de informações para carta 1
    char Estado_2[2];
    char Código_2[4];
    char Nome_da_cidade_2[30];
    int habitantes_da_cidade_2;
    float Área_da_cidade_2;
    float PIB_da_cidade_2;
    int Número_de_pontos_turisticos_da_cidade_2;

    // Exibir os dados coletados
    printf("\n--- Carta 1 ---\n");
    printf("\nEstado_1\n");
    printf("\nCódigo_1\n");
    printf("\nNome_da_cidade_1\n");
    printf("\nhabitantes_da_cidade_1\n");
    printf("\nÁrea_da_cidade_1\n");
    printf("\nPIB_da_cidade_1\n");
    printf("\nNúmero_de_pontos_turisticos_da_cidade_1\n");

    printf("\n--- Carta 2 ---\n");
    printf("\nEstado_2\n");
    printf("\nCódigo_2\n");
    printf("\nNome_da_cidade_2\n");
    printf("\nhabitantes_da_cidade_2\n");
    printf("\nÁrea_da_cidade_2\n");
    printf(" \nPIB_da_cidade_2\n");
    printf("\nNúmero_de_pontos_turisticos_da_cidade_2\n");

    return 0;

}
