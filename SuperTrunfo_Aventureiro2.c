#include <stdio.h> 

int main(){
    char nome[50], nome2[20], codigo[6], codigo2 [6]; // Nome para o estado e codigo da cidade
    double PIB, PIB2;  // população da cidade //PIB da cidade 
    unsigned long int populacao, populacao2;
    float area, area2;  // area da cidade //PIB da cidade 
    int turistico, turistico2; // pontos turisticos da cidade
    char estado[5], estado2[5], pais [20], pais2 [20]; 
    float pib_percapita, pib_percapita2; //     pib / população
    float densidade_populacional, densidade_populacional2;   // pupulação / área da cidade
    long double super_poder1, super_poder2;
    int pontuacao = 0, pontuacao2 = 0, comparacao_individual;
    printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
    printf("Siga as instruções abaixo.\n");

    // CADASTRANDO A CARTA 1
    printf("Vamos iniciar o cadastro da carta 1. \n");
    printf("Insira o nome do pais: ");
    scanf(" %[^\n]", pais);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Insira a população: ");
    scanf("%lu", &populacao);

    printf("Insira a área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%lf", &PIB);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turistico);

    printf("Vamos representar o Estado com uma letra (A - H) e um código (01 - 04). \n"); 

    printf("Insira a uma letra (A - H): ");
    scanf("%s", estado);

    printf("Insira o codigo (01 - 04): ");
    scanf("%s", codigo);
        
    // CADASTRANDO A CARTA 2
    printf("Vamos iniciar o cadastro da carta 2. \n");
    printf("Insira o nome do pais: ");
    scanf(" %[^\n]", pais2);

    printf("Insira o nome da cidade: "); 
    scanf(" %[^\n]", nome2);

    printf("Insira a população: ");
    scanf("%lu", &populacao2);

    printf("Insira a área: ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%lf", &PIB2);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turistico2);

    printf("Insira o estado ( A - H ): ");
    scanf("%s", estado2);

    printf("Insira o codigo ( 01 - 04 ): ");
    scanf("%s", codigo2);

    // CALCULANDO AS PROPRIEDADES DA CARTA 1
    pib_percapita = PIB / populacao;
    densidade_populacional =  populacao / area;
    super_poder1 = (float) (populacao + area + turistico + PIB + pib_percapita + (1/ densidade_populacional)); 

    // APRESENTAÇÃO DA CARTA 1
    printf("\nCARTA 1: \n");   
    printf("\tCódigo: %s\n", codigo);
    printf("\tNome da cidade: %s\n", nome);
    printf("\tPopulação: %lu\n", populacao);
    printf("\tÁrea: %.2f km²\n", area);
    printf("\tPIB: %.2lf bilhões\n", PIB);
    printf("\tPontos turisticos: %d\n", turistico);
    printf("\tPIB per capita:R$ %.2f Reais\n", pib_percapita);
    printf("\tDensidade Populacional: %.2f hab/m²\n", densidade_populacional);
    printf("\tSuper poder: %.2Lf\n", super_poder1);

    // CALCULANDO AS PROPRIEDADES DA CARTA 2
    pib_percapita2 = PIB2 / populacao2;
    densidade_populacional2 =  populacao2 / area2;
    super_poder2 = (float) (populacao2 + area2 + PIB2 +  turistico2 + PIB2 + pib_percapita2 + (1/ densidade_populacional2)); 

    // APRESENTAÇÃO DA CARTA 2
    printf("\nAgora vamos a presentação da carta 2.\n");
   
    printf("\nCARTA 2: \n");
    printf("\tCódigo: %s\n", codigo2);
    printf("\tNome da cidade: %s\n", nome2);
    printf("\tPopulação: %.0lu\n", populacao2);
    printf("\tÁrea: %.2f km²\n", area2);
    printf("\tPIB: %.2lf bilhões\n", PIB2);
    printf("\tPontos turisticos: %d\n", turistico2);
    printf("\tPIB per capita:R$ %.2f Reais\n", pib_percapita2);
    printf("\tDensidade Populacional: %.2f hab/m²\n", densidade_populacional2); 
    printf("\tSuper poder: %.2Lf\n", super_poder2);
    
    // COMPARANDO OS ATRIBUTOS...
    printf("\nQuais propriedades das cartas você deseja comparar: \n");
    printf("\n1 - Comparar a população\n");
    printf("2 - Comparar a area\n");
    printf("3 - Comparar o PIB\n");
    printf("4 - Comparar a quantidade de pontos turistico\n");
    printf("5 - Comparar quem tem a menor densidade populacional\n");
    printf("6 - Comparar o Super Poder\n");
    scanf("%d", &comparacao_individual);

    switch (comparacao_individual)
    {
    case 1:
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 1: %s\n", pais);
        printf("Atributo utilizado para comparação: POPULAÇÃO\n");
        printf("População: %.0lu\n", populacao);
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 2: %s\n", pais2);
        printf("População: %.0lu\n", populacao2);
        printf("\t ----------------------------------- || -----------------------------------\n");

        if (populacao > populacao2) {
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if (populacao < populacao2) {
            printf("CARTA VENCEDORA: (CARTA 2).\n");
    
        } else {
            printf("Empate! As duas cidades possuem a mesma população.\n");
        } 
            break;
    case 2:
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 1: %s\n", pais);
        printf("Atributo utilizado para comparação: AREA\n");
        printf("area: %.2f\n", area);
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 2: %s\n", pais2);
        printf("area: %.2f\n", area2);
        printf("\t ----------------------------------- || -----------------------------------\n");
        
        if (area > area2) {
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if (area < area2) {
            printf("CARTA VENCEDORA: (CARTA 2).\n");
            
        } else {
            printf("\nEmpate! As duas cidades possuem a mesma area.\n");
        }
            break;
    case 3:
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 1: %s\n", pais);
        printf("Atributo utilizado para comparação: PIB\n");
        printf("PIB: %.2lf\n", PIB);
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 2: %s\n", pais2);
        printf("PIB: %.2lf\n", PIB2);
        printf("\t ----------------------------------- || -----------------------------------\n");

        if (PIB > PIB2){
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if (PIB < PIB2){
            printf("CARTA VENCEDORA: (CARTA 2).\n");
            
        } else{
            printf("\nEmpate! As duas cidades possuem o mesmo PIB.\n");
        }
            break;
    case 4:
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 1: %s\n", pais);
        printf("Atributo utilizado para comparação: PONTOS TURISTICOS\n");
        printf("turistico: %d\n", turistico);
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 2: %s\n", pais2);
        printf("turistico: %d\n", turistico2);
        printf("\t ----------------------------------- || -----------------------------------\n");

        if(turistico > turistico2){
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if( turistico < turistico2 ){
            printf("CARTA VENCEDORA: (CARTA 2).\n");

        } else {
            printf("\nEmpate! As duas cidades possuem a mesma quantidade de ponto turistico.\n");

        }
        break;
    case 5:
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 1: %s\n", pais);
        printf("Atributo utilizado para comparação: Menor Densidade Populacional\n");
        printf("densidadade populacional: %.2f\n", densidade_populacional);
        printf("\t ----------------------------------- || -----------------------------------\n");
        printf("PAIS DA CARTA 2: %s\n", pais2);
        printf("densidadade populacional: %.2f\n", densidade_populacional2);
        printf("\t ----------------------------------- || -----------------------------------\n");

        if (densidade_populacional < densidade_populacional2){
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if (densidade_populacional > densidade_populacional2){
            printf("CARTA VENCEDORA: (CARTA 2).\n");
 
        } else {
            printf("\nEmpate! As duas cidades possuem a mesma quantidade de densidade populacional.\n");
        }
        break;
    case 6:
    printf("\t ----------------------------------- || -----------------------------------\n");
    printf("PAIS DA CARTA 1: %s\n", pais);
    printf("Atributo utilizado para comparação: SUPER PODER\n");
    printf("Super poder: %.2Lf\n", super_poder1);
    printf("\t ----------------------------------- || -----------------------------------\n");
    printf("PAIS DA CARTA 2: %s\n", pais2);
    printf("Super poder: %.2Lf\n", super_poder2);
    printf("\t ----------------------------------- || -----------------------------------\n");

        if (super_poder1 > super_poder2){
            printf("CARTA VENCEDORA: (CARTA 1).\n");
            
        } else if (super_poder2 < super_poder1){
            printf("CARTA VENCEDORA: (CARTA 2).\n");
            
        } else {
            printf("\nEmpate! As duas cidades possuem a mesma quantidade de super poder.\n");
        }
        break;

    default:
        printf("Opção Incorreta!");
        break;
    }

 return 0;
}
