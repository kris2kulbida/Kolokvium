#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int N = 0;
    int a = get_int("A:");
    int b = get_int("B:");
    for (int k = 0; a < b - 1; k++)
    {
      a++;
      printf("%d\n", a);
      N++;
    }
    printf("N = %d\n", N);
}
