#include <stdio.h>

int escolha, andar_maquina;

int main (void) {

int i;    
int A[3];   //Um array para os andares. 

do {

    printf ("Insira o numero de funcionarios em cada andar:\n");     //Entrada que recebe o número de funcionários.

for (i=0; i<3; i++) {   //Estrutura de repetição para os valores de cada andar. 

    scanf ("%d", &A[i]);

if (A[i] > 1000) {                                       ////
                                                            // 
    printf ("Numero de funcionaros imcompativel.");         //
                                                            //
break;                                                      //
                                                            //       Aqui é uma estrutura (Se, Senão), para interromper o programa caso o número de funcionários em cada
}                                                           //  ---> andar exceda (ou fique abaixo de 0) a quantidade máxima de 1000, que foi especificada no enunciado
                                                            //       da questão.                 
else if (A[i] <= 0) {                                       //       
                                                            //
    printf ("Numero de funcionaros imcompativel.");         //
                                                            //
break;                                                  ////

}

}
    printf ("Em qual andar desejaria colocar a maquina de cafe?\n");
    scanf ("%d", &andar_maquina);



int minutos_totais = 0; //Variável da soma dos minutos, que foi igualada a 0 para facilitar.
for (i=0; i<3; i++) {   //Mais uma estrutura de repetição para executar os cálculos.

    minutos_totais += A[i] * 2 * (i != andar_maquina);  //Cálculo dos minutos totais. i seria os andares que serão multiplicados por 2, desde que o andar seja diferente 
                                                        // do andar da máquina. 
}

    printf ("Numero total de minutos a serem gastos: %d\n", minutos_totais); //Saída com os minutos totais gastos.

    printf ("Reiniciar? 1(sim) 2(nao)\n");
    scanf ("%d", &escolha);

}while (escolha == 1); ////         

return 0;

} 