#ifndef NODE_H
#define NODE_H


struct node
{
    int value;
    struct node *prox;
};
typedef struct node Node;

#endif