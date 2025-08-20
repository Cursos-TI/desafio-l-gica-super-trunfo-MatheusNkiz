#include <stdio.h>

int main (){
   // declara as variaveis 
   char carta1, carta2;
   char codigo1 [5], codigo2 [5];
   char nome1 [16], nome2[16];
   int populacao1, populacao2, pontosTuri1, pontosTuri2;
   float area1, area2, pib1, pib2, densidadePopu1, densidadePopu2, pibPERCapta1, pibPERCapta2;

   //entrada de dados da primeira carta
   printf("Vamos cadastar sua primeira carta\nDigite a letra representativa do estado de A a H:\n");
   scanf(" %c", &carta1);

   printf("Digite o código da carta\na letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
   scanf(" %4s", codigo1);

   printf("Digite o nome da cidade:\n");
   getchar();
   fgets(nome1, 16, stdin);

   printf("Digite a população da cidade:\n");
   scanf("%d", &populacao1);
   
   printf("Digite a área (em km²):\n");
   scanf("%f", &area1);

   printf("Digite o PIB:\n");
   scanf("%f", &pib1);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &pontosTuri1);

   // entrada de dados da segunda carta
   printf("Vamos cadastar sua segunda carta\nDigite a letra representativa do estado de A a H:\n");
   scanf(" %c", &carta2);

   printf("Digite o código da carta\na letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
   scanf(" %4s", codigo2);

   printf("Digite o nome da cidade:\n");
   getchar();
   fgets(nome2, 16, stdin);

   printf("Digite a população da cidade:\n");
   scanf("%d", &populacao2);
   
   printf("Digite a área (em km²):\n");
   scanf("%f", &area2);

   printf("Digite o PIB:\n");
   scanf("%f", &pib2);

   printf("Digite o número de pontos turísticos:\n");
   scanf("%d", &pontosTuri2);
  
   // faz os calculos de densidade populacional e pib per capita da carta 1
    
   densidadePopu1 = populacao1 / area1;
   pibPERCapta1 = pib1 / populacao1;

   // faz os calculos de densidade populacional e pib per capita da carta 2

   densidadePopu2 = populacao2 / area2;
   pibPERCapta2 = pib2 / populacao2;


  // exibiçao dos dados das cartas

  //carta 1
  printf("Carta 1: %s\n", nome1);
  printf("Estado:%c\n", carta1);
  printf("Codígo:%4s\n", codigo1);
  printf("População:%d\n", populacao1);
  printf("Área:%0.2f km²\n", area1);
  printf("PIB:%0.3f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos:%d\n", pontosTuri1);
  printf("PIB per capita:%0.2f reais\n", pibPERCapta1);
  printf("Densidade populacional:%0.2f hab/km²\n\n", densidadePopu1);

  //carta 2
  printf("Carta 2: %s\n", nome2);
  printf("Estado:%c\n", carta2);
  printf("Codígo:%4s\n", codigo2);
  printf("População:%d\n", populacao2);
  printf("Área:%0.2f km²\n", area2);
  printf("PIB:%0.3f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos:%d\n", pontosTuri2);
  printf("PIB per capita:%0.2f reais\n", pibPERCapta2);
  printf("Densidade populacional:%0.2f hab/km²\n\n", densidadePopu2);

  // compara os atributos de população e exibe o vencedor! 
    printf("População de %s:%d\n", nome1, populacao1);
    printf("População de %s:%d\n", nome2, populacao2);

  if (populacao1 > populacao2)
  {
    printf("Carta 1 venceu em população!\n");
  } else {
    printf("Carta 1 venceu em população!\n");
  }
  






return 0;
}