/*
Input: 5

Output:
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
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
    int num;
    int loop_ctrl;
    int iterations = 2 * n - 1;

    for (int i = 0; i < iterations; i++)
    {
        num = n;
        loop_ctrl = (i >= n) ? (iterations - i - 1) : i;

        for (int j = 0; j < iterations; j++)
        {
            printf("%d ", num);

            if (j < loop_ctrl)
            {
                num--;
            }
            else if (j >= (iterations - loop_ctrl - 1))
            {
                num++;
            }
        }
        printf("\n");
    }
}