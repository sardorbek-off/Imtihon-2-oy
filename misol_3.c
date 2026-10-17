#include <stdio.h>

int katta(int son1, int son2)
{
    if (son1 > son2)
    {
        return son1;
    }
    return son2;
}

int main(void)
{
    int son1, son2;
    scanf("%d %d", &son1, &son2);

    int natija = katta(son1, son2);
    printf("Katta son: %d\n", natija);
}
