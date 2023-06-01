#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    printf("Nome: ");
    char nome1[30];
    gets(nome1);
    printf("Sexo [M/F]: ");
    char sex1;
    sex1 = getchar();
    fflush(stdin);
    printf("Nota: ");
    float nota1;
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa:\n");
    printf("-------------------------------\n");
    fflush(stdin);
    printf("Nome: ");
    char nome2[30];
    gets(nome2);
    printf("Sexo [M/F]: ");
    char sex2;
    sex2 = getchar();
    printf("Nota: ");
    float nota2;
    scanf("%f", &nota2);
    fflush(stdin);

    printf("\nCadastrando a terceira pessoa:\n");
    printf("-----------------------------\n");
    fflush(stdin);
    printf("Nome: ");
    char nome3[30];
    gets(nome3);
    printf("Sexo [M/F]: ");
    char sex3;
    sex3 = getchar();
    printf("Nota: ");
    float nota3;
    scanf("%f", &nota3);


    printf("\n-----------------------------\n");
    printf("NOME\t\tSexo\tNota\n");
    printf("%s\t\t%4c\t%.2f\n", nome1, sex1, nota1);
    printf("%s\t\t%4c\t%5.2f\n", nome2, sex2, nota2);
    printf("%s\t\t%4c\t%5.2f\n", nome3, sex3, nota3);
    printf("-----------------------------\n\n\n");



}
