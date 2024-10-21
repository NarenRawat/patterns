/*
Input: 5

Output:
    1
   12
  123
 1234
12345
*/

#include <stdio.h>

void pattern_iter(int);
void pattern_recur(int, int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nIteratively:\n");
    pattern_iter(n);

    printf("\nRecursively:\n");
    pattern_recur(n, 1);

    return 0;
}

void pattern_iter(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%*d", n - i + 1, 1);

        for (int j = 2; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern_recur(int n, int space)
{
    if (n > 1)
    {
        pattern_recur(n - 1, space + 1);
    }

    printf("%*d", space, 1);
    for (int i = 2; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");
}