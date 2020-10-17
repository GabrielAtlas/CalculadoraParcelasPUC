#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    //setlocale(LC_NUMERIC, "pt_BR");
    float valorEmprestimo = 1000;
    float parcelasAmount;
    float percentageAmount;
    parcelasAmount = 1;
    percentageAmount = 1.0;
    scanf("%f", &valorEmprestimo);
    //printf("Valor digitado: %f", valorEmprestimo);
    if(valorEmprestimo < 1000){
       printf("O valor do emprestimo deve ser > R$ 1000,00");
       return 0;
    }
    scanf("%f", &parcelasAmount); // atribuindo valor a variavel parcelasAmount
    if(parcelasAmount < 10 || parcelasAmount > 360){
        printf("A quantidade de parcelas estar entre 10 e 360.");
        return 0;
    }
    scanf("%f", &percentageAmount); // atribuindo valor a variavel percentageAmount
    if(percentageAmount < 0){
        printf("A taxa de juros deve ser positiva.");
        return 0;
    }
    float valorTotal = 0;
    for(int i = 0; i < parcelasAmount; i++){
     float valorParcela = valorEmprestimo/parcelasAmount + (valorEmprestimo-valorEmprestimo/parcelasAmount*i) * percentageAmount/100;
     valorTotal += valorParcela;
     int n = i+1;
     printf("Parcela %d - R$ %.2f\n", n, valorParcela);
   }
   printf("Valor total pago R$ %.2f", valorTotal);

    return 0;
}
