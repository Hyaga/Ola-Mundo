/* Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O
programa deve executar os seguintes passos:
(a) Atribua diretamente no vetor os seguintes valores: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variável inteira (simples) a soma entre os valores das posições: A[0], A[1]
e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/


#include <stdio.h>
int main (){
int A[6] = {1,0,5,-2,-5,7};
int soma = A[0] + A[1] + A[5];
printf("O vetor A possui os seguintes valores em suas posicoes\n");
    for(int i = 0; i <6; i++){
        printf("Na posicao %d o valor e de %d\n",i,A[i]);
    }
printf("A soma do vetor na posicao 0,1 e 5 e de : %d\n",soma);
printf("Atualmente no vetor A a posicao 4 e vale: %d \n",A[4]);
A[4] = 100;
printf("Agora no vetor A a posicao 4 e vale %d :\n",A[4]);

    for(int i = 0; i <6; i++){
        printf("Agora com essa mudanca os valores do vetor A na posicao %d sao de %d\n",i,A[i]);
    }
}