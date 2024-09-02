#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char opcao;
    char nomeProduto[100];
    int quantidade;
    float precoUnitario, valorTotal, somaTotal = 0;

    do {
        printf("Qual o nome do produto: ");
        scanf("%s", nomeProduto);
        printf("Qual a quantidade vendida: ");
        scanf("%i", &quantidade);
        printf("Qual o valor unitario desse produto: ");
        scanf("%f", &precoUnitario);

        valorTotal = quantidade * precoUnitario;
        somaTotal += valorTotal;

        printf("O valor total de vendas foi de: %.2f\n", valorTotal);

        printf("Deseja realizar um outro calculo? (s/n): ");
        scanf(" %c", &opcao);

    } while(opcao == 's');

    printf("O valor total acumulado de todas as vendas foi de: %.2f\n", somaTotal);

    return 0;
}
