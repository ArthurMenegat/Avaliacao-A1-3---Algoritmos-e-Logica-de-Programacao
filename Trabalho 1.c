#include <stdio.h>

float Depreciacao, Valor_Bem,  Bem_Depreciado, Acumulada, Taxa, Valor_inicial; //Declaração de variáveis. (Valor inicial é o primeiro valor que o
int anos, escolha;                                                                              //usuário insere)
                                                                                                 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////                                                                        

int main(void) {
    
int i;

do { //Parte da estrutura de repetição "while" que seria o "Faça".

    Acumulada = 0;

    printf ("Informe o valor do bem a ser depreciado:\n");
    scanf ("%g", &Valor_Bem);

    Valor_inicial = Valor_Bem; //Aqui eu fiz para o primeiro valor que aparece na tabela ser o que é digitado no valor do bem.

    printf ("Informe oa taxa de depreciacao (em porcentagem):\n");       //Aqui estão as entradas, sendo elas o valor do bem, taxa
    scanf ("%g", &Taxa);                                                //da depreciação (que no caso da tabela do exemplo seria 1.5) e
                                                                       //o período da depreciação que seria em anos.
    printf ("Informe o periodo da depreciacao em anos:\n");
    scanf ("%d", &anos);

    printf ("\n");
    printf ("\tAnos \t Valor do bem \t Depreciacao \t Valor Depreciado\n");     //Aqui é apenas o início da estrutura da tabela.
    printf ("==========================================================\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

for (i=1; i<=anos; i++) { //Aqui começa a estrutura de repetição "for", onde eu inseri a variável i, para lidar com as linhas ou anos. 
                         //Como pode ver, o programa irá fazer os cálculos enquanto o i for menor ou igual aos anos inseridos pelo usuário.

Depreciacao = Valor_Bem*(Taxa/100); //Cálculo da Depreciação propriamente dita.
                                                                                                        ////Aqui estão os cálculos                                                      
Bem_Depreciado = Valor_Bem-Depreciacao; //Cálculo do bem após receber a depreciação.                   ////que serão realizados.

Acumulada += Depreciacao; //Cálculo para realizar a depreciação total (ou seja, acumulada).

    printf ("\t%d \t %g    \t %g      \t %g\n", i,  Valor_Bem, Depreciacao, Bem_Depreciado);  //Finalmente, aqui o programa irá
                                                                                             //imprimir os valores calculados como
Valor_Bem = Bem_Depreciado; //Aqui foi igualado as duas variáveis.                          //tabela.
}

    printf ("==========================================================\n"); //Fim da estrutura da tabela.
    printf ("Depreciacao acumulada: %g\n", Acumulada); //E o resultado da depreciação acumulada.

    printf ("Reiniciar? 1(sim) 2(nao)\n");
    scanf ("%d", &escolha);

}while (escolha == 1); //Estrutura de repetição para recomeçar o programa, caso queira.

if (escolha == 2) {   //Condição (Se).

    printf("Fim.");

    }
    

return 0;

}












        