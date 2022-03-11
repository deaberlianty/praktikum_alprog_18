#include <stdio.h>

float phi = 3.14;
int tabung();
int bola();
int limas_segiempat();
int prisma_segitiga();
int kerucut();

int main()
{
	int list; menu:
	printf("-> PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BANGUN-BANGUN RUANG MODUL 1 SOAL 3 <- \n");
	printf("===================================================================================== \n");
	printf("Silakan Tentukan Fungsi Yang Akan Dicari! \n");
	printf(" 1. Tabung\n 2. Bola\n 3. Limas Segiempat\n 4. Prisma Segitiga\n 5. Kerucut\n 0. Keluar dan Selesai\n");
	printf("Masukkan Pilihan Anda (0/1/2/3/4/5): ");
	scanf("%d", &list);
	printf("***************************************** \n");
	printf("\n");

switch(list)
{
	case 1: tabung(); goto menu; break;
	case 2: bola(); goto menu; break;
	case 3: limas_segiempat(); goto menu; break;
	case 4: prisma_segitiga(); goto menu; break;
	case 5: kerucut(); goto menu; break;
	case 0: printf("Terima Kasih! Created by Kelompok 18 :)"); break;
	default:
		printf("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n"); 
		printf("**************************************** \n");
		printf("\n"); goto menu; break;
	}
}

int tabung() {
	float r, t, volume, luas_permukaan;
	printf("Menghitung Volume & Luas Permukaan Bola \n");
	printf("Masukkan Angka: \n");
	printf("\t Jari-Jari: ");
		scanf("%f", &r);
	printf("\t Tinggi: ");
		scanf("%f", &t);
	printf("\n");
	volume = phi*r*r*t;
	printf("Volume Tabung = Phi x r x r x t \n");
	printf("Volume Tabung = %.2f \n", volume);
	printf("\n");
	luas_permukaan = 2*r*t*(r+t);
	printf("Luas Permukaan Tabung = 2 x r x t x (r + t) \n");
	printf("Luas Permukaan Tabung = %.2f \n", luas_permukaan);
	printf("*************************************** \n");
	printf("\n");
	return 0;
}

int bola() {
	float r, volume, luas_permukaan;
	printf("Menghitung Volume & Luas Permukaan Bola \n");
	printf("Masukkan Angka: \n");
	printf("\t Jari-Jari: "); 
		scanf("%f", &r);
	printf("\n");
	volume = 4*phi*(r*r*r)/3;
	printf("Volume Bola = 4 x Phi x (r x r x r) / 3 \n");
	printf("Volume Bola = %.2f \n", volume);
	printf("\n");
	luas_permukaan = 4*phi*(r*r);
	printf("Luas Permukaan Bola = 4 x Phi x (r x r) \n");
	printf("Luas Permukaan Bola = %.2f \n", luas_permukaan);
	printf("*************************************** \n");
	printf("\n");
	return 0;
}

int limas_segiempat() {
	float a, t, s, volume, luas_permukaan;
	printf("Menghitung Volume & Luas Permukaan Limas Segiempat \n");
	printf("Masukkan Angka: \n");
	printf("\t Alas: ");
		scanf("%f", &a);
	printf("\t Tinggi: ");
		scanf("%f", &t);
	printf("\t Sisi: ");
		scanf("%f", &s);
	printf("\n");
	volume = 1*(a*t)/3;
	printf("Volume Limas Segiempat = 1 x (a x t) / 3 \n");
	printf("Volume Limas Segiempat = %.2f \n", volume);
	printf("\n");
	luas_permukaan = a*(4*s);
	printf("Luas Permukaan Limas Segiempat = a x (4 x s) \n");
	printf("Luas Permukaan Limas Segiempat = %.2f \n", luas_permukaan);
	printf("*************************************** \n");
	printf("\n");
	return 0;
}

int prisma_segitiga() {
	float a, t, s, volume, luas_permukaan;
	printf("Menghitung Volume & Luas Permukaan Prisma Segitiga \n");
	printf("Masukkan Angka: \n");
	printf("\t Alas: ");
		scanf("%f", &a);
	printf("\t Tinggi: ");
		scanf("%f", &t);
	printf("\t Sisi: ");
		scanf("%f", &s);
	printf("\n");
	volume = a*t;
	printf("Volume Prisma Segitiga = a x t \n");
	printf("Volume Prisma Segitiga = %.2f \n", volume);
	printf("\n");
	luas_permukaan = t*(s+s+s)+(2*a);
	printf("Luas Permukaan Prisma Segitiga = t x (s + s + s) + (2 x a) \n");
	printf("Luas Permukaan Prisma Segitiga = %.2f \n", luas_permukaan);
	printf("*************************************** \n");
	printf("\n");
	return 0;
}

int kerucut() {
	float r, t, s, volume, luas_permukaan;
	printf("Menghitung Volume & Luas Permukaan Kerucut \n");
	printf("Masukkan Angka: \n");
	printf("\t Jari-Jari: ");
		scanf("%f", &r);
	printf("\t Tinggi: ");
		scanf("%f", &t);
	printf("\t Selimut: ");
		scanf("%f", &s);
	printf("\n");
	volume = 1*phi*(r*r*t)/3;
	printf("Volume Kerucut = 1 x Phi x (r x r x t) / 3 \n");
	printf("Volume Kerucut = %.2f \n", volume);
	luas_permukaan = phi*r*(r+s);
	printf("Luas Permukaan Kerucut = Phi x r x (r + s) \n");
	printf("Luas Permukaan Kerucut = %.2f \n", luas_permukaan);
	printf("*************************************** \n");
	printf("\n");
	return 0;
}
