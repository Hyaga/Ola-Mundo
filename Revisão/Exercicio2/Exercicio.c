#include <stdio.h>

struct alunos{
char nome[100];
int matricula;
float notaProva1,notaProva2,notaProva3;

};

float calcularMedia(struct alunos Alunos) {
    return (Alunos.notaProva1 + Alunos.notaProva2 + Alunos.notaProva3) / 3.0;
}

int main(){

    struct alunos Alunos[5];
    int indiceMaiorNota = 0;
    float maiorMedia = calcularMedia(Alunos[0]);
    float menorMedia = calcularMedia(Alunos[0]);
    int indiceMaiorMedia = 0;
    int indiceMenorMedia = 0;

    // Entrada de dados para cada aluno
    for (int i = 0; i < 5; i++) {
        printf("Informe os dados do aluno %d:\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &Alunos[i].matricula);

        printf("Nome: ");
        scanf("%s", Alunos[i].nome);  
        printf("Nota da primeira prova: ");
        scanf("%f", &Alunos[i].notaProva1);

        printf("Nota da segunda prova: ");
        scanf("%f", &Alunos[i].notaProva2);

        printf("Nota da terceira prova: ");
        scanf("%f", &Alunos[i].notaProva3);

        printf("Média: %.2f\n", calcularMedia(Alunos[i]));

        printf("\n");
    }

    
    for (int i = 1; i < 5; i++) {
        float media = calcularMedia(Alunos[i]);

            if (Alunos[i].notaProva1 + Alunos[i].notaProva2 + Alunos[i].notaProva3 >
                Alunos[indiceMaiorNota].notaProva1 + Alunos[indiceMaiorNota].notaProva2 + Alunos[indiceMaiorNota].notaProva3) {
                indiceMaiorNota = i;
            }

            // Atualizando a maior média
            if (media > maiorMedia) {
                maiorMedia = media;
                indiceMaiorMedia = i;
            }

            // Atualizando a menor média
            if (media < menorMedia) {
                menorMedia = media;
                indiceMenorMedia = i;
            }
    
    }

    printf("Dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i);
        printf("Matricula: %d\n", Alunos[i].matricula);
        printf("Nome: %s\n", Alunos[i].nome);
        printf("Nota da primeira prova: %.2f\n", Alunos[i].notaProva1);
        printf("Nota da segunda prova: %.2f\n", Alunos[i].notaProva2);
        printf("Nota da terceira prova: %.2f\n", Alunos[i].notaProva3);
        printf("Aluno com a maior nota:\n");
        printf("Matricula: %d\n Nome: %s\n Nota total: %.2f\n", Alunos[indiceMaiorNota].matricula,Alunos[indiceMaiorNota].nome, Alunos[indiceMaiorNota].notaProva1 + Alunos[indiceMaiorNota].notaProva2 + Alunos[indiceMaiorNota].notaProva3);
        printf("Aluno com a maior media:\n");
        printf("Matricula: %d\n Nome: %s\n Media: %.2f\n", Alunos[indiceMaiorMedia].matricula, Alunos[indiceMaiorMedia].nome,maiorMedia);
        printf("Aluno com a menor média:\n");
        printf("Matricula: %d\n Nome: %s\n Media: %.2f\n", Alunos[indiceMenorMedia].matricula, Alunos[indiceMenorMedia].nome, menorMedia);

    }

    return 0;
}