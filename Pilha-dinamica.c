#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//pilha Dinamica
  //1- definir tipos
  //PilhaDinamica
//-------------------------------------------
//NoPilha
  typedef struct NoPilha* ptrNoPilha;

  //int chave
  typedef struct NoPilha{
    int chave;
    ptrNoPilha proximo;//*noPilha Proximo
  }NoPilha;


  typedef struct{
    ptrNoPilha topo;
    int qtde;
  }PilhaDinamica;
    //-------------------------------------------
//*NoPilha topo
//int quantidade de elementos

  //2- funções//operações
  //inicializa a pilha
    void IniciaPilhaDinamica(PilhaDinamica* Pilha){
    //ponteiro do topo aponta para NULL
    Pilha->topo = NULL;
    //qtde de elementos inicia em 0
    Pilha->qtde = 0;
  }
  //Verifica se a pilha esta vazia
  bool estaVaziaPilhaDinamica(PilhaDinamica* Pilha){
    return(Pilha->topo == NULL);
    //return(PilhaDinamica->qtde == 0); mesma coisa
  }
  // retorna o tamanho da Pilha
  int tamanhoPilhaDinamica(PilhaDinamica* Pilha){
    return(Pilha->qtde);
  }
  //inserir elementos
  void EmpilhaPilhaDinamica(PilhaDinamica* pilha, int x){
    //criar um novo nó
    ptrNoPilha aux;//novo nó
    aux = malloc(sizeof(NoPilha));//alocar memoria

    //copiar o valor inserido no novo nó
    aux->chave = x;

    //proximo do novo nó aponta para quem o topo apontava
    aux->proximo = pilha->topo;

    //topo aponta para o novo nó
    pilha->topo = aux;

    //incremeta a quantidade de elementos
    pilha->qtde++;
  }
  //printar a Pilha
  void ImprimirPilhaDinamica(PilhaDinamica* pilha){
    ptrNoPilha percorre;
    for(percorre = pilha->topo; percorre!= NULL; percorre = percorre->proximo){
        printf("|%d",percorre->chave);
      }
      printf("|\n");
  }

  //remover elemento
  int DesempilhaPilhaDinamica(PilhaDinamica* pilha){
    //vazia == FALSE
    int ret = pilha->topo->chave;
    if(!estaVaziaPilhaDinamica(pilha)){
      //copia o valor que será retornado
      //cria um nó auxiliar
      ptrNoPilha aux;
      // aux aponta para o topo
      aux = pilha->topo;
      //topo aponta para o proximo do topo
      pilha->topo = pilha->topo->proximo;
      //desaloca memoria do aux
      free(aux);
      //decrementa qtde
      pilha->qtde--;
    }else{
      printf("não pode ser removido");
    }
    //retorna o valor para usuario
    return ret;
  }
  //pesquisar elementos(consulta o topo)
int ConsultaTopoPilhaDinamica(PilhaDinamica*pilha){
  int x ;
  return x = pilha->topo->chave;
}
  //destruir a Pilha
  void DestroiPilhaDinamica(PilhaDinamica* pilha){
    free(pilha);
  }

int main(){
  PilhaDinamica pd;
  IniciaPilhaDinamica(&pd);
  if(estaVaziaPilhaDinamica(&pd)){
    printf("esta vazia sua pilha\n");
  }else{
    printf("tem coisa na sua pilha\n");
  }
  printf("quantidade de elementos %d\n",tamanhoPilhaDinamica(&pd));
  EmpilhaPilhaDinamica(&pd, 42);
  ImprimirPilhaDinamica(&pd);
  EmpilhaPilhaDinamica(&pd, 43);
  ImprimirPilhaDinamica(&pd);
  EmpilhaPilhaDinamica(&pd, 44);
  ImprimirPilhaDinamica(&pd);
  int consulta = ConsultaTopoPilhaDinamica(&pd);
  printf("o valor do topo e: ||%d||\n",consulta);
  DestroiPilhaDinamica(&pd);
  //printf("quantidade de elementos %d\n",tamanhoPilhaDinamica(&pd));
 int ret = DesempilhaPilhaDinamica(&pd);
ImprimirPilhaDinamica(&pd);
 ret = DesempilhaPilhaDinamica(&pd);
ImprimirPilhaDinamica(&pd);
 ret = DesempilhaPilhaDinamica(&pd);
ImprimirPilhaDinamica(&pd);
 ret = DesempilhaPilhaDinamica(&pd);
ImprimirPilhaDinamica(&pd);

  return 0;

}
