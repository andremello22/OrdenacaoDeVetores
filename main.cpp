#include <iostream>
using namespace std;
void trocar(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
void imprimir(int *vet) {
  cout << "(";
  for (int i = 0; i < 5; i++) {
    cout << vet[i];
  }
  cout << ") " << endl;
}
void bubble_sort(int *vet) { /*no tipo de ordenação bubble sort
o primeiro valor do vetor é comparado com o segundo e em caso
de o primeiro ser maior, ele é empurrado para o final e assim é feito
sucessivamente com todos os elementos do vetor*/
  int houve_troca = 1;
  while (houve_troca == 1) {
    houve_troca = 0;
    for (int i = 0; i < 4; i++) {

      for (int j = 0; j < 5; j++)
        imprimir(vet);
      cout << endl;

      if (vet[i] > vet[i + 1]) {
        trocar(&vet[i], &vet[i + 1]);
        houve_troca = 1;
      }
    }
  }
}
void select_sort(int *vet) { /*No método select sort, busca procurar o menor
 valor do vetor e colocar na sua ordem e assim sucessivamente até que o vetor
 esteja completamente ordenado*/
  int min;
  for (int i = 0; i < 5; i++) {
    min = i;
    for (int j = i + 1; j < 5; j++) {
      imprimir(vet);
      if (vet[j] < vet[min]) {
        min = j;
      }
    }
    trocar(&vet[i], &vet[min]);
  }
}
void inset_sort(
    int *vet) { /*O método inset sort consiste na comparação do valor da
esquerda(key) com o da direita e se o valor da direita for menor que o da
esquerda acontece a troca "a" e "b" com isso o valor que foi para a direita
passa a ser a chave(key) e assim é feito sucessivamente até o final do vetor*/
  for (int i = 1; i < 6; i++) {
    int key = vet[i];
    imprimir(vet);
    int j = i - 1;
    while (j >= 0 && vet[j] > key) {
      vet[j + 1] = vet[j];
      j--;
    }
    vet[j + 1] = key;
  }
}

int main() {
  int vet[5] = {50, 40, 30, 20, 10};
  cout << "bubble_sort" << endl;
  bubble_sort(vet);

  int vet2[5] = {50, 40, 30, 20, 10};
  cout << endl;
  cout << "select_sort" << endl;
  select_sort(vet2);

  int vet3[5] = {50, 40, 30, 20, 10};
  cout << endl;
  cout << "insert_sort" << endl;
  inset_sort(vet3);
}