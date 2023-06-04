#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    float res;
    unsigned int op;
    printf("Insira um número: ");
    fflush(stdin);
    scanf("%i", &num);
    if (num>0){
        res = (float)1/num;
        printf("O inverso de %i é igual a %.2f", num, res);
    }else{
        op = (unsigned int)num;
        printf("O oposto de %i é igual a %u",num, op);
    }


}
