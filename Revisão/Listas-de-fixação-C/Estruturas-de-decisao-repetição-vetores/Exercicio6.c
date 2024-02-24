/*Definir a estrutura  para definir os campos com os tipos básicos necessários*/

struct Endereco
{
    int cep;
    char cidade[100];
    char bairro[50];
    char rua[50];
    char estado[50];
};

struct Cadastro
{
    char nome[100];
    char estadoCivil[50];
    char sexo[20];
    int cpf;
    int idade;
    float salario;
    struct Endereco endereco1;
};


int main(){

    struct Cadastro cadastro1;
    
    printf("Digite o nome da pessoa \n");
    scanf("%s",cadastro1.nome);
    printf("O nome da pessoa que foi digitada e : %s",cadastro1.nome);
}