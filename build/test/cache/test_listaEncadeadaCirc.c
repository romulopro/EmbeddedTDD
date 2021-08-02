#include "src/node.h"
#include "src/listaEncadeadaCirc.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"






ListaCirc * lc;

void setUp(void)

{

    lc = criaLista();

}



void tearDown(void)

{

    imprimeListaCircular(lc);

    esvaziaLista(lc);

    free(lc);

}







void test_criaListaVazia(){



    do {if ((((*lc)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(25))));}} while(0);

}



void test_adicionaNodeInicial(){



    adicionaNoNaListaCirc(4, lc);



    do {if ((((*lc)) != 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(32))));}} while(0);

}



void test_PonteiroListaCom1NoSeApontaPraEleMesmo(){



    adicionaNoNaListaCirc(5, lc);

    UnityAssertEqualNumber((UNITY_INT64)((*lc)), (UNITY_INT64)(((*lc)->prox)), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_HEX64);

}

void adiciona1valorEConfereEle(){



    adicionaNoNaListaCirc(5, lc);

    UnityAssertEqualNumber((UNITY_INT64)((*lc)), (UNITY_INT64)(((*lc)->value)), (

   ((void *)0)

   ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_HEX64);

}



void test_Adiciona2ElementosLista(){



    adicionaNoNaListaCirc(5, lc);

    adicionaNoNaListaCirc(3, lc);



    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)(((*lc)->prox->value)), (

   ((void *)0)

   ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_INT);

}



void test_Adiciona3ElementosUltimoApontaParaOPrimeiro(){





    adicionaNoNaListaCirc(5, lc);



    adicionaNoNaListaCirc(3, lc);



    adicionaNoNaListaCirc(4, lc);

    UnityAssertEqualNumber((UNITY_INT64)((*lc)), (UNITY_INT64)(((*lc)->prox->prox->prox)), (

   ((void *)0)

   ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_HEX64);

}



void test_Adiciona4ElementosVerificaValorUltimo(){





    adicionaNoNaListaCirc(9, lc);



    adicionaNoNaListaCirc(3, lc);



    adicionaNoNaListaCirc(4, lc);



    adicionaNoNaListaCirc(1, lc);

    UnityAssertEqualNumber((UNITY_INT64)((1)), (UNITY_INT64)(((*lc)->prox->prox->prox->value)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_HEX64);

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

    esvaziaLista(lc);

    do {if ((((*lc)) == 

   ((void *)0)

   )) {} else {UnityFail( (((" Expected NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(89))));}} while(0);



}

void test_insereNoNaPrimeiraPosicao(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    insereNoNoInicioDaLista(7, lc);

    UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)(((*lc)->value)), (

   ((void *)0)

   ), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_INT);



}



void test_inserePrimeiroNoNaListaVaziaUsandoFuncaoAdicionarInicio(){



    insereNoNoInicioDaLista(7, lc);

    UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)(((*lc)->value)), (

   ((void *)0)

   ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_INT);



}



void test_insereNoNaSegundaPosicao(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    insereNoNaPosicao(7, 2 ,lc);

    UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)(((*lc)->prox->value)), (

   ((void *)0)

   ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);



}



void test_InsereNoInicioUsandoFnInserindoNoPosicao(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    insereNoNaPosicao(7, 1 ,lc);

    UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)(((*lc)->value)), (

   ((void *)0)

   ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_INT);



}

void test_tamanhoListaCircularQuatroElementos(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((tamanhoListaCircular(lc))), (

   ((void *)0)

   ), (UNITY_UINT)(140), UNITY_DISPLAY_STYLE_INT);



}

void test_tamanhoListaCircularTresElementos(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((tamanhoListaCircular(lc))), (

   ((void *)0)

   ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_INT);



}

void test_tamanhoListaZeroListaVazia(){



    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((tamanhoListaCircular(lc))), (

   ((void *)0)

   ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_INT);



}



void test_procuraNoNaListaExistente(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    do {if ((ehExistenteONo(4, lc))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(164)));}} while(0);

}

void test_procuraNoQueNaoExiste(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    do {if (!(ehExistenteONo(7, lc))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(173)));}} while(0);

}

void test_procuraNoListaVazia(){



    do {if (!(ehExistenteONo(4, lc))) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(177)));}} while(0);

}

void test_procuraNoQueEstaNaPrimeiraPosicao(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(4, lc);

    adicionaNoNaListaCirc(5, lc);

    do {if ((ehExistenteONo(1, lc))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(186)));}} while(0);

}

void test_procuraNoQueEstaNaUltimaPosicao(){



    adicionaNoNaListaCirc(1, lc);

    adicionaNoNaListaCirc(2, lc);

    adicionaNoNaListaCirc(3, lc);

    adicionaNoNaListaCirc(6, lc);

    adicionaNoNaListaCirc(5, lc);

    do {if ((ehExistenteONo(5, lc))) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(195)));}} while(0);

}
