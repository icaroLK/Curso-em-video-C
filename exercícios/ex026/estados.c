#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Em que estado do Brasil você nasceu? ");
    char est[30];
    gets(est);
    printf("Quem nasceu em %s é Paulista", est);
    if(est=="SP") printf("Quem nasceu em %s é Paulista", est);


}
