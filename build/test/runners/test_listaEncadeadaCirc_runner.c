/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_criaListaVazia();
extern void test_adicionaNodeInicial();
extern void test_PonteiroListaCom1NoSeApontaPraEleMesmo();
extern void test_Adiciona2ElementosLista();
extern void test_Adiciona3ElementosUltimoApontaParaOPrimeiro();
extern void test_Adiciona4ElementosVerificaValorUltimo();
extern void test_esvaziaLista();
extern void test_insereNoNaPrimeiraPosicao();
extern void test_inserePrimeiroNoNaListaVaziaUsandoFuncaoAdicionarInicio();
extern void test_insereNoNaSegundaPosicao();
extern void test_InsereNoInicioUsandoFnInserindoNoPosicao();
extern void test_tamanhoListaCircularQuatroElementos();
extern void test_tamanhoListaCircularTresElementos();
extern void test_tamanhoListaZeroListaVazia();
extern void test_procuraNoNaListaExistente();
extern void test_procuraNoQueNaoExiste();
extern void test_procuraNoListaVazia();
extern void test_procuraNoQueEstaNaPrimeiraPosicao();
extern void test_procuraNoQueEstaNaUltimaPosicao();


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_listaEncadeadaCirc.c");
  run_test(test_criaListaVazia, "test_criaListaVazia", 22);
  run_test(test_adicionaNodeInicial, "test_adicionaNodeInicial", 27);
  run_test(test_PonteiroListaCom1NoSeApontaPraEleMesmo, "test_PonteiroListaCom1NoSeApontaPraEleMesmo", 34);
  run_test(test_Adiciona2ElementosLista, "test_Adiciona2ElementosLista", 45);
  run_test(test_Adiciona3ElementosUltimoApontaParaOPrimeiro, "test_Adiciona3ElementosUltimoApontaParaOPrimeiro", 53);
  run_test(test_Adiciona4ElementosVerificaValorUltimo, "test_Adiciona4ElementosVerificaValorUltimo", 64);
  run_test(test_esvaziaLista, "test_esvaziaLista", 77);
  run_test(test_insereNoNaPrimeiraPosicao, "test_insereNoNaPrimeiraPosicao", 92);
  run_test(test_inserePrimeiroNoNaListaVaziaUsandoFuncaoAdicionarInicio, "test_inserePrimeiroNoNaListaVaziaUsandoFuncaoAdicionarInicio", 105);
  run_test(test_insereNoNaSegundaPosicao, "test_insereNoNaSegundaPosicao", 112);
  run_test(test_InsereNoInicioUsandoFnInserindoNoPosicao, "test_InsereNoInicioUsandoFnInserindoNoPosicao", 125);
  run_test(test_tamanhoListaCircularQuatroElementos, "test_tamanhoListaCircularQuatroElementos", 137);
  run_test(test_tamanhoListaCircularTresElementos, "test_tamanhoListaCircularTresElementos", 146);
  run_test(test_tamanhoListaZeroListaVazia, "test_tamanhoListaZeroListaVazia", 154);
  run_test(test_procuraNoNaListaExistente, "test_procuraNoNaListaExistente", 160);
  run_test(test_procuraNoQueNaoExiste, "test_procuraNoQueNaoExiste", 169);
  run_test(test_procuraNoListaVazia, "test_procuraNoListaVazia", 178);
  run_test(test_procuraNoQueEstaNaPrimeiraPosicao, "test_procuraNoQueEstaNaPrimeiraPosicao", 182);
  run_test(test_procuraNoQueEstaNaUltimaPosicao, "test_procuraNoQueEstaNaUltimaPosicao", 191);

  return UnityEnd();
}
