#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tamanho;

//Implementação do DO, não vista no Curso, mas realizada no curso da FUNEC RIACHO, tendo conhecimento de tal comando :
    do
    {
    tamanho = get_int("tamanho: \n");
    }

    while
    ((tamanho < 1) || (tamanho > 8));

    for (int fileira = 0; fileira < tamanho; fileira++)
    {

        for (int coluna = 0; coluna < tamanho; coluna++)
        {

            if (fileira + coluna >= tamanho - 1)
                printf("#");


            else
            printf(" ");
        }
        printf("\n");
    }
}