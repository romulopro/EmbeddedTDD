#ifdef TEST

#include "unity.h"

#include "listaEncadeadaCirc.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_listaEncadeadaCirc_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement listaEncadeadaCirc");
}

void test_criaListaVazia(){
    ListaCirc lc = criaLista();
    TEST_ASSERT_NULL(lc.noInicial);
}

#endif // TEST
