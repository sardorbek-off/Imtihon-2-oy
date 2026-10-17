#include <stdio.h>
#include <string.h>

struct Mahsulot
{
    char nomi[50];
    int narxi;
    int soni;
};

int main(void)
{
    struct Mahsulot mahsulotlar[5];
    char qidiruvdagi_maxsulot[50];
    int eng_qimmat_indeks = 0;

    for (int i = 0; i < 5; i++)
    {
        if (scanf("%49s %d %d", mahsulotlar[i].nomi,
                  &mahsulotlar[i].narxi, &mahsulotlar[i].soni) != 3)
        {
            return 1;
        }

        if (mahsulotlar[i].narxi > mahsulotlar[eng_qimmat_indeks].narxi)
        {
            eng_qimmat_indeks = i;
        }
    }

    if (scanf("%49s", qidiruvdagi_maxsulot) != 1)
    {
        return 1;
    }

    FILE *fayl = fopen("mahsulotlar.txt", "w");
    if (fayl == NULL)
    {
        return 1;
    }

    int foundIndex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (fprintf(fayl, "%s %d %d\n", mahsulotlar[i].nomi,
                    mahsulotlar[i].narxi, mahsulotlar[i].soni) < 0)
        {
            foundIndex = 1;
            break;
        }
    }

    if (!foundIndex &&
        fprintf(fayl, "Eng qimmat: %s %d %d\n",
                mahsulotlar[eng_qimmat_indeks].nomi,
                mahsulotlar[eng_qimmat_indeks].narxi,
                mahsulotlar[eng_qimmat_indeks].soni) < 0)
    {
        foundIndex = 1;
    }

    if (fclose(fayl) == EOF)
    {
        foundIndex = 1;
    }

    if (foundIndex)
    {
        return 1;
    }

    int topildi = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(mahsulotlar[i].nomi, qidiruvdagi_maxsulot) == 0)
        {
            printf("Mahsulot topildi!\n");
            printf("Nomi: %s\n", mahsulotlar[i].nomi);
            printf("Narxi: %d\n", mahsulotlar[i].narxi);
            printf("Soni: %d\n\n", mahsulotlar[i].soni);
            topildi = 1;
            break;
        }
    }

    if (!topildi)
    {
        printf("Mahsulot topilmadi!\n\n");
    }

    printf("Ma'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
}
