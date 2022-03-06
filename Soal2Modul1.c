#include <stdio.h>

float phi = 3.14;
void segitiga_sembarang();
void belah_ketupat();
void jajar_genjang();
void trapesium();
void lingkaran();

main()
{
	int list; menu:
	printf("-> PROGRAM MENGHITUNG LUAS DAN KELILING BANGUN-BANGUN DATAR MODUL 1 SOAL 2 <- \n");
	printf("============================================================================= \n");
	printf("Silakan Tentukan Fungsi Yang Akan Dicari! \n");
	printf(" 1. Segitiga Sembarang\n 2. Belah Ketupat\n 3. Jajar Genjang\n 4. Trapesium\n 5. Lingkaran\n 0. Keluar dan Selesai\n");
	printf("Masukkan Pilihan Anda (0/1/2/3/4/5): ");
	scanf("%d", &list);
	printf("***************************************** \n");
	printf("\n");

switch(list)
{
	case 1: segitiga_sembarang(); goto menu; break;
	case 2: belah_ketupat(); goto menu; break;
	case 3: jajar_genjang(); goto menu; break;
	case 4: trapesium(); goto menu; break;
	case 5: lingkaran(); goto menu; break;
	case 0: printf("Terima Kasih! Created by Kelompok 18 :)"); break;
	default:
		printf("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n"); 
		printf("**************************************** \n");
		printf("\n"); goto menu; break;
	}
}

void segitiga_sembarang() {
float a, b, c, s, luas, keliling;
printf("Menghitung Luas & Keliling Segitiga Sembarang \n");
printf("Masukkan Angka: \n");
printf("\t Sisi A: ");
	scanf("%f", &a);
printf("\t Sisi B: ");
	scanf("%f", &b);
printf("\t Sisi C: ");
	scanf("%f", &c);
printf("\n");
s = (a+b+c)/2;
printf("Semiperimeter = (a + b + c) / 2 \n");
printf("Semiperimeter = %.2f \n", s);
printf("\n");
luas = sqrt(s)*sqrt(s-a)*sqrt(s-b)*sqrt(s-c);
printf("Luas Segitiga Sembarang = vs(s-a)(s-b)(s-c) \n");
printf("Luas Segitiga Sembarang = %.2f \n", luas);
printf("\n");
keliling = a+b+c;
printf("Keliling Segitiga Sembarang = a + b + c \n");
printf("Keliling Segitiga Sembarang = %.2f \n", keliling);
printf("*************************************** \n");
printf("\n");
}

void belah_ketupat() {
float a, t, s, luas, keliling;
printf("Menghitung Luas & Keliling Belah Ketupat \n");
printf("Masukkan Angka: \n");
printf("\t Alas: "); 
		scanf("%f", &a);
printf("\t Tinggi: "); 
		scanf("%f", &t);
printf("\t Sisi: "); 
		scanf("%f", &s);
printf("\n");
luas = a*t;
printf("Luas Belah Ketupat = a x t \n");
printf("Luas Belah Ketupat = %.2f \n", luas);
printf("\n");
keliling = 4*s;
printf("Keliling Belah Ketupat = 4 x Sisi \n");
printf("Keliling Belah Ketupat = %.2f \n", keliling);
printf("*************************************** \n");
printf("\n");
}

void jajar_genjang() {
float a, t, b, c, luas, keliling;
printf("Menghitung Luas & Keliling Jajar Genjang \n");
printf("Masukkan Angka: \n");
printf("\t Alas: ");
	scanf("%f", &a);
printf("\t Tinggi: ");
	scanf("%f", &t);
printf("\t Sisi B: ");
	scanf("%f", &b);
printf("\t Sisi C: ");
	scanf("%f", &c);
printf("\n");
luas = a*t;
printf("Luas Jajar Genjang = a x t \n");
printf("Luas Jajar Genjang = %.2f \n", luas);
printf("\n");
keliling = 2*(b+c);
printf("Keliling Jajar Genjang = 2 x (b + c) \n");
printf("Keliling Jajar Genjang = %.2f \n", keliling);
printf("*************************************** \n");
printf("\n");
}

void trapesium() {
float a, b, c, d, x, y, t, luas, keliling;
printf("Menghitung Luas & Keliling Trapesium \n");
printf("Masukkan Angka: \n");
printf("\t Sisi A: ");
	scanf("%f", &a);
printf("\t Sisi B: ");
	scanf("%f", &b);
printf("\t Sisi C: ");
	scanf("%f", &c);
printf("\t Sisi D: ");
	scanf("%f", &d);
printf("\t Sisi X: ");
	scanf("%f", &x);
printf("\t Sisi Y: ");
	scanf("%f", &y);
printf("\t Sisi Tinggi: ");
	scanf("%f", &t);
printf("\n");
luas = ((x+y)*t)/2;
printf("Luas Trapesium = ((x + y) x t) / 2 \n");
printf("Luas Trapesium = %.2f \n", luas);
printf("\n");
keliling = a+b+c+d;
printf("Keliling Trapesium = a + b + c + d \n");
printf("Keliling Trapesium = %.2f \n", keliling);
printf("*************************************** \n");
printf("\n");
}

void lingkaran() {
float r, luas, keliling;
printf("Menghitung Luas & Keliling Lingkaran \n");
printf("Masukkan Angka: \n");
printf("\t Jari-Jari: ");
	scanf("%f", &r);
printf("\n");
luas = phi*r*r;
printf("Luas Lingkaran = Phi x r x r \n");
printf("Luas Lingkaran = %.2f \n", luas);\
printf("\n");
keliling = 2*phi*r;
printf("Keliling Lingkaran = 2 x Phi x r \n");
printf("Keliling Lingkaran = %.2f \n", keliling);
printf("*************************************** \n");
printf("\n");
}
