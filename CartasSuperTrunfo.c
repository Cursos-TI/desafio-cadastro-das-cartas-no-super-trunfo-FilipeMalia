#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}


#include   <stdio.h>
 int main (){


 char Estado_1[3], Codigo_da_carta_1[5], Cidade_1[20];
 int Populacao_1;
 float area_1, pib_1;
 int pontos_turisticos_1;
 
 
 printf("entre com os dados da primeira carta \n");
 
 
 printf("digite o Estado: \n");
 scanf("%s", &Estado_1);
 
 printf("digite o Código da carta:(sigla do estado adicionada do valor 1 ao 4) \n");
 scanf("%s", &Codigo_da_carta_1);
 
 printf("digite a Cidade: \n");
 scanf("%s", &Cidade_1);
 
 printf("digite a População: \n   ");
 scanf("%d", &Populacao_1);
 
 printf("digite a Área: \n");
 scanf("%f", &area_1);
 
 printf("digite o PIB: \n");
 scanf("%f", &pib_1);
 
 printf("digite os Pontos Turísticos: \n");
 scanf("%d", &pontos_turisticos_1);
 
 
 
 printf("Carta 1: \n");
 printf("Estado: %s \n", Estado_1);
 printf("Número da carta: %s \n", Codigo_da_carta_1); 
 printf("Cidade: %s \n", Cidade_1);
 printf("Populacão: %d \n", Populacao_1);
 printf("Área: %f \n", area_1);
 printf("PIB: %f \n", pib_1);
 printf("pontos_Turisticos_1: %d\n", pontos_turisticos_1);
 
 
 char Estado_2[3], Codigo_da_carta_2[5], Cidade_2[20];
 int Populacao_2;
 float area_2, pib_2;
 int pontos_turisticos_2;
 
 
 printf("Agora entre com os dados da sengunda carta \n");
 
 printf("digite o Estado: \n");
 scanf("%s", &Estado_2);      
 
 printf("digite o Código da carta:(sigla do estado adicionada do valor 1 ao 4)  \n");
 scanf("%s", &Codigo_da_carta_2);
 
 printf("digite a Cidade: \n");
 scanf("%s", &Cidade_2);
 
 printf("digite a População: \n");
 scanf("%d", &Populacao_2);
 
 printf("digite a Área: \n");
 scanf("%f", &area_2);
 
 printf("digite o PIB: \n");
 scanf("%f", &pib_2);
 
 printf("digite os Pontos Turísticos: \n");
 scanf("%d", &pontos_turisticos_2);
 
 
 printf("Carta 2: \n");
 printf("Estado: %s \n", Estado_2);
 printf("Número da carta: %s \n", Codigo_da_carta_2); 
 printf("Cidade: %s \n", Cidade_2);
 printf("População: %d \n", Populacao_2);
 printf("Área: %f \n", area_2);
 printf("PIB: %f \n", pib_2);
 printf("pontos_Turisticos_2: %d\n", pontos_turisticos_2);
 }
 