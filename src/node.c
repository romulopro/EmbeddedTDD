#include "node.h"
#include<stddef.h>

Node newNode(int value){
    Node novoNode;
    novoNode.value = value;
    novoNode.prox = NULL;
    return novoNode;
}