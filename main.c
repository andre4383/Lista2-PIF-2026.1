#include <stdio.h>
//Aluno: André Guilherme Montenegro de Oliveira Santos
// Aluno: Lucas Gabriel Cardoso Souza
// Aluno: Afonso Henrique Martins de Araujo

void lerDados(int *opcao, float *n1, float *n2) {
    printf("\nDigite a nota 1: ");
    scanf("%f", n1);
    printf("Digite a nota 2: ");
    scanf("%f", n2);

    printf("\n--- MENU ---"
           "\n1- Calcular media"
           "\n2- Classificar status"
           "\n3- Exibir relatorio"
           "\nDigite aqui: ");
    scanf("%d", opcao);
}

float calculoMedia(float n1, float n2) {
    return (n1 + n2) / 2;
}

int main(void) {
    float nota1 = 0, nota2 = 0;
    int opcao;
    char escolha;

    do {
        lerDados(&opcao, &nota1, &nota2);

        float media = calculoMedia(nota1, nota2);

        switch(opcao) {
            case 1:
                printf("\nSua media e: %.2f\n", media);
                break;
            case 2:
                if (media >= 7) printf("\nAprovado!\n");
                else printf("\nReprovado!\n");
                break;
            case 3:
                printf("\n--- RELATORIO ---");
                printf("\nNota 1: %.2f | Nota 2: %.2f", nota1, nota2);
                printf("\nMedia: %.2f", media);
                printf("\nStatus: %s\n", (media >= 7 ? "Aprovado" : "Reprovado"));
                break;
            default:
                printf("\nOpcao invalida!\n");
        }

        printf("\nDeseja realizar outra operacao? (s/n): ");
        scanf(" %c", &escolha);

    } while (escolha == 's' || escolha == 'S');

    printf("\nPrograma encerrado.\n");
    return 0;
}