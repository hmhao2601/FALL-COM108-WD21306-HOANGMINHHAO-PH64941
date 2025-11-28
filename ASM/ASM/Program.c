// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemTraSoNguyen()
{
    int chon;
    do {
        printf("Thuc thi so nguyen: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void uocChungBoiChung()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void tinhTienKaraoke() {
    int chon;
    do {
        printf("Thuc thi so nguyen: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//---------------------------------
void tinhTienDien()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//------------------------------------
void doiTien()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//----------------------------------------\

void tinhLaiXuatNganHang()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//----------------------------------------------
void vayTien()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//----------------------------------------
void sapXepSV()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//-----------------------------------------------
void Game()
{
    int chon;
    do {
        printf("Thuc thi boi uoc: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//------------------------------------------------
void TTPS()
{
    int chon;
    do {
        printf("Thuc thi tinh toan: \n");
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
    
}
int main()
{
    int chonChucnang;

    do
    {
        printf("===== MENU =====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Uoc chung / Boi chung cua 2 so\n");
        printf("3. Tinh tien quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin nhan vien\n");
        printf("9. Xay dung game Fpoly-Lott\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Moi ban chon chuc nang: ");

        scanf_s("%d", &chonChucnang);

        switch (chonChucnang)
        {
        case 1:
            kiemTraSoNguyen();
            break;

        case 2:
            uocChungBoiChung();
            break;
        case 3:
            tinhTienKaraoke();
            break;

        case 4:
            doiTien();
            break;

        case 5:
            tinhLaiXuatNganHang();
            break;

        case 6:
            tinhLaiXuatNganHang();
            break;

        case 7:
            vayTien();
            break;

        case 8:
            sapXepSV();
            break;

        case 9:
            Game();
            break;

        case 10:
            TTPS();
            break;

        case 0:
            printf("Thoat chuong trinh...\n"); break;

        default:
            printf("Lua chon khong hop le. Moi ban chon lai!\n");
        }

        printf("\n");

    } while (chonChucnang != 0);

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