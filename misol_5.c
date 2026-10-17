#include <stdio.h>
#include <string.h>

int main()
{
    char soz[100];
    scanf("%s", soz);

    size_t uzunlik = strlen(soz);
    printf("Uzunligi: %d\n", uzunlik);
}
