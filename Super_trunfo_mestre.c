# include <stdio.h>

// O objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as 
//cartas com informações sobre as cidades. 
int main() {
    // Coleta de informações para carta 1
    char Estado_1[2];
    char Código_1[4];
    char Nome_da_cidade_1[30];
    int habitantes_da_cidade_1; 
    //habitantes_da_cidade_1 em milhares
    int Área_da_cidade_1; 
    //area_da_cidade_1
    float PIB_da_cidade_1; 
    //PIB_da_cidade_1
    float c2;
    int Número_de_pontos_turisticos_da_cidade_1;
    float quocientex; //densidade_populacional_1;
    float qoucientey ;//PIB_per_capita_1

    printf("Defina o nome do país 1 usando uma letra de A a H: ");
    scanf("%1s", Estado_1);
    printf("Defina a letra do país 1 seguida de um número de 01 a 04: ");
    scanf("%3s", Código_1);
    printf("Defina o nome da cidade 1: ");
    scanf("[^\n]", Nome_da_cidade_1);
    printf("Defina o número de habitantes da cidade 1 em milhares: ");
    scanf("%d", &habitantes_da_cidade_1);
    printf("Defina a área da cidade 1 em km²: ");
    scanf("%f", &Área_da_cidade_1);
    printf("Defina o PIB da cidade 1 em milhões de dólares: ");
    scanf("%f", &PIB_da_cidade_1);
    printf("Defina a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &Número_de_pontos_turisticos_da_cidade_1);
    //CALCULAR DENSIDADE POPULACIONAL E PIB PER CAPITA
    float a1 = (float)habitantes_da_cidade_1;
    float b1 = (float)Área_da_cidade_1;   
    float quocientex = a1 / b1;
    printf ("\n densidade populacional da cidade 1 em habitantes por km²: %.2f\n", quocientex);
    float c1 = (float) PIB_da_cidade_1;
    float quocientey = c1 / a1;
    printf ("\n PIB per capita da cidade 1 em dólares: %.2f\n", quocientey);
    //CALCULAR 'SUPER PODER'"Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita 
    float super_poder_1 = habitantes_da_cidade_1 + Área_da_cidade_1 + PIB_da_cidade_1 + Número_de_pontos_turisticos_da_cidade_1 + quocientey;
    //EXIBIR 'SUPER PODER' se menor que quocientex
    printf("\n O Super Poder da carta 1 é: %.2f\n", super_poder_1>quocientex);

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
    scanf(" [^\n]", Nome_da_cidade_2);
    printf("Defina o número de habitantes da cidade 2 em milhares: ");
    scanf("%d", &habitantes_da_cidade_2);
    printf("Defina a área da cidade 2 em km²: ");
    scanf("%f", &Área_da_cidade_2);
    printf("Defina o PIB da cidade 2 em milhões de dólares: ");
    scanf("%f", &PIB_da_cidade_2);
    printf("Defina a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &Número_de_pontos_turisticos_da_cidade_2);
    //CALCULAR DENSIDADE POPULACIONAL E PIB PER CAPITA
    float a2= (float)habitantes_da_cidade_2;
    float b2= (float)Área_da_cidade_2;   
    float quociente1= a2 / b2;
    printf ("\n densidade populacional da cidade 2 em habitantes por km²: %.2f\n", quociente1);
    float a2= habitantes_da_cidade_2;
    float c2= PIB_da_cidade_2;
    float quociente2= c2/a2;
    printf ("\n PIB per capita da cidade 2 em dólares: %.2f\n", quociente2);
   //CALCULAR 'SUPER PODER'"Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita 
    float super_poder_2 = habitantes_da_cidade_2 + Área_da_cidade_2 + PIB_da_cidade_2 + Número_de_pontos_turisticos_da_cidade_2 + quociente1;
    //EXIBIR 'SUPER PODER' se menor que quociente1
    printf("\n O Super Poder da carta 2 é: %.2f\n", super_poder_2>quociente1);

    // comparar os super poderes das duas cartas
    printf("\n--- Carta 1 x Carta 2 ---\n");
    if (habitantes_da_cidade_1 > habitantes_da_cidade_2) {
        printf("Carta 1 tem mais habitantes.\n");
    } else  (habitantes_da_cidade_2 > habitantes_da_cidade_1) {
        printf("Carta 2 tem mais habitantes.\n");
    } 
    if (Área_da_cidade_1 > Área_da_cidade_2){
        printf("Carta 1 tem maior área.\n");
    } else (Área_da_cidade_2 > Área_da_cidade_1) {
        printf("Carta 2 tem maior área.\n");
    } 
    if(Área_da_cidade_1>Área_da_cidade_2){
        printf("Carta 1 tem maior área.\n");
    } else (Área_da_cidade_2>Área_da_cidade_1){
        printf("Carta 2 tem maior área.\n");
    } 
    if( PIB_da_cidade_1>PIB_da_cidade_2){
        printf("Carta 1 tem maior PIB.\n");
    } else (PIB_da_cidade_2>PIB_da_cidade_1){
        printf("Carta 2 tem maior PIB.\n");
    } 
    if(Número_de_pontos_turisticos_da_cidade_1>Número_de_pontos_turisticos_da_cidade_2){
        printf("Carta 1 tem mais pontos turísticos.\n");
    } else (Número_de_pontos_turisticos_da_cidade_2>Número_de_pontos_turisticos_da_cidade_1){
        printf("Carta 2 tem mais pontos turísticos.\n");
    } 
    if (quociente1>quocientex){
        printf("Carta 2 tem maior densidade populacional.\n");
    } else (quocientex>quociente1){
        printf("Carta 1 tem maior densidade populacional.\n");
    } 
    if ( quociente2>quocientey){
        printf("Carta 2 tem maior PIB per capita.\n");
    } else (quocientey>quociente2){
        printf("Carta 1 tem maior PIB per capita.\n");
    } 
  


    return 0;
}
