#ifdef TEST

#include "unity.h"
#include <stdlib.h>
#include "listaEncadeadaCirc.h"
#include "node.h"


void setUp(void)
{
     //ListaCirc *lc = criaLista();
}

void tearDown(void)
{
    // if(lc =! NULL && (*lc)=! NULL){
    //     esvaziaLista(lc);
    // }
}



void test_criaListaVazia(){
    ListaCirc *lc = criaLista();

    TEST_ASSERT_NULL(*lc);
}

void test_adicionaNodeInicial(){
    ListaCirc *lc = criaLista();
    adicionaNoNaListaCirc(4, lc);
    imprimeListaCircular(lc);
    TEST_ASSERT_NOT_NULL(*lc);
}

void test_PonteiroListaCom1NoSeApontaPraEleMesmo(){
    ListaCirc *lc = criaLista();
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->prox);
}
void adiciona1valorEConfereEle(){
    ListaCirc *lc = criaLista();
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->value);
}

void test_Adiciona2ElementosLista(){
    ListaCirc *lc = criaLista();
    adicionaNoNaListaCirc(5, lc);
    adicionaNoNaListaCirc(3, lc);
    
    TEST_ASSERT_EQUAL_INT(3, (*lc)->prox->value);
}

void test_Adiciona3ElementosUltimoApontaParaOPrimeiro(){
    ListaCirc *lc = criaLista();
    
    adicionaNoNaListaCirc(5, lc);
    
    adicionaNoNaListaCirc(3, lc);
    
    adicionaNoNaListaCirc(4, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->prox->prox->prox);
}

void test_Adiciona4ElementosVerificaValorUltimo(){
    ListaCirc *lc = criaLista();
    
    adicionaNoNaListaCirc(9, lc);
    
    adicionaNoNaListaCirc(3, lc);
    
    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(1, lc);
    TEST_ASSERT_EQUAL_PTR(1, (*lc)->prox->prox->prox->value);
}

void test_esvaziaLista(){
    ListaCirc *lc = criaLista();
    ListaCirc *aux = (ListaCirc*) malloc(sizeof(ListaCirc));
    aux = lc; 
    adicionaNoNaListaCirc(5, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(7, lc);
    adicionaNoNaListaCirc(8, lc);
    adicionaNoNaListaCirc(4, lc);
    imprimeListaCircular(lc);
    esvaziaLista(lc);
    TEST_ASSERT_NULL(*lc);
    
}
void test_insereNoNaPrimeiraPosicao(){
    ListaCirc *lc = criaLista();
    ListaCirc *aux = (ListaCirc*) malloc(sizeof(ListaCirc));
    aux = lc; 
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    insereNoNoInicioDaLista(7, lc);
    imprimeListaCircular(lc); 
    TEST_ASSERT_EQUAL_INT(7, (*lc)->value);
    free(lc);
}


#endif // TEST
