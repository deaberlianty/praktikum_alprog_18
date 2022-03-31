#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void binerKeDesimal();

int konversiBinerKeDesimal(char biner[]);

void biner();



int clean(){
	while(getchar() != '\n'); // apabila saat validasi inputan dilakukan terdapat kesalahan inputan,
	// maka fungsi ini akan membersihkan kesalahan inputan tersebut agar variabel dapat menampung inputan yang baru
	return 1;
}

int main(){
	char pilihan,enterCheck, ulang; // variabel pilihan untuk menampung hasil pilihan menu oleh user. variabel enterCheck untuk validasi inputan
	system("cls"); // clear screen

    printf("\n+-------------------------------------------------+\n");
	printf("|                   KELOMPOK 18                   |\n");
	printf("+-------------------------------------------------+\n");
	printf("|                PROGRAM KONVERSI                 |\n");
	printf("+-------------------------------------------------+\n\n\n");

	printf("    +----------------------------------------+\n");
	printf("    |                  MENU                  |\n");
	printf("    +----------------------------------------+\n");
	printf("    |           1. Desimal ke Biner          |\n");
	printf("    |           2. Biner ke Desimal          |\n");
	printf("    |           3. Tutup Program             |\n");
	printf("    +----------------------------------------+\n\n\n");

	do{
		printf("Masukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ 
			printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 3\n\n"); 
		}
		else{
			if(pilihan == '1'){ 
				biner();
				break;
			}
			else if(pilihan == '2'){ 
				binerKeDesimal();
				break; 
			}
			else if(pilihan == '3'){ 
				exit(0); 
				break; 
			}
			else{
				printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 3\n\n"); 
			}
		}
	}while(1);

	return 0; // menutup program
}

void biner(){
	int angka_desimal, q, biner[10];
	printf("Masukan angka desimal: ");
	scanf("%d", &angka_desimal);
		
	for(q=0; angka_desimal>0; q++){
		biner[q] = angka_desimal%2;
		angka_desimal = angka_desimal/2;
	}
	printf("Hasil konversi biner: ");
	for(q=q-1 ;q>=0 ;q--) {
		printf("%d",biner[q] );
	}
}

void binerKeDesimal(){
	char biner[50]; 
	char pilihan, enterCheck; 
	int desimal, valid, i;
	/* 
	   variabel desimal => untuk menampung hasil dari bilangan desimal yang akan terbentuk nanti
	   variabel valid => untuk validasi bilangan biner yang diinputkan user
	   variabel i => untuk menampung nilai iterasi pada perulangan for */

	system("cls"); // clear screen

	do{
    printf("\n+-----------------------------------------------+\n");
	printf("|                   KELOMPOK 18                   |\n");
	printf("+-------------------------------------------------+\n");
	printf("|                PROGRAM KONVERSI                 |\n");
	printf("+-------------------------------------------------+\n\n\n");

		valid = 1; 
		printf("Masukkan bilangan biner: ");
		scanf(" %[^\n]s",&biner); 

		for(i=0; i<strlen(biner); i++){ 
			if(biner[i] < '0' || biner[i] > '1'){ 
				valid = 0; 
				break;
			}
		}

		if(valid == 1){ 
			break;
		}
		else{ 
			printf("Inputan salah! Mohon hanya memasukkan angka 1 atau 0\n\n"); 
		}
	}while(1);

	printf("\tBilangan desimal: %d",konversiBinerKeDesimal(biner)); 

	printf("\n\nApakah Anda ingin melakukan konversi bilangan desimal ulang?\nTekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.");
	do{
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ 
			printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
		}
		else{
			if(pilihan == 'Y' || pilihan == 'y'){ 
				binerKeDesimal(); 
				break; 
			}
			else if(pilihan == 'N' || pilihan == 'n'){ 
				main(); 
				break; 
			}
			else if(pilihan == 'K' || pilihan == 'k'){ 
				exit(0); 
				break; 
			}
			else{ 
				printf("Inputan salah! Tekan Y untuk mengulang, N untuk kembali ke menu, dan K untuk menutup program.\n\n"); 
			}
		}
	}while(1);
}

int konversiBinerKeDesimal(char biner[]){
	int desimal, sizeArray, temp, i, j;
	/* mendeklarasikan beberapa variabel baru dengan tipe data integer:
	   variabel desimal => untuk menampung nilai bilangan desimal yang akan terbentuk nanti
	   variabel sizeArray => untuk menampung nilai panjang karakter dari bilangan biner yang diinputkan
	   variabel temp => untuk menampung secara sementara nilai bilangan desimal
	   variabel i dan j => untuk menampung nilai iterasi pada perulangan for */

	desimal = 0; 
	temp = 0; 
	sizeArray = strlen(biner); 
	char tempBiner[sizeArray]; 

	for(i=1; i<=sizeArray; i++){ 
		tempBiner[i-1] = biner[sizeArray-i]; 
		}

	for(i=0; i<sizeArray; i++){ 
		if(tempBiner[i] == '1'){ 
			for(j=0; j<=i; j++){ 
				if(j == 0){
					temp = 1; 
				}
				else{ 
					temp = temp * 2; 
				}
			}
			desimal = desimal + temp; 
		}
	}

	return desimal; 
}
