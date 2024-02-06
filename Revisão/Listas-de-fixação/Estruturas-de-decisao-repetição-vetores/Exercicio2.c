/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um
funcionário, calcule e mostre a quantidade de salários mínimos que ganha esse funcionário. Caso
o funcionário receba menos que 1 salário mínimo deverá ser apresentado a mensagem
“Funcionário ganha menos que um salário mínimo”.*/

#include <stdio.h>
#include<stdlib.h>

int main(){

float salarioMinimo,salarioFinal,salarioFuncionario;

printf("Qual e o valor em reais de um salario minino ?\n");
scanf("%f",&salarioMinimo);
printf("Quantos reais seu funcionario recebe ?\n");
scanf("%f",&salarioFuncionario);
salarioFinal = (salarioFuncionario/salarioMinimo);

    if(salarioFinal > salarioMinimo){
    printf("O funcionario recebe menos de um salario minino. \n");
    }else{
        printf("O funcionario recebe %.2f salarios minimos.",salarioFinal);
     }


}