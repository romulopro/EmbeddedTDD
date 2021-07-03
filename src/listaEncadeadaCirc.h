#ifndef LISTAENCADEADACIRC_H
#define LISTAENCADEADACIRC_H

typedef struct listaCirc
{
    struct node *noInicial;
    /* data */
}ListaCirc;

typedef struct node
{
    int value;
    struct node *prox;
}Node;

ListaCirc criaLista();
#endif // LISTAENCADEADACIRC_H
