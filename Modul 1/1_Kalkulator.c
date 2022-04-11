#include <stdio.h>
#include <stdlib.h>

void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();
void koreksi();
int validasi();
int check();
int perulangan();
char pilihan;

int main() 
{	
	int list; menu:
	printf("-> PROGRAM KALKULATOR MODUL 1 SOAL 1 <- \n");
	printf("========================================\n");
	printf("Silakan Tentukan Fungsi Yang Akan Dicari! \n");
	printf(" 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Modulus\n 0. Keluar dan Selesai\n");
	koreksi(&list,"Masukkan Pilihan Anda (0/1/2/3/4/5): ");
	printf("***************************************** \n");
	printf("\n");
	system("cls || clear");

	switch(list) 
	{
		case 1: penjumlahan(); perulangan(); break;
		case 2: pengurangan(); perulangan(); break;
		case 3: perkalian(); perulangan(); break;
		case 4: pembagian(); perulangan(); break;
		case 5: modulus(); perulangan(); break;
		case 0: printf("Terima Kasih! Created by Kelompok 18 :) \n"); break;
		default:
			printf("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n");
			printf("*************************************************************** \n");
			printf("\n"); main(); break;
	}
}


void penjumlahan() {
	int hasil, angka1, angka2;
	printf("Menghitung Fungsi Penjumlahan \n");
	printf("Masukkan Angka: \n");
	printf("\t Angka 1: "); angka1=validasi();
	printf("\t Angka 2: "); angka2=validasi();
	hasil = angka1 + angka2;
		printf("Hasil = Angka 1 + Angka 2 \n");
		printf("Hasil = %d \n", hasil);
	printf("*************************************** \n");
	printf("\n");
	
}

void pengurangan() {
	int hasil, angka1, angka2;
	printf("Menghitung Fungsi Pengurangan \n");
	printf("Masukkan Angka: \n");
	printf("\t Angka 1: "); angka1=validasi();
	printf("\t Angka 2: "); angka2=validasi();
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
	printf("\t Angka 1: "); angka1=validasi();
	printf("\t Angka 2: "); angka2=validasi();
	hasil = angka1 * angka2;
		printf("Hasil = Angka 1 x Angka 2 \n");
		printf("Hasil = %d \n", hasil);
	printf("*************************************** \n");
	printf("\n");
}
		
void pembagian() {
	float hasil; 
	int angka1, angka2;
	printf("Menghitung Fungsi Pembagian \n");
	printf("Masukkan Angka: \n");
	printf("\t Angka 1: "); angka1=validasi();
	printf("\t Angka 2: "); angka2=validasi();
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
	printf("\t Angka 1: "); angka1=validasi();
	printf("\t Angka 2: "); angka2=validasi();
	hasil = angka1 % angka2;
		printf("Hasil = Angka 1 mod Angka 2 \n");
		printf("Hasil = %d \n", hasil);
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
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
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

int perulangan() {
	char pilihan[2] ;
	printf ("Ingin Mencoba Menginput Kembali? (y/t): ") ; 
	scanf ("%s", &pilihan) ;
	system ("cls || clear") ;
	if (strcmp(pilihan, "y")==0)
	{
		system ("cls || clear") ;
		main();
	}
	else if (strcmp(pilihan, "t")==0) 
	{
		printf ("Terima Kasih! Created by Kelompok 18 :)") ;	
		exit(0);
	}
	else 
	{
		printf ("Silahkan pilih y/t saja! \n") ;	
		perulangan();
	}
	system("cls || clear");
}
