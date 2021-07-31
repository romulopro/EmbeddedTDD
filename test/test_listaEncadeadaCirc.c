#ifdef TEST

#include "unity.h"
#include <stdlib.h>
#include "listaEncadeadaCirc.h"
#include "node.h"

ListaCirc *  lc;
void setUp(void)
{
    lc = criaLista();
}

void tearDown(void)
{
    esvaziaLista(lc);
    free(lc);
}



void test_criaListaVazia(){
    
    TEST_ASSERT_NULL(*lc);
}

void test_adicionaNodeInicial(){
    
    adicionaNoNaListaCirc(4, lc);
    imprimeListaCircular(lc);
    TEST_ASSERT_NOT_NULL(*lc);
}

void test_PonteiroListaCom1NoSeApontaPraEleMesmo(){
    
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->prox);
}
void adiciona1valorEConfereEle(){
    
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->value);
}

void test_Adiciona2ElementosLista(){
    
    adicionaNoNaListaCirc(5, lc);
    adicionaNoNaListaCirc(3, lc);
    
    TEST_ASSERT_EQUAL_INT(3, (*lc)->prox->value);
}

void test_Adiciona3ElementosUltimoApontaParaOPrimeiro(){
    
    
    adicionaNoNaListaCirc(5, lc);
    
    adicionaNoNaListaCirc(3, lc);
    
    adicionaNoNaListaCirc(4, lc);
    TEST_ASSERT_EQUAL_PTR(*lc, (*lc)->prox->prox->prox);
}

void test_Adiciona4ElementosVerificaValorUltimo(){
    
    
    adicionaNoNaListaCirc(9, lc);
    
    adicionaNoNaListaCirc(3, lc);
    
    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(1, lc);
    TEST_ASSERT_EQUAL_PTR(1, (*lc)->prox->prox->prox->value);
}

void test_esvaziaLista(){
    
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

    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    insereNoNoInicioDaLista(7, lc);
    imprimeListaCircular(lc); 
    TEST_ASSERT_EQUAL_INT(7, (*lc)->value);
    
}

void test_inserePrimeiroNoNaListaVaziaUsandoFuncaoAdicionarInicio(){
    
    insereNoNoInicioDaLista(7, lc);
    TEST_ASSERT_EQUAL_INT(7, (*lc)->value);
    
}

void test_insereNoNaSegundaPosicao(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    insereNoNaPosicao(7, 2 ,lc);
    imprimeListaCircular(lc); 
    TEST_ASSERT_EQUAL_INT(7, (*lc)->prox->value);
    
}

void test_InsereNoInicioUsandoFnInserindoNoPosicao(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    insereNoNaPosicao(7, 1 ,lc);
    imprimeListaCircular(lc); 
    TEST_ASSERT_EQUAL_INT(7, (*lc)->value);
    
}
void test_tamanhoListaCircularQuatroElementos(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    TEST_ASSERT_EQUAL_INT(4, tamanhoListaCircular(lc));
    
}
void test_tamanhoListaCircularTresElementos(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    TEST_ASSERT_EQUAL_INT(3, tamanhoListaCircular(lc));
    
}
void test_tamanhoListaZeroListaVazia(){
    
    TEST_ASSERT_EQUAL_INT(0, tamanhoListaCircular(lc));
    
}

void test_procuraNoNaListaExistente(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_TRUE(ehExistenteONo(4, lc));
}
void test_procuraNoQueNaoExiste(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_FALSE(ehExistenteONo(7, lc));
}
void test_procuraNoListaVazia(){
    
    TEST_ASSERT_FALSE(ehExistenteONo(4, lc));
}
void test_procuraNoQueEstaNaPrimeiraPosicao(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(4, lc);
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_TRUE(ehExistenteONo(1, lc));
}
void test_procuraNoQueEstaNaUltimaPosicao(){
    
    adicionaNoNaListaCirc(1, lc);
    adicionaNoNaListaCirc(2, lc);
    adicionaNoNaListaCirc(3, lc);
    adicionaNoNaListaCirc(6, lc);
    adicionaNoNaListaCirc(5, lc);
    TEST_ASSERT_TRUE(ehExistenteONo(5, lc));
}
// void imprimeListaCircular(){
//     //ListaCirc *lc = criaLista();

//     adicionaNoNaListaCirc(5, lc);
//     adicionaNoNaListaCirc(3, lc);
//     adicionaNoNaListaCirc(3, lc);
//     adicionaNoNaListaCirc(4, lc);
//     adicionaNoNaListaCirc(4, lc);
//     adicionaNoNaListaCirc(7, lc);
//     adicionaNoNaListaCirc(8, lc);
//     adicionaNoNaListaCirc(4, lc);
//     TEST_ASSERT_EQUAL_STRINGimprimeListaCircular("5 3 3 4 4 7 8 4", imprimeListaCircular(lc));
//     free(lc);
// }
#endif // TEST
