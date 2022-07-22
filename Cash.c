#include <cs50.h>
#include <stdio.h>
#include <math.h>



int main(void)
{
    int d25, d10, d5, d1 = 0;    
 
    float dinheiro;
    do
    {
        dinheiro = get_float("Mudança: ");
    }
    while (dinheiro < 0);


//Função round SERVER para arredondar o número de ponto flutuante para o número inteiro mais próximo e retornar o número de ponto flutuante, visto no curso CS50;
    int centavos = round(dinheiro * 100);
    
    d25 = centavos / 25;
    d10 = (centavos - (d25 * 25)) / 10;
    d5 = (centavos - (d25 * 25) - (d10 * 10)) / 5; 
    d1 = centavos - (d25 * 25) - (d10 * 10) - (d5 * 5); 

    printf("%i\n", d25 + d10 + d5 + d1);

}