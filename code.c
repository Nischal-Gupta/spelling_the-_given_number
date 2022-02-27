#include <stdio.h>
#include <conio.h>
#include "functions.c"
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n >= 10000000)
    {
        int t = n / 10000000;
        if (t >= 10)
        {
            if (t >= 20 || t == 10)
            {
                int a = t / 10;
                tenth(a);
                int b = t % 10;
                if (b != 0)
                {
                    ones(b);
                }
            }
            else
            {
                tens(t);
            }
        }
        else
        {
            ones(t);
        }
        printf("Crores ");
    }
    n = n % 10000000;
    if (n >= 100000)
    {
        int t = n / 100000;
        if (t >= 10)
        {
            if (t >= 20 || t == 10)
            {
                int a = t / 10;
                tenth(a);
                int b = t % 10;
                if (b != 0)
                {
                    ones(b);
                }
            }
            else
            {
                tens(t);
            }
        }
        else
        {
            ones(t);
        }
        printf("Lakhs ");
    }
    n = n % 100000;
    if (n >= 1000)
    {
        int t = n / 1000;
        if (t >= 10)
        {
            if (t >= 20 || t == 10)
            {
                int a = t / 10;
                tenth(a);
                int b = t % 10;
                if (b != 0)
                {
                    ones(b);
                }
            }
            else
            {
                tens(t);
            }
        }
        else
        {
            ones(t);
        }
        printf("Thousand ");
    }
    n = n % 1000;
    if (n >= 100)
    {
        int t = n / 100;
        ones(t);
        printf("Hundred ");
    }
    n = n % 100;
    if (n >= 1)
    {
        if (n >= 10)
        {
            if (n >= 20 || n == 10)
            {
                int a = n / 10;
                tenth(a);
                int b = n % 10;
                if (b != 0)
                {
                    ones(b);
                }
            }
            else
            {
                tens(n);
            }
        }
        else
        {
            ones(n);
        }
    }
    getch();
    return 0;
}