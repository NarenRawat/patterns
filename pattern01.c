/*
Input: 5

Output:
12345
23451
34512
45123
51234
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k < i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}
