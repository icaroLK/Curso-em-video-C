#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    int opc;

    while (1){
        printf("\n1 - Vari�ncia de jovens adultos de 25 a 39 anos de idade");
        printf("\n2 - Desvio padr�o de adultos de 40 a 59 anos de idade");
        printf("\n3 - O menor n�mero de pessoas por munic�pio dentro da faixa de dosos acima de 60 anos");
        printf("\n4 - A m�dia da quantidade de pessoas dos 5 munic�pios com os maiores n�meros de pessoas dentro da faixa de crian�as at� 9 anos");
        printf("\n5 - Encerrar o programa");
        printf("\nSua op��o: ");
        scanf("%i", &opc);

        if(opc == 1) printf("Chama func 1");
        else if (opc == 2) printf("Chama func 2");
        else if (opc == 3) printf("Chama func 3");
        else if (opc == 4) printf("Chama func 4");
        else if (opc == 5) break;
        else printf("Dado inv�lido, tente novamente");

    }











return 0;
}
