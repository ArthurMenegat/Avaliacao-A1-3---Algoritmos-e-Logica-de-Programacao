#include <stdio.h>
#include <math.h>

int Qproduto, i, Real, Centavos, Inteiro, Qcedulas, Qmoeda; 
float Vproduto, Total_Compra = 0, Total_Itens, Medio_Compra = 0; 
int Cedulas[6] = {100, 50, 20, 10, 5, 2}; 
float Moeda[1] = {1}; 
char Escolha;  

int main ()
{
do {
do {  

    printf ("Informe a quantidade de um produto: \n");
    scanf ("%d", &Qproduto);

if (Qproduto <= 0)

break;

    printf ("Informe o valor unitario do produto: \n");
    scanf ("%f", &Vproduto);

Total_Compra += Qproduto * Vproduto; //Operação para calcular a quantidade total de dinheiro gasto.
Total_Itens += Qproduto;            

}while (Qproduto >= 1); //Estrutura de repetição para caso o valor do produto seja (ou não) 0.

     printf ("Valor total da compra: R$ %0.2f\n", Total_Compra);

Medio_Compra = Total_Compra / Total_Itens; //Operação para calcular a média de gasto.

     printf ("Valor medio da compra: R$ %0.2f\n", Medio_Compra);


Real = Total_Compra / 1;       //Operação para separar os reais dos centavos.
Inteiro = Total_Compra * 100; //Operação para tornar o valor total em um número inteiro para depois separar os centavos dos reais.
Centavos = Inteiro % 100;    //Operação para separar os centavos dos reais.

    printf ("Valor total da compra: %d reais e 0.%02d centavos.\n\n", Real, Centavos);

for (i = 0; i < 6; i++)
{
Qcedulas = Real / Cedulas[i]; //Operação para contar as cédulas, onde i é a quantidade de cédulas usadas.

if (Qcedulas > 0) 
{
    printf ("%d cedulas de R$ %d\n", Qcedulas, Cedulas[i]);
    Real %= Cedulas[i];

}

}

for (i = 0; i < 1; i++)
{
Qmoeda = Centavos / Moeda[i]; //Operação para calcular os centavos, onde i é a quantidade de centavos usados.

if (Qmoeda > 0) 
{

    printf ("%d moedas de R$ %0.2f\n\n", Qmoeda, Moeda[i] / 100);

}

}

    printf ("Deseja repetir o programa? (S ou N): \n");
    scanf ("%s", &Escolha);

if ((Escolha =='n')||(Escolha =='N')) ///
                                         //
break;                                   // Estrutura de repetição.
                                         //
}while ((Escolha=='s')||(Escolha=='S')); //
                                      ///
return 0;

}
