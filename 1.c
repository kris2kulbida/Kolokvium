#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int  n;

    do
    {
        n = get_int("N: ");
    }
    while (n <= 0);


    for(int i=1; i <= n; i++)
    {
        int k = i*i;

        if(k == n)
        {
            printf("%i\n", i);
            break;
        }
        else if(k > n)
        {
            printf("%i\n", i - 1);
            break;
        }
    }
}