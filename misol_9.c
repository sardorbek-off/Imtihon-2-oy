#include <stdio.h>

int katta(int a[3][3]){
    int max = a[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }
        }
    }

    return max;
}

int main(){
    int a[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matritsa:\n");

    for (int i = 0; i < 3; i++){
        int sum = 0;

        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }

        printf("\n");
    }

    printf("\nEng katta element: %d\n", katta(a));

    for (int i = 0; i < 3; i++){
        int sum = 0;

        for (int j = 0; j < 3; j++){
            sum += a[i][j];
        }

        printf("%d-satr yig'indisi: %d\n", i + 1, sum);
    }
}
