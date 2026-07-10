#include <stdio.h>

void recursion(int n, int i)
{

    if (n < i)
    {
        return;
    }

    recursion(n, i + 1);
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {

        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    recursion(n, 1);
}