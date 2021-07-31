#ifndef LISTAENCADEADACIRC_H
#define LISTAENCADEADACIRC_H

#include "node.h"
#include <stdbool.h>


typedef struct node *ListaCirc;

ListaCirc* criaLista();
void adicionaNoNaListaCirc(int, ListaCirc *);
void esvaziaLista(ListaCirc *);
void imprimeListaCircular(const ListaCirc const *);
int insereNoNaPosicao(const int , const int,  ListaCirc *);
int insereNoNoInicioDaLista(const int,  ListaCirc *);
int tamanhoListaCircular(const ListaCirc *);
bool ehExistenteONo(const int, const ListaCirc*);
#endif // LISTAENCADEADACIRC_H
