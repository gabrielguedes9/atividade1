#include<stdio.h>
#include<string.h>

struct livro {

 char nome[100], autor[100];
 int pagina;

  void ler() {
   printf("Digite o nome do livro: ");
   scanf("%[^\n]%*c", nome);
   printf("Digite o nome do autor do livro: ");
   scanf("%[^\n]%*c", autor);
   printf("Digite o numero de paginas do livro: ");
   scanf("%d", &pagina);
  }
  void imprimir(){
   printf("Nome do Livro: %s\n", nome);
   printf("Autor: %s\n", autor);
   printf("Paginas: %d Paginas\n", pagina);
  }
};

struct biblioteca {

  int qts;
  livro bibliotecas[10];

   void lernovolivro(){
    if (qts <= 10) {
            printf ("Adicione informações sobre o novo livro:\n");
            bibliotecas[qts].ler();
            qts++;
        } else {
            printf("A biblioteca está cheia. Não é possível adicionar mais livros.\n");
        }
  
}
  void imprimirLivros() {
        if (qts == 0) {
            printf("A biblioteca está vazia.\n");
            return;
        }
};

  void livromaiorpaginas() {
        if (qts == 0) {
            printf("A biblioteca está vazia.\n");
            return;
        }
        int indicepags = 0;
        for (int i = 1; i < qts; ++i) {
            if (bibliotecas[i].pagina > bibliotecas[indicepags].pagina) {
                indicepags = i;
            }
        }

       printf("Livro com mais páginas:\n");
        bibliotecas[indicepags];
    }
};

int main() {
 int opcao;
 biblioteca Mbiblioteca;
    
  printf("Escolha uma opção");
  printf("1. Adicionar novo livro\n");
  printf("2. Imprimir todos os livros\n");
  printf("3. Imprimir livro com mais páginas\n");
  
  printf("Opção: ");
  scanf("%d", &opcao);
  
  switch(opcao) {
            case '1':
                Mbiblioteca.lernovolivro();
                break;
            case '2':
                Mbiblioteca.imprimirLivros();
                break;
            case '3':
                Mbiblioteca.livromaiorpaginas();
                break;
           
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } 
    

