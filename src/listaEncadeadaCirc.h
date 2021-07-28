#ifndef LISTAENCADEADACIRC_H
#define LISTAENCADEADACIRC_H

#include "node.h"



typedef struct node *ListaCirc;

ListaCirc* criaLista();
void adicionaNoNaListaCirc(int, ListaCirc *);
void esvaziaLista(ListaCirc *);
void imprimeListaCircular(ListaCirc *);
int insereNoNaPosicao(int , ListaCirc *, int);
int insereNoNoInicioDaLista(int, ListaCirc *);

#endif // LISTAENCADEADACIRC_H
