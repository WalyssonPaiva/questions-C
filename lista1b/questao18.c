#include <stdio.h>

main()
{
    int a, b, c, a1, b1, c1;
    char A, B, C;
    scanf("%d %d %d\n", &a1, &b1, &c1);
    scanf("%c%c%c", &A, &B, &C);

    if (a1 > b1 && a1 > c1)
    {
        c = a1;
        if (b1 > c1)
        {
            a = c1;
            b = b1;
        }
        else
        {
            a = b1;
            b = c1;
        }
    }
    //caso a1 for a que todos ele vai entrar aqui
    else if (a1 < b1 && a1 < c1)
    {
        a = a1;
        if (b1 > c1)
        {
            b = c1;
            c = b1;
        }
        else
        {
            b = b1;
            c = c1;
        }
    }
    //se a1 é o numero do meio, vamos descobrir qual dos dois é o c e o a
    else if (c1 > b1)
    {
        c = c1;
        a = b1;
        b = a1;
    }
    else
    {
        b = a1;
        a = c1;
        c = b1;
    }
    //letras
    if (A == 'A' && B == 'B' && C == 'C')
    {
        printf("%d\t%d\t%d\n", a, b, c);
    }
    else if (A == 'A' && B == 'C' && C == 'B')
    {
        printf("%d\t%d\t%d\n", a, c, b);
    }
    else if (A == 'B' && B == 'A' && C == 'C')
    {
        printf("%d\t%d\t%d\n", b, a, c);
    }
    else if (A == 'B' && B == 'C' && C == 'A')
    {
        printf("%d\t%d\t%d\n", b, c, a);
    }
    else if (A == 'C' && B == 'A' && C == 'B')
    {
        printf("%d\t%d\t%d\n", c, a, b);
    }
    else if (A == 'C' && B == 'B' && C == 'A')
    {
        printf("%d %d %d\n", c, b, a);
    }
}