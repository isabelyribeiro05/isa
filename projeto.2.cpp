#include <iostream>
#include <Limits>
#define MAX 10

using namespace std;

struct Livro{
    string Titulo;
    float Ano;
};

struct Autor{
     string Nome;
     string Nacionalidade;
};

void mostrarMenu(){
    cout << "-------------------- MENU --------------------\n";
    cout << " 1 - Cadastrar livro: \n";
    cout << " 2 - Cadastrar autor: \n";
    cout << " 3 - Exibir livros cadastrados: \n";
    cout << " 4 - Exibir autores cadastrados: \n";
    cout << "-------------------- Sair --------------------";
    cout << "------------------------------------------------";

}

  void cadLivro(Livro vet[], int i ){
  cout<< "titulo: ";
  getline(cin, vet[i].Titulo);
  cout<<"Ano: ";
  cin >> vet[i].Titulo;
  }

  void cadAutor(Autor vet[], int i ){
  cout << "titulo: ";
  getline(cin, vet[i].Nome);
  cout << "nacionalidade: ";
  cin >> vet [i].Nome;
  }


int main() {
    Livro ListaLivro[MAX];
    Autor ListaAutores[MAX];
    int contLivro = 0;
    int contAutores = 0;
    int opcao;

while (true){
    mostrarMenu();
    cin >> opcao;

    switch(opcao){

    case 1:
        if (contLivros<MAX){
           (cadLivro(ListaLivro,contLivro ++);}

       case 2:
       if (contCategoris<MAX){
        if ()
       }

    }
}








   return 0;
}
