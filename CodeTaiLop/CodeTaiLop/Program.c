// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

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
//}
//  

 /*int main() 
 {
 int y[3] = { 1,2,3 };
 y[1] = 9;
 for (int i = 0; i < 3; i++)
 {
	 printf("%d ", y[i]);
 }*/

 
 int main() {
     int n;

     // Nhập số lượng phần tử
     printf("Nhap so luong phan tu: ");
     scanf_s("%d", &n);

     // Khai báo mảng với n phần tử
     int a[n];

     // Nhập giá trị cho từng phần tử
     for (int i = 0; i < n; i++) {
         printf("Nhap phan tu a[%d]: ", i);
         scanf_s("%d", &a[i]);
     }

     // In các phần tử
     printf("\nCac phan tu vua nhap: ");
     for (int i = 0; i < n; i++) {
         printf("%d ", a[i]);
     }

     // Tính tổng mảng
     int tong = 0;
     for (int i = 0; i < n; i++) {
         tong += a[i];
     }

     printf("\nTong cac phan tu = %d\n", tong);

     return 0;
 }

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184