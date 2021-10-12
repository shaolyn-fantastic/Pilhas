#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // 1 - 0 > true or false

/*definir os tipos
vetor => {elementos}
topo (indexador)*/
#define MAXTAM 8
typedef struct {
  int vetor[MAXTAM];
  int topo;
}PilhaEstatica;


// E S T R U T U R A -- E S T Á T I C A
//operações de modificação
// 1- inicialização
void iniciaPilhaEstatica(PilhaEstatica *pilha){
  pilha->topo = 0;//primeira posição na inserção na pilha é a posição 0 do vetor
  }

 //2-inserção
 //3 -remoção
// 4 - pesquisa (consulta)


//operações adicionais (consulta)
 //5 - está vazia
bool EstaVaziaPilhaEstatica(PilhaEstatica *pilha){
return (pilha->topo == 0);
}


 //6 - está cheia
 bool EstaCheiaPilhaEstatica(PilhaEstatica *pilha){
   return(pilha->topo == MAXTAM);
 }
 //7 - quantidade de elementos da estrutura
int TamanhoPilhaEstatica(PilhaEstatica* pilha){
  return (pilha->topo);
}

 //8 - imprimir a estrutura
int main(){
  PilhaEstatica p;
  iniciaPilhaEstatica(&p);
  printf("danca gatinho \n");
  if(EstaVaziaPilhaEstatica(&p)){
    printf("esta vazia\n");
  }else {
    printf("nao esta vazia\n");
  }
  if(EstaCheiaPilhaEstatica(&p)){
    printf("esta cheia");
  }
  printf("tamanho da pilha %d \n",TamanhoPilhaEstatica(&p));
return 0;}
