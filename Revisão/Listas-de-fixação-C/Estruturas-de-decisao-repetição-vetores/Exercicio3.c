/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3). Calcule o valor das notas com
base em seus pesos e além de apresentar a média, exiba a maior nota entre as 3 notas, ou a
mensagem “As 3 notas são iguais”, ou “As notas 1 e 2 são as maiores”, “As notas 1 e 3 são as
maiores”, “As notas 2 e 3 são as maiores” caso exista duas notas iguais e elas sejam as maiores.*/

#include <stdio.h>

int main() {
    float notas[3];
    float pesos[3] = {1, 2, 3};

    for(int i = 0; i < 3; i++) {
        printf("Digite a nota %d do aluno\n", i);
        scanf("%f", &notas[i]);
    }

    float notasPesos[3] = {notas[0] * pesos[0], notas[1] * pesos[1], notas[2]*pesos[2]};
    printf("O produto das notas pelos pesos:\n");
    for(int i = 0; i < 3; i++) {
        printf("%.2f\n", notasPesos[i]);
    }
    
    float mediaPonderada, somaPesos;
    somaPesos = pesos[0] + pesos[1] + pesos[2];
    printf("A soma dos pesos e :%.2f\n",somaPesos);
    mediaPonderada = (notasPesos[0] + notasPesos[1] + notasPesos[2])/somaPesos;
    printf("A media ponderada e : %.2f\n",mediaPonderada);
    
    if(notasPesos[0] > notasPesos[1] && notasPesos[0] > notasPesos[2]){
        printf("A nota 1 (%.2f) e a maior nota apos o peso (%.2f)",notas[0],notasPesos[0]);
    }else if(notasPesos[1] > notasPesos[0] && notasPesos[1] > notasPesos[2]){
        printf("A nota 2 (%.2f) e a maior nota apos o peso (%.2f)",notas[1],notasPesos[1]);
     }else if(notasPesos[2] > notasPesos[0] && notasPesos[2] > notasPesos[1]){
        printf("A nota 3 (%.2f) e a maior nota apos o peso (%.2f)",notas[2],notasPesos[2]);
      }else if(notasPesos[0] == notasPesos[1]  && notasPesos[0] > notasPesos[2]){
         printf(" A nota 1 (%.2f) e a nota 2 (%.2f) foram as maiores notas apos o calculo do peso ",notasPesos[0],notasPesos[1]);
       }else if(notasPesos[2] == notasPesos[1]  && notasPesos[2] > notasPesos[0]){
          printf(" A nota 2 (%.2f) e a nota 3 (%.2f) foram as maiores notas apos o calculo do peso ",notasPesos[1],notasPesos[2]);
        }else if(notasPesos[0]== notasPesos[2]  && notasPesos[0] > notasPesos[1]){
          printf(" A nota 1 (%.2f) e a nota 3 (%.2f) foram as maiores notas apos o calculo do peso ",notasPesos[0],notasPesos[2]);
         }else{
           printf("As 3 notas sao iguais");
          }
    return 0;
}