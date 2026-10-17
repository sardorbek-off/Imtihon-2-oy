#include <stdio.h>

struct talaba
{
    char ism[20];
    int yosh;
    int ball;
};

int main()
{
    struct talaba t;

    scanf("%s", t.ism);

    scanf("%d", &t.yosh);

    scanf("%d", &t.ball);

    printf("Talaba ismi: %s\n", t.ism);
    printf("Yosh: %d\n", t.yosh);
    printf("Balli: %d\n", t.ball);
}
