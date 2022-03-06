#include <stdio.h>

void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();

main() 
{
	int list; menu:
	printf("-> PROGRAM KALKULATOR MODUL 1 SOAL 1 <- \n");
	printf("========================================\n");
	printf("Silakan Tentukan Fungsi Yang Akan Dicari! \n");
	printf(" 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Modulus\n 0. Keluar dan Selesai\n");
	printf("Masukkan Pilihan Anda (0/1/2/3/4/5): ");
	scanf("%d", &list);
	printf("*************************************** \n");
	printf("\n");

switch(list)
{
	case 1: penjumlahan(); goto menu; break;
	case 2: pengurangan(); goto menu; break;
	case 3: perkalian(); goto menu; break;
	case 4: pembagian(); goto menu; break;
	case 5: modulus(); goto menu; break;
	case 0: printf("Terima Kasih! Created by Kelompok 18 :)"); break;
	default:
		printf("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n");
		printf("*************************************** \n");
		printf("\n"); goto menu; break;
	}
}

void penjumlahan() {
double hasil, angka1, angka2;
printf("Menghitung Fungsi Penjumlahan \n");
printf("Masukkan Angka: \n");
printf("\t Angka 1: ");
	scanf("%d", &angka1);
printf("\t Angka 2: ");
	scanf("%d", &angka2);
hasil = angka1 + angka2;
printf("Hasil = Angka 1 + Angka 2 \n");
printf("Hasil = %d \n", hasil);
printf("*************************************** \n");
printf("\n");
}

void pengurangan() {
double hasil, angka1, angka2;
printf("Menghitung Fungsi Pengurangan \n");
printf("Masukkan Angka: \n");
printf("\t Angka 1: ");
	scanf("%d", &angka1);
printf("\t Angka 2: ");
	scanf("%d", &angka2);
hasil = angka1 - angka2;
printf("Hasil = Angka 1 - Angka 2 \n");
printf("Hasil = %d \n", hasil);
printf("*************************************** \n");
printf("\n");
}

void perkalian() {
int hasil, angka1, angka2;
printf("Menghitung Fungsi Perkalian \n");
printf("Masukkan Angka: \n");
printf("\t Angka 1: ");
	scanf("%d", &angka1);
printf("\t Angka 2: ");
	scanf("%d", &angka2);
hasil = angka1 * angka2;
printf("Hasil = Angka 1 x Angka 2 \n");
printf("Hasil = %d \n", hasil);
printf("*************************************** \n");
printf("\n");
}

void pembagian() {
float hasil, angka1, angka2;
printf("Menghitung Fungsi Pembagian \n");
printf("Masukkan Angka: \n");
printf("\t Angka 1: ");
	scanf("%d", &angka1);
printf("\t Angka 2: ");
	scanf("%d", &angka2);
hasil = angka1 / angka2;
printf("Hasil = Angka 1 : Angka 2 \n");
printf("Hasil = %.2f \n", hasil);
printf("*************************************** \n");
printf("\n");
}

void modulus() {
int hasil, angka1, angka2;
printf("Menghitung Fungsi Modulus \n");
printf("Masukkan Angka: \n");
printf("\t Angka 1: ");
	scanf("%d", &angka1);
printf("\t Angka 2: ");
	scanf("%d", &angka2);
hasil = angka1 % angka2;
printf("Hasil = Angka 1 mod Angka 2 \n");
printf("Hasil = %d \n", hasil);
printf("*************************************** \n");
printf("\n");
}
