#include "node.h"
#include "listaEncadeadaCirc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>





ListaCirc* criaLista (){
    ListaCirc *li = (ListaCirc*) malloc(sizeof(ListaCirc));
    if (li != NULL) {
        *li = NULL;
    }
    return li;
}



void adicionaNoNaListaCirc(int valueOfNode, ListaCirc *lc){
    Node *novoNo = (Node*)malloc(sizeof(Node));
    novoNo->value = valueOfNode;
    if (*lc == NULL ){
        *lc = novoNo;
        novoNo->prox = novoNo;
        return;
    }
    Node *noAtual = *lc;
    while(noAtual->prox != (*lc)){
        
        noAtual = noAtual->prox;
    }
    noAtual->prox = novoNo;
    novoNo->prox = *lc;
    return;

}

void esvaziaLista(ListaCirc *lc){
    if((lc != NULL) && (*lc != NULL)){
        Node *aux;
        Node *no;
        no = *lc;
        while ((*lc) != no->prox)
        {
            aux = no;
            no = no->prox;
            free(aux);
        }
        free(no);
        *lc = NULL;
    }
    return;
}
// int insereNoNaPosicao(int valueOfNode, ListaCirc *lc, int posicao){

//     Node *noAtual = *lc;
//     Node *aux = NULL;
//     printf("%d ", noAtual->value);
//     for (int ii = 0; ii< posicao; ii++){
//         noAtual = noAtual->prox;
//         printf("%d ", noAtual->value);
//     }
//     Node *novoNo = (Node*)malloc(sizeof(Node));
//     novoNo->value = valueOfNode;
    
//     aux = noAtual->prox;
//     printf("%d\n", aux->value);
//     printf("%d\n", noAtual->value);
//     noAtual= novoNo;
//     novoNo->prox = aux;
//     return 0;
    
// }
int insereNoNoInicioDaLista(int valueOfNode, ListaCirc *lc){
    if(lc == NULL) {
        return 0;
    }
    Node *noAtual = *lc;
    Node *aux = NULL;
    Node *novoNo = (Node*)malloc(sizeof(Node));
    novoNo->value = valueOfNode;
    while(noAtual->prox != (*lc)){
        noAtual = noAtual->prox;
    }
    aux = noAtual->prox; // no inicial
    noAtual->prox = novoNo; // aponta por novo no
    novoNo->prox = aux;
    *lc = novoNo;
    return 1;

}

void imprimeListaCircular(ListaCirc *lc){
    if((lc != NULL) && (*lc != NULL)){
    Node *aux;
    Node *no;
    no = *lc;
    while ((*lc) != no->prox)
        {
        printf("%d " , no->value);
        aux = no;
        no = no->prox;
    }
    printf("%d " , no->value);
    printf("\n");
    return;
    }
}