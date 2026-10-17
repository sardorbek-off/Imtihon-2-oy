#include <stdio.h>

int main()
{
    int sonlar[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sonlar[i]);
        sum += sonlar[i];
    }

    printf("Yigindi: %d\n", sum);
}
