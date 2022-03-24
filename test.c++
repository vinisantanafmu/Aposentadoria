#include <stdio.h>

int idade, contrat;

int main() {

    printf("Bem vindo ao Digital Human Resources!\n\\n");
    printf("Para requisitar sua aposentadoria responda o questionário abaixo\n");
    printf("É necessário cumprir pelo menos um dos requisitos:\n\n");

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("\n\nDigite o ano de contrat: \n");
    scanf("%d", &contrat);

    if (idade >= 65 || contrat >= 30 || idade >= 60 && contrat <= 25) {

        printf("Seu pedido será processado!\n");

    }
    else {
        
        printf("Infelizmente voce ainda nao cumpri os requisitos :(\n");
        printf("Mas como bonus voce ganhará 1 porcento de aumento!!!\n\n");
        
    }
    
    printf("As empresas B.I.L.U agradecem!");
    
    getchar();
    return 0;

}
