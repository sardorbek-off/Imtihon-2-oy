#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);

	int *pointer = &x;
	*pointer = 25;

	printf("Yangi qiymat: %d\n", x);
}
