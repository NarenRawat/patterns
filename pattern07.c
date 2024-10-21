/*
Input: 5

Output:
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

#include <stdio.h>

void pattern(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");
    pattern(n);

    return 0;
}

void pattern(int n)
{
    printf("%*c\n", n, '*');
    for (int i = 1; i <= n - 1; i++)
    {
        printf("%*c%*c\n", n - i, '*', 2 * i, '*');
    }
    for (int i = n - 2; i >= 1; i--)
    {
        printf("%*c%*c\n", n - i, '*', 2 * i, '*');
    }
    printf("%*c\n", n, '*');
}
