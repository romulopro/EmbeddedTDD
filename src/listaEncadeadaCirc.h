#ifndef LISTAENCADEADACIRC_H
#define LISTAENCADEADACIRC_H

#include "node.h"
#include <stdbool.h>


typedef struct node *ListaCirc;

ListaCirc* criaLista();
void adicionaNoNaListaCirc(int, ListaCirc *);
void esvaziaLista(ListaCirc *);
void imprimeListaCircular(ListaCirc *);
int insereNoNaPosicao(int , int, ListaCirc *);
int insereNoNoInicioDaLista(int, ListaCirc *);
int tamanhoListaCircular(ListaCirc *);
bool ehExistenteONo(int, ListaCirc*);
#endif // LISTAENCADEADACIRC_H
