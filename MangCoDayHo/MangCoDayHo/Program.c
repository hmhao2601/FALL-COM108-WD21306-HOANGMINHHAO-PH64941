
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int y[10];
    int tong = 0;
    printf("Khai bao phan tu: ");
	scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("y[%d]= ", i);
        scanf_s("%d", &y[i]);
    }

    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", y[i]);
		tong += y[i];
    }
	printf("\nTong cac phan tu trong mang: %d", tong);
}
        


