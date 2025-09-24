#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Digite sua altura: ");
    scanf("%e", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Nome do aluno: %s - Matrícula do aluno: %d\n", nome, matricula);
    printf("Idade do aluno: %d - Altura do aluno: %.2f", idade, altura);
}