#include <stdio.h>

struct endereco {
    char bairro[100];
    char cidade[100]; 
    char estado[2];
    char rua[100];
    char cep[10];
};


struct cadastro{
    char sexo[2];
    char nome[100];
    char estadoCivil[50];
    int idade;
    int cpf;
    int identidade;
    int telefone;
    float salario;
    struct endereco Endereco;
};



int main()
{
    
    struct cadastro Cadastro;
    
    printf("Digite o nome da rua:\n");
    scanf("%s",Cadastro.Endereco.rua);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    printf("Voce mora na rua %s",Cadastro.Endereco.rua);

    return 0;
}
