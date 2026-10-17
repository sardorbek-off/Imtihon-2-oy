#include <stdio.h>

int main()
{
    int sonlar[2][3];
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &sonlar[i][j]);
            sum += sonlar[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sonlar[i][j]);
        }
        printf("\n");
    }

    printf("Yigindi: %d\n", sum);
}
