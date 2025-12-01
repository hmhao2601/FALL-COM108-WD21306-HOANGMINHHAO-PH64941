// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void kiemTraSoNguyen()
{
    int chon, x;
    do {
        printf("Nhap x: ");
        scanf_s("%d", &x );

        printf("%d la so nguyen.\n", x);

        // So Nguyen
        int soNguyen = 1;
        if (x < 2) soNguyen = 0;
        for (int i = 2; i <= sqrt(x); i++)
            if (x % i == 0) soNguyen = 0;

        printf("%d %s so nguyen to.\n", x, soNguyen ? "la" : "khong la");

        // Chinh phuong
        int k = sqrt(x);
        printf("%d %s so chinh phuong.\n", x, (k * k == x) ? "la" : "khong la");

        printf("Tiep tuc? [1|khac]: ");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void uocChungBoiChung()
{
	int chon, x, y, a, b;
    do {
        printf("Nhap x: "); scanf_s("%d", &x);
        printf("Nhap y: "); scanf_s("%d", &y);

        a = x;
        b = y;

        while (b != 0) {     // tính UCLN
            int t = a % b;
            a = b;
            b = t;
        }

        printf("UCLN = %d\n", a);
        printf("BCNN = %d\n", (x * y) / a);

        printf("Tiep tuc chuong trinh [1|khac]: ");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
void tinhTienKaraoke() {
	int chon, gioBD, gioKT;
	double tien;
    do {
        printf("Nhap gio bat dau (12-23): "); scanf_s("%d", &gioBD);
        printf("Nhap gio ket thuc (12-23): "); scanf_s("%d", &gioKT);

        if (gioBD < 12 || gioKT > 23 || gioKT <= gioBD) {
            printf("Gio khong hop le!\n");
        }
        else {
            int gio = gioKT - gioBD;

            if (gio <= 3) tien = 150000;
            else tien = 150000 + (gio - 3) * 50000 * 0.7;

            if (gioBD >= 14 && gioBD <= 17) tien *= 0.9;

            printf("Tien can thanh toan: %.0lf VND\n", tien);
        }

        printf("Tiep tuc chuong trinh [1|khac]: ");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//---------------------------------
void tinhTienDien()
{
    int chon, kwh;
    double tien;
    do {
        printf("Nhap so kWh su dung: ");
        scanf_s("%d", &kwh);

        if (kwh < 0) {
            printf("So kWh khong hop le!\n");
        }
        else if (kwh <= 50) {
            tien = kwh * 1678;
        }
        else if (kwh <= 100) {
            tien = 50 * 1678 + (kwh - 50) * 1734;
        }
        else if (kwh <= 200) {
            tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
        }
        else if (kwh <= 300) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
        }
        else if (kwh <= 400) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
        }
        else {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;                
         
        }

        printf("So tien phai tra: %.0lf VND\n", tien);
                                 
        printf("Tiep tuc chuong trinh [1|khac]: ");
        scanf_s("%d", &chon);

    } while (chon == 1);
}
//------------------------------------
void doiTien()
{
	int chon, tien;
    int menhGia[] = { 500,200,100,50,20,10,5,2,1 };
    do {
        printf("Nhap so tien can doi: ");
        scanf_s("%d", &tien);

        printf("Cac menh gia:\n");
        for (int i = 0; i < 9; i++)
        {
            if (tien >= menhGia[i])
            {
                int soTo = tien / menhGia[i];
                tien = tien % menhGia[i];
                printf("%d to %d\n", soTo, menhGia[i]);
            }
        }

        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//----------------------------------------\

void tinhLaiXuatNganHang()
{
    int chon;
    do {
        double soTienVay;
        printf("Nhap so tien muon vay: ");
        scanf_s("%lf", &soTienVay);

        double laiSuat = 0.05; // 5% / tháng
        int kyHan = 12;
        double gocMoiThang = soTienVay / kyHan;
        double soTienConLai = soTienVay;

        printf("\n%-5s %-15s %-15s %-18s %-15s\n",
            "Ky", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");

        for (int i = 1; i <= kyHan; i++) {
            double laiPhaiTra = soTienConLai * laiSuat;
            double soTienPhaiTra = gocMoiThang + laiPhaiTra;
            soTienConLai -= gocMoiThang;

            printf("%-5d %-15.0f %-15.0f %-18.0f %-15.0f\n",
                i, laiPhaiTra, gocMoiThang, soTienPhaiTra, soTienConLai);
        }
        printf("Tiep uc chuong trinh [1|khac]: \n");
        scanf_s("%d", &chon);
    } while (chon == 1);
}
//----------------------------------------------
void vayTien()
{
    int chon;
    do {
        double soTienXe = 500000000;  // 500 tri?u VN?
        double tyLeVay;
        printf("Nhap ty le vay toi da (0-100): ");
        scanf_s("%lf", &tyLeVay);

        if (tyLeVay <= 0 || tyLeVay > 100) {
            printf("Ty le khong hop le!\n");
            continue;
        }

        double tienVay = soTienXe * tyLeVay / 100;
        double tienTraTruoc = soTienXe - tienVay;
        int thoiHanNam = 24;
        double laiSuatNam = 0.072;  // 7.2% / n?m
        int soThang = thoiHanNam * 12;
        double gocMoiThang = tienVay / soThang;

        printf("\nTien tra truoc: %.0lf VND\n", tienTraTruoc);
        printf("Ky\tLai phai tra\tGoc phai tra\tTong phai tra\tCon lai\n");

        double conLai = tienVay;
        for (int i = 1; i <= soThang; i++) {
            double laiThang = conLai * (laiSuatNam / 12); // lãi tháng
            double tongThang = gocMoiThang + laiThang;
            conLai -= gocMoiThang;

            printf("%d\t%.0lf\t\t%.0lf\t\t%.0lf\t\t%.0lf\n",
                i, laiThang, gocMoiThang, tongThang, conLai);
        }
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