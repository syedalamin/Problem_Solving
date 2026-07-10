#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int operation = 0;

    while (1)
    {

        int even = 1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                even = 0;
                break;
            }
        }

        if (even == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
        }

        operation++;
    }

    printf("%d", operation);
}