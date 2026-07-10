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

    int left = 0;
    int right = n - 1;

    int result[n];
    while (left <= right)
    {
        if (left == right)
        {
            printf("%d", arr[left]);
            break;
        }

        printf("%d %d ", arr[left], arr[right]);
        left++;
        right--;
    }

   
}