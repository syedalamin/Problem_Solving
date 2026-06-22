#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  int primary_diagonal = 0;
  int secondary_diagonal = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {

      if (i == j)
      {
        primary_diagonal += arr[i][j];
      }

      if (i + j == n - 1)
      {
        secondary_diagonal += arr[i][j];
      }
    }
  }
  int ans = primary_diagonal - secondary_diagonal;
  printf("%d\n", abs(ans));
}