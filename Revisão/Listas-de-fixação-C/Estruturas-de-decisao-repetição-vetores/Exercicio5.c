/*Crie um programa que leia 6 valores inteiros do teclado e armazene-os em um vetor. Em
seguida, mostre na tela os mesmos valores lidos multiplicados pela posição em que estavam
armazenados no vetor.*/

#include <stdio.h>

int main(){
    int vetor[6];
    int posicao[6] = {0,1,2,3,4,5};
    for(int i = 0 ; i < 6; i++){
        printf("Digite um numero para entrar no vetor na posicao do vetor: %d \n",i);
        scanf("%d",&vetor[i]);
    }

    for(int i = 0 ; i < 6; i++){
        printf("Os numeros digitados no vetor na posicao %d sao: %d \n",i,vetor[i]);
    }

    int valorMultiplicado[6] = {vetor[0] *posicao[0] ,vetor[1]*posicao[1],vetor[2]*posicao[2],vetor[3]*posicao[3],vetor[4]*posicao[4],vetor[5]*posicao[5]};
    for(int i = 0 ; i < 6; i++){
        printf("Os numeros digitados multiplicados pela posicao %d agora sao: %d \n",i,valorMultiplicado[i]);
    }

}