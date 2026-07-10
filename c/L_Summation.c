#include <stdio.h>

long long int summation = 0;
long long int sum(int arr[], int n, int i)
{
    if (n <= i)
    {
        return 0;
    }

    summation += arr[i];

    sum(arr, n, i + 1);

    return summation;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int summ = sum(arr, n, 0);
    printf("%lld", summ);
}