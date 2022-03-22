#include <stdio.h>
#include <stdlib.h>

float phi = 3.14;
void segitiga_sembarang();
void belah_ketupat();
void jajar_genjang();
void trapesium();
void lingkaran();
void koreksi();
int validasi();
int check();
char ulang;

int main() {
	do {

	int list; menu:
	printf("-> PROGRAM MENGHITUNG LUAS DAN KELILING BANGUN-BANGUN DATAR MODUL 1 SOAL 2 <- \n");
	printf("============================================================================= \n");
	printf("Silakan Tentukan Fungsi Yang Akan Dicari! \n");
	printf(" 1. Segitiga Sembarang\n 2. Belah Ketupat\n 3. Jajar Genjang\n 4. Trapesium\n 5. Lingkaran\n 0. Keluar dan Selesai\n");
	koreksi(&list,"Masukkan Pilihan Anda (0/1/2/3/4/5): ");
	printf("***************************************** \n");
	printf("\n");
	system("cls | clear");


	switch(list) {
		case 1: segitiga_sembarang(); break;
		case 2: belah_ketupat(); break;
		case 3: jajar_genjang(); break;
		case 4: trapesium(); break;
		case 5: lingkaran(); break;
		case 0: printf("Terima Kasih! Created by Kelompok 18 :)"); break;
		default:
			printf("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n"); 
			printf("**************************************** \n");
			printf("\n"); break;
	}
	printf ("Ingin mencoba untuk menginput kembali? (Y/T): "); 
			scanf("%s", &ulang);
		system("cls | clear");
	}
	while (ulang=='Y' || ulang=='y');
		printf ("Terimakasih! Silakan tekan enter untuk keluar! \n");
	
	return 0;
}

void segitiga_sembarang() {
	float a, b, c, s, luas, keliling;
	printf("Menghitung Luas & Keliling Segitiga Sembarang \n");
	printf("Masukkan Angka: \n");
	printf("\t Sisi A: "); a=validasi();
	printf("\t Sisi B: "); b=validasi();
	printf("\t Sisi C: "); c=validasi();
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
	printf("\t Alas: "); a=validasi();
	printf("\t Tinggi: "); t=validasi();
	printf("\t Sisi: "); s=validasi();
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
	printf("\t Alas: "); a=validasi();
	printf("\t Tinggi: "); t=validasi();
	printf("\t Sisi B: "); b=validasi();
	printf("\t Sisi C: "); c=validasi();
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
	printf("\t Sisi A: "); a=validasi();
	printf("\t Sisi B: "); b=validasi();
	printf("\t Sisi C: "); c=validasi();
	printf("\t Sisi D: "); d=validasi();
	printf("\t Sisi X: "); x=validasi();
	printf("\t Sisi Y: "); y=validasi();
	printf("\t Tinggi: "); t=validasi();
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
	printf("\t Jari-Jari: "); r=validasi();
	printf("\n");
	luas = phi*r*r;
		printf("Luas Lingkaran = Phi x r x r \n");
		printf("Luas Lingkaran = %.2f \n", luas);
	printf("\n");
	keliling = 2*phi*r;
		printf("Keliling Lingkaran = 2 x Phi x r \n");
		printf("Keliling Lingkaran = %.2f \n", keliling);
	printf("*************************************** \n");
	printf("\n");
}

int check(int *var) {
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

//Validasi Inputan Angka
void koreksi(int *var, char *prompt) {
	while(1){
		printf("%s", prompt);
		if(check(var))
			break;
		printf("Hanya Menerima Input Berupa ANGKA! \n");
		printf("\n");
	}
}

int validasi() {
	float angka;
    char karakter;
    scanf("%f%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("Hanya Menerima Input Berupa ANGKA! \n\n");
        printf("Masukkan Ulang Angka: ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
