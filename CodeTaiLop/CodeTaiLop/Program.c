
#include <stdio.h>
//void kiemTraSoNguyen()
//{
//
//}
//void lapChucNang(int chonChucNang)
//{
//    int tiepTuc = 1;
//    while (tiepTuc == 1)
//    {
//        switch (chonChucNang)
//        {
//        case 1: kiemTraSoNguyen();
//            break;
//        case 2: // goi ham o day
//            break;
//        case 0: 
//            return;
//        default: 
//            printf("chon lai [0-3]");
//            break;
//      }
//        printf("Ban co muon tiep tuc khong? (1: Co, 0: Khong): ");
//		scanf_s("%d", &tiepTuc);
//		system("cls"); // clear sreen
//    }
//
//}
// int main()
//{
//    int chonChucNang;
//    do
//    { 
//        printf("MENU\n");
//		printf("1. Kiem tra so nguyen\n");
//		printf("2. Chuc nang 2\n");
//		printf("0. Thoat\n");
//        scanf_s("%d", &chonChucNang);
//        if (chonChucNang < 0 || chonChucNang > 2)
//        {
//            printf("Chon lai chuc nang!\n");
//        
//		}
//        while (chonChucNang != 0);
//    }
//    
//
////}

int main()
{
	char ten[50];
	printf("Nhap ten cua ban: ");
	puts(ten);
	gets(ten);/*fgets(ten, sizeof(ten), stdin);*/
	
	printf("Xin chao, %s!\n", ten);
}