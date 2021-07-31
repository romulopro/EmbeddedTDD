#include "node.h"
#include "listaEncadeadaCirc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

ListaCirc *criaLista()
{
    ListaCirc *li = (ListaCirc *)malloc(sizeof(ListaCirc));
    if (li != NULL)
    {
        *li = NULL;
    }
    return li;
}

void adicionaNoNaListaCirc(int valueOfNode,  ListaCirc *lc)
{
    Node *novoNo = (Node *)malloc(sizeof(Node));
    Node *noAtual = *lc;
    novoNo->value = valueOfNode;
    if (*lc == NULL)
    {
        *lc = novoNo;
        novoNo->prox = novoNo;
        return;
    }
    while (noAtual->prox != (*lc))
    {

        noAtual = noAtual->prox;
    }
    noAtual->prox = novoNo;
    novoNo->prox = *lc;
    return;
}

void esvaziaLista(ListaCirc *lc)
{
    if ((lc != NULL) && (*lc != NULL))
    {
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
int insereNoNaPosicao(const int valueOfNode, const int posicao,  ListaCirc *lc)
{

    Node *noAtual = *lc;
    Node *aux = NULL;
    
    if (posicao == 0)
    {
        return 0;
    }
    if(posicao == 1)
    {
        return insereNoNoInicioDaLista(valueOfNode, lc);
    }
    for (int ii = 1; ii < posicao - 1; ii++)
    {
        noAtual = noAtual->prox;
    }
    Node *novoNo = (Node *)malloc(sizeof(Node));
    novoNo->value = valueOfNode;

    aux = noAtual->prox;
    noAtual->prox = novoNo;
    novoNo->prox = aux;
    return 0;
}
int insereNoNoInicioDaLista(const int valueOfNode, ListaCirc *lc)
{

    Node *noAtual = *lc;
    Node *aux = NULL;
    Node *novoNo = (Node *)malloc(sizeof(Node));
    novoNo->value = valueOfNode;
    if (lc == NULL)
    {
        return 0;
    }
    if (*lc == NULL)
    {
        *lc = novoNo;
        novoNo->prox = novoNo;
        return 1;
    }

    while (noAtual->prox != (*lc))
    {
        noAtual = noAtual->prox;
    }
    aux = noAtual->prox;    // no inicial
    noAtual->prox = novoNo; // aponta por novo no
    novoNo->prox = aux;
    *lc = novoNo;
    return 1;
}

void imprimeListaCircular(const ListaCirc const *lc)
{
    if((lc == NULL) || (*lc == NULL)){
        return;
    }
    //char *lista;
    Node *no;
    no = *lc;
    while ((*lc) != no->prox)
    {
        printf("%d ", no->value);
        no = no->prox;
    }
    printf("%d\n", no->value);
    return;
}

int tamanhoListaCircular(const ListaCirc *lc){
    Node *noAtual = *lc;
    int tamanhoLista = 0;
    if (*lc == NULL)
    {   
        return 0;
    }
    do{
        tamanhoLista+=1;
        noAtual = noAtual->prox;
    }
    while (noAtual != (*lc));
    
    return tamanhoLista;
}
bool ehExistenteONo(const int valorDoNo, const ListaCirc* lc){
    Node *noAtual = NULL;
    if (*lc == NULL)
    {
        return false;
    }
    noAtual = *lc;
    do
    {
        if(noAtual->value == valorDoNo)
        {
            return true;
        }
        noAtual = noAtual->prox;
    }while (noAtual != (*lc));
    return false;
}

