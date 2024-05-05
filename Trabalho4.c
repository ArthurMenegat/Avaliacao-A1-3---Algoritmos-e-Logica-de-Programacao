#include <stdio.h>

int Soma, Soma1, Soma2 , Soma3, Numero_Conta, Verificador;                                                   //Declaração de variáveis
int DigitoVerificadorF, DigitoVerificadorV, Inverso1, Inverso2, Inverso3,InversoReal, Numero, Verificador;  //

int main ()
{

 do {
do {

    printf ("Digite o numero da sua conta corrente (4 Digitos): \n");   
    scanf ("%d", &Numero_Conta);

}while (Numero_Conta < 1000);
                                //Estrutura de repetição (while/Enquanto), para garantir que o número informado esteja nos conformes.
}while (Numero_Conta > 9999); 

Numero = Numero_Conta / 10;          // Aqui foi separado o número da conta do número verificador, dividindo o número da conta por 10.
Verificador = Numero_Conta % 10;    // Já aqui, o inverso. Foi separado o número verificador do número da conta.

printf ("%d\n", Numero);
    
Inverso1 = Numero % 10;             //--> A partir daqui, foi invertido o número da conta. No primeiro dígito foi pego o resto de 10.  
Inverso2 = (Numero / 10) % 10;     //-->  Para o segundo número da conta, foi pego o número inicial dividio por 10, depois o resto. 
Inverso3 = (Numero / 100) % 10 ;  //--> Para o terceiro, o número inicial dividido por 100, depois o resto.

InversoReal = Inverso1 * 100 + Inverso2 * 10 + Inverso3; //Após ter o número inverso, ele foi colocado como um único número. 
                                                        //Por exemplo, se antes o número inverso foi de 3 2 1, agora ficou 321.
printf ("%d\n", InversoReal);

Soma = Numero + InversoReal; //Aqui, o cálculo da soma, para calcular o dígito verificador.  

Soma1 = Soma / 100;         //
Soma2 = (Soma / 10) % 10;  //Assim como o número inverso, foi separado o resultado da soma dígito por dígito. 
Soma3 = Soma % 10;        //

DigitoVerificadorF = Soma1 * 1 + Soma2 * 2 + Soma3 * 3; //Aqui, o cálculo com o resultado da soma anteriormente. 
DigitoVerificadorV = DigitoVerificadorF % 10; //E aqui, foi separado o último número do resultado da conta acima.

    printf ("O digito verificador e: %d \n", DigitoVerificadorV);

    if (Verificador == DigitoVerificadorV) //Estrutura (if/se) para informar se o último dígito do número completo da conta condiz. 
{

    printf ("O quarto numero da sua conta e o verificador.\n");
    
}

   else {

    printf ("O quarto numero da sua conta nao e o verificador.\n");

   }
return 0;

}

