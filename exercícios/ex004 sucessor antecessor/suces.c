#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um n�mero: ");
    scanf("%i", &num);

    printf("O n�mero digitado foi: %i", num);

}
