# include <stdio.h>

// O objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as 
//cartas com informações sobre as cidades. 
int main() {
    // Coleta de informações para carta 1
    char Estado_1[2];
    char Código_1[4];
    char Nome_da_cidade_1[30];
    int habitantes_da_cidade_1;
    float Área_da_cidade_1;
    float PIB_da_cidade_1;
    int Número_de_pontos_turisticos_da_cidade_1;
    float densidade_populacional_1;
    float PIB_per_capita_1;

    printf("Defina o nome do país 1 usando uma letra de A a H: ");
    scanf("%1s", Estado_1);
    printf("Defina a letra do país 1 seguida de um número de 01 a 04: ");
    scanf("%3s", Código_1);
    printf("Defina o nome da cidade 1: ");
    scanf(" %[^\n]", Nome_da_cidade_1);
    printf("Defina o número de habitantes da cidade 1 em milhares: ");
    scanf("%d", &habitantes_da_cidade_1);
    printf("Defina a área da cidade 1 em km²: ");
    scanf("%f", &Área_da_cidade_1);
    printf("Defina o PIB da cidade 1 em milhões de dólares: ");
    scanf("%f", &PIB_da_cidade_1);
    printf("Defina a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &Número_de_pontos_turisticos_da_cidade_1);
    float a1= habitantes_da_cidade_1;
    float b1= Área_da_cidade_1;   
    float quocientex= a1 / b1;
    printf ("\n densidade populacional da cidade 2 em habitantes por km²: %.2f\n", quocientex);
    float a1= habitantes_da_cidade_1;
    float c1= PIB_da_cidade_1;
    float quocientey= c1/a1;
    printf ("\n PIB per capita da cidade 2 em dólares: %.2f\n", quocientey);

    // Coleta de informações para carta 2
    char Estado_2[2];
    char Código_2[4];
    char Nome_da_cidade_2[30];
    int habitantes_da_cidade_2;
    float Área_da_cidade_2;
    float PIB_da_cidade_2;
    int Número_de_pontos_turisticos_da_cidade_2;
    float densidade_populacional_2;
    float PIB_per_capita_2;

    printf("Defina o nome do país 2 usando uma letra de A a H: ");
    scanf("%1s", Estado_2);
    printf("Defina a letra do país 2 seguida de um número de 01 a 04: ");
    scanf("%3s", Código_2);
    printf("Defina o nome da cidade 2: ");
    scanf(" %[^\n]", Nome_da_cidade_2);
    printf("Defina o número de habitantes da cidade 2 em milhares: ");
    scanf("%d", &habitantes_da_cidade_2);
    printf("Defina a área da cidade 2 em km²: ");
    scanf("%f", &Área_da_cidade_2);
    printf("Defina o PIB da cidade 2 em milhões de dólares: ");
    scanf("%f", &PIB_da_cidade_2);
    printf("Defina a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &Número_de_pontos_turisticos_da_cidade_2);
    float a2= habitantes_da_cidade_2;
    float b2= Área_da_cidade_2;   
    float quociente1= a2 / b2;
    printf ("\n densidade populacional da cidade 2 em habitantes por km²: %.2f\n", quociente1);
    float a2= habitantes_da_cidade_2;
    float c2= PIB_da_cidade_2;
    float quociente2= c2/a2;
    printf ("\n PIB per capita da cidade 2 em dólares: %.2f\n", quociente2);
   

    // Exibir os dados coletados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado_1);
    printf("Código: %s\n", Código_1);
    printf("Cidade: %s\n", Nome_da_cidade_1);
    printf("Habitantes (milhares): %d\n", habitantes_da_cidade_1);
    printf("Área (km²): %.2f\n", Área_da_cidade_1);
    printf("PIB (milhões de dólares): %.2f\n", PIB_da_cidade_1);
    printf("Pontos turísticos: %d\n", Número_de_pontos_turisticos_da_cidade_1);
    printf ("Densidade populacional da cidade 1 em habitantes por km²: %.2f",quociente1);
    printf ("PIB per capita da cidade 1 em dólares: %.2f", quociente2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado_2);
    printf("Código: %s\n", Código_2);
    printf("Cidade: %s\n", Nome_da_cidade_2);
    printf("Habitantes (milhares): %d\n", habitantes_da_cidade_2);
    printf("Área (km²): %.2f\n", Área_da_cidade_2);
    printf("PIB (milhões de dólares): %.2f\n", PIB_da_cidade_2);
    printf("Pontos turísticos: %d\n", Número_de_pontos_turisticos_da_cidade_2);
    printf ("Densidade populacional da cidade 2 em habitantes por km²: %.2f",quociente1);
    printf ("PIB per capita da cidade 2 em dólares: %.2f", quociente2);    


    return 0;
}
