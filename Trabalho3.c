#include <stdio.h>

int N, K, pontuacao[1000], classificados=0;
int i, j, x, dec;

int main () 
{

    printf ("Numero de competidores: \n");
    scanf ("%d", &N);

    printf ("Minimo de classificados: \n");
    scanf ("%d", &K);

    printf ("Insira a pontuacao dos competidores: \n");

for (i = 0; i < N; i++) 
{                                           
    scanf ("%d", &pontuacao[i]);

}

for (i = 0; i < N; i++)  //Aqui é uma estrutura para ordenar a pontuação em ordem decrescente.
{

for (x = i+1; x < N; x++) //Este "for" representará as combinações de comparação.
{

if (pontuacao[i] < pontuacao[x]) //Aqui i representará o primeiro número e o x representará o segundo número. Se o i for menor que x, então os dois trocam de lugar.
{                               
    dec = pontuacao[i];         //A variável "dec" é uma variável auxiliar. Aqui ela irá receber o valor de i.                    
    pontuacao[i] = pontuacao[x]; // Aqui o i receberá o valor de x.
    pontuacao[x] = dec; // O x receberá o valor de dec.

}
}
}

printf ("=======================\n");

for (i=0; i < N; i++) {

printf ("%i\n", pontuacao[i]);

}

printf ("=======================\n");

for (j = 0; j < N; j++)
{
if (pontuacao[j] >= pontuacao[K - 1]) {   //Operação para obter os classificados, onde K é 0. 
    classificados++;
}
}
    printf ("%d\n", classificados);


return 0;

}