#include <stdio.h>

void recursion(int n, int i)
{
    if (i  > n)
    {
        return;
    }

    recursion(n, i + 1);
    printf("%d ", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    recursion(n, 1);

    return 0;
}