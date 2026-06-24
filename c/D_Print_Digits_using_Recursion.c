#include <stdio.h>

void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    int last = n % 10;
    int mod = n / 10;

    rec(mod);
    printf("%d ", last);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        rec(n);
        printf("\n");
    }

    return 0;
}