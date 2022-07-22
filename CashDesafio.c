//Exercicio DESAFIO - BONUS - tive dificuldade, pesquisei e realmente tive o prazer de buscar o conteúdo e entendê-lo melhor!

#include <stdio.h>
#include <cs50.h>
#include <math.h>


bool luhnCheck(long CartaoNum);
int getCardLen(long CartaoNum);
void getCardProv(long CartaoNum);

int main(void)
{

    long CartaoNum = get_long_long("Insira um Cartão Válido: ");

    if (luhnCheck(CartaoNum) == true)
    {

        getCardProv(CartaoNum);

    }
    else
    {
        printf("INVALID\n");
    }
}


bool luhnCheck(long CartaoNum)
{

    int checkSum = 0;

    long tmp = CartaoNum;


    for (int pos = 0; tmp > 0; pos++)
    {
        if (pos % 2 == 0)
        {

            checkSum += tmp % 10;

            tmp /= 10;
        }
        else
        {

            int odd = (tmp % 10) * 2;

            checkSum += (odd / 10 + odd % 10);
            tmp /= 10;
        }
    }

    return (checkSum % 10) == 0;
}

int getCardLen(long CartaoNum)
{

    int len = log10(CartaoNum);
    return len + 1;
}

void getCardProv(long CartaoNum)
{

    int len = getCardLen(CartaoNum);

    int prov;


    if (len == 16)
    {

        prov = (CartaoNum / 1e14);

        if (prov >= 51 && prov <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (prov >= 40 && prov <= 49)
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }
    }


    if (len == 13)
    {
        prov = (CartaoNum / 1e12);
        if (prov == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }


    if (len == 15)
    {
        prov = (CartaoNum / 1e13);
        if (prov == 34 || prov == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else if (len <= 12 || len >= 17 || len == 14)
    {
        printf("INVALID\n");
    }
}