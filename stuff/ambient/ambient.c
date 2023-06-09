#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");



    int mat[][4] = {
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
};

    float qtd = sizeof(mat) / sizeof(mat[0]);
    printf("A quantidade é %f", qtd);

    float som = 0;
    int max = 399;
    int amostral[399] = {0};
    int tamanho = 0;

    for(int i = 0; i < qtd; i++){
        amostral[tamanho] = mat[i][1];
        tamanho++;
    }


    printf("\n\n");
    for (int c = 0; c < tamanho; c++) {
        printf("%i ", amostral[c]);
    }




return 0;
}
