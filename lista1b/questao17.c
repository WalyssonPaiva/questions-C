#include <stdio.h>

main()
{
    int x1, x,x2, alg1, alg2, alg3, alg4, alg5, algt, digitos = 0;
    scanf("%d", &x);
    x1 = x;
    x2 = x;

    while (x1 != 0)
    {
        digitos++;
        x1 = (int)x1 / 10;
    }
    if (digitos > 5)
    {
        printf("NUMERO INVALIDO \n");
    }
    else
    {
        switch (digitos)
        {
        case 5:
            alg5 = (int)x / 10000;
            x = x % 10000;
            alg4 = (int)x / 1000;
            x = x % 1000;
            alg3 = (int)x / 100;
            x = x % 100;
            alg2 = (int)x / 10;
            alg1 = x % 10;
            x = alg1 * 10000 + alg2 * 1000 + alg3 * 100 + alg4 * 10 + alg5;
            break;
        case 4:
            alg4 = (int)x / 1000;
            x = x % 1000;
            alg3 = (int)x / 100;
            x = x % 100;
            alg2 = x / 10;
            alg1 = x % 10;
            x = alg1 * 1000 + alg2 * 100 + alg3 * 10 + alg4;
            break;
        case 3:
            alg3 = (int)x / 100;
            x = x % 100;
            alg2 = (int)x / 10;
            alg1 = x % 10;
            x = alg1 * 100 + alg2 * 10 + alg3;
            break;
        case 2:
            alg2 = (int)x / 10;
            alg1 = x % 10;
            x = alg1 * 10 + alg2;
            break;
        case 1:
            alg1 = x % 10;
            x = alg1;
            break;
        }
        if (x2 == x)
        {
            printf("PALINDROMO \n");
        }
        else
        {
            printf("NAO PALINDROMO \n");
        }
    }

}