#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Criança.\n");
    } else if (idade >= 12 && idade <= 17){
        printf("Adolescente.\n");
    } else { 
        printf("adulto.\n");
    }

    return 0;

 }
 
  