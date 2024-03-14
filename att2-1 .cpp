#include <stdio.h>
#include <string.h>

// Defini��o da estrutura para representar um cliente
struct Cliente {
    char nome[50];
    int idade;
    char endereco[100];
};

// Fun��o para cadastrar um cliente
void cadastrarCliente(struct Cliente clientes[], int *totalClientes) {
    if (*totalClientes >= 50) {
        printf("Limite de clientes atingido.\n");
        return;
    }

    struct Cliente novoCliente;
    printf("Cadastro de Cliente:\n");
    printf("Nome: ");
    scanf("%s", novoCliente.nome);
    printf("Idade: ");
    scanf("%d", &novoCliente.idade);
    printf("Endereco: ");
    scanf("%s", novoCliente.endereco);

    clientes[*totalClientes] = novoCliente;
    (*totalClientes)++;
    printf("Cliente cadastrado com sucesso!\n");
}

// Fun��o para listar todos os clientes cadastrados
void listarClientes(struct Cliente clientes[], int totalClientes) {
    if (totalClientes == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    printf("Lista de Clientes:\n");
    printf("%-20s %-10s %-30s\n", "Nome", "Idade", "Endereco");
    for (int i = 0; i < totalClientes; i++) {
        printf("%-20s %-10d %-30s\n", clientes[i].nome, clientes[i].idade, clientes[i].endereco);
    }
}

int main() {
    struct Cliente clientes[50]; // Array para armazenar os clientes
    int totalClientes = 0; // Vari�vel para rastrear o total de clientes cadastrados

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Listar Clientes\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCliente(clientes, &totalClientes);
                break;
            case 2:
                listarClientes(clientes, totalClientes);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
