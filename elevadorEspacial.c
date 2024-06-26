/*TRABALHO 1
PROBLEMA: Elevador espacial
GRUPO: Arthur Aguiar, Arthur Neves, Joao pedro porfilio, Joao Marcos, Rafael erram
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declaração das variaveis
    int i, count1, count2, num;
    printf("Elavalor Espacial\n");

    i = 0;
    count1 = 0;
    count2 = 0;
    num = 0;

    // Pede ao usuario o numero do andar que ele quer ir
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Verifica se o numero inserido e valido
    if (num >= 1 && num <= pow(10, 6))
    {
        int n1, n2, n3, n4, n5, n6, n7;
        // Loop para decompor o numero inserido pelo usuario

        for (i = 1; i <= num; i++)
        {
            count2++;
            count1 = 0;
            while (count1 != 2)
            {
                // decompoe o numero inserido pelo usuario
                n7 = (count2 / 1000000) % 10;
                n6 = (count2 / 100000) % 10;
                n5 = (count2 / 10000) % 10;
                n4 = (count2 / 1000) % 10;
                n3 = (count2 / 100) % 10;
                n2 = (count2 / 10) % 10;
                n1 = count2 % 10;
                count1 = 0;

                // verifica se os numeros decompostos sao iguais aos andares proibidos e passa para o proximo andar 
                if ((n1 == 4) || (n2 == 4) || (n3 == 4) || (n4 == 4) || (n5 == 4) || (n6 == 4) || (n7 == 4))
                {
                    count2++;
                } else {
                    count1++;
                }
                if (((n2 == 1) && (n1 == 3)) || ((n3 == 1) && (n2 == 3)) || ((n4 == 1) && (n3 == 3)) || ((n5 == 1) && (n4 == 3)) || ((n6 == 1) && (n5 == 3)) || ((n7 == 1) && (n6 == 3)))
                {
                    count2++;
                } else {
                    count1++;
                }
            }
        }

        // imprime para o usuario o numero do andar que ele escolheu e o numero que o elevador ira parar
        printf("numero: %d\n", num);
        printf("andar: %d\n", count2);
    } else {
        // Imprime a saida de invalido caso o numero inserido pelo usuario nao seja permitido
        printf("Numero invalido, digite um numero maior que 0 ou menor que 100000.");
    }
    return 0;
}