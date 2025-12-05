
#include <stdio.h>
#include <string.h>

void demoString()
{ 
    // string
   /* char name[10] = { 'A', 'n','h' };
    for (int i = 0; i < 10 ; i++)
    {
        scanf_s(" %c", &name[i]);
    }*/
    char mangKyTu[50] = { 'A', 'n','h' };
	while (getchar() != '\n');   // doc het cac ky tu cho den khi gap newline
	printf("Nhap ten cua ban: ");
	fgets(mangKyTu, sizeof(mangKyTu), stdin);
    // Xuat du lieu = for + printf
   /* for (int i = 0; i < 10; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");*/
	printf("%s", mangKyTu);
	printf("\n");
    //puts(name);

    printf("String Length: ");
    printf("%d", strlen(mangKyTu) - 1);
	printf("\n");
    printf("String Compare The Same As; ");
    printf("%d", strcmp("aBc", "aBc"));
	printf("\n");
	printf("String Compare Less than: ");
    printf("%d", strcmp("A", "C"));
	printf("\n");
	printf("String Compare Great than: ");
    printf("%d", strcmp("A", "C"));
	printf("\n");
    printf("String Reverse (Encryption: ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Reverse (Decryption: ");
    printf("%d", strrev("A", "C"));
    printf("\n");
    printf("String Lower: ");
    printf("%s", strlwr(mangKyTu));
    printf("\n");
    printf("String Upper: ");
    printf("%s", strupr(mangKyTu));
    printf("\n");
	printf("Find String in String: ");
    if (strstr(mangKyTu, "A") != NULL)
    {
        printf("Found: ");
        printf("%s", strstr(mangKyTu, "A"));
    }
    else
    {
        printf("Not Found");
    }
	printf("\n");
}
void demoMang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("mang[%d][%d] = ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }

    printf("Mang 2 chieu vua nhap:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

 /*Hàm kiểm tra số nguyên (ví dụ minh họa)*/
void kiemTraSoNguyen()
{
    int n;
    printf("Nhap mot so nguyen: ");
    scanf_s("%d", &n);
    if (n % 2 == 0)
        printf("%d la so chan.\n", n);
    else
        printf("%d la so le.\n", n);
}

// Hàm lặp chức năng
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;

    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            demoMang2Chieu();
            break;
        case 3:
            demoString();
            break;
        //case 0:
        //    return; // thoát hàm lặp
        default:
            printf("Vui long chon lai [0-2]\n");
        }

        printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
        scanf_s("%d", &tiepTuc);
        system("cls"); // xóa màn hình (Windows)
    }
}

int main()
{
    int chonChucNang;

    do
    {
        printf("MENU CHINH\n");
        printf("1. Lap chuc nang\n");
        printf("2. Demo Mang 2 Chieu\n");
        printf("3. Demo String\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang != 0) {
            lapChucNang(chonChucNang);
        }
    } while (chonChucNang != 0);
}
   