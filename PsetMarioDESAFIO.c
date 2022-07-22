#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tamanho;
    do
    {
        tamanho = get_int("height: \n");
    }
    while (tamanho < 1 || tamanho > 8);
    for (int i = 0; i < tamanho; i++)
    {
        for (int fileiraColuna = tamanho-i-1; fileiraColuna > 0 ; fileiraColuna--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i+1; j++)
        {    
            printf("#");
        }
        {
            printf("  ");
        }
        for (int l = 1; l <= i+1; l++)
        {
            printf("#");
        }
      printf("\n");
    }
}