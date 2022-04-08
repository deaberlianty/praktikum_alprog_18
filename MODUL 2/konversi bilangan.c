#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desimalkebiner();

void binerKeDesimal();

int konversiBinerKeDesimal(char biner[]);

int clean();

void penutup();

int main(){
	char validasi;
	int pilihan;
	system("cls"); // clear screen
	
	printf("========================================================\n");
	printf("|            PROGRAM KONVERSI BILANGAN                 |\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|      1. Desimal ke Biner                             |\n");
	printf("|      2. Biner ke Desimal                             |\n");
	printf("|      3. Tutup Program                                |\n");
	printf("========================================================\n"); 

	do{
		printf("\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tinputan tidak dapat berupa huruf\n\n"); 
		}
		else{
			if(pilihan == 1){ 
				desimalkebiner();
				break;
			}
			else if(pilihan == 2){ 
				binerKeDesimal();
				break; 
			}
			else if(pilihan == 3){ 
				penutup();
				exit(0); 
				break; 
			}
			else{
				printf("\tInputan salah! Tekan 1 untuk mengulang, 2 untuk kembali ke menu, dan 3 untuk menutup program.\n\n"); 
			}
		}
	}while(1);

	return 0; // menutup program
}

void desimalkebiner(){
	int angka_desimal, q, biner[10];
	char validasi;
	int pilihan;
	system("cls");
	printf("========================================================\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|             Konversi desimal ke biner                |\n");
	printf("========================================================\n"); 
	do{
		printf("\n\tMasukan angka desimal: ");
		if(((scanf("%d%c", &angka_desimal, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tinputan tidak dapat berupa huruf \n\n");
		}
		else{
			if(angka_desimal < 0 ){ 
				printf("\tangka desimal tidak bisa negatif\n\n"); 
			}else{
				break; 
			}
		}
	}while(1);
		
	for(q=0; angka_desimal>0; q++){
		biner[q] = angka_desimal%2;
		angka_desimal = angka_desimal/2;
	}
	printf("\tBilangan biner: ");
	for(q=q-1 ;q>=0 ;q--) {
		printf("%d",biner[q] );
	}
	printf("\n\n========================================================\n");
    printf("\t1. Ulang\n"); 
   	printf("\t2. Menu utama\n"); 
   	printf("\t3. keluar\n");
	do{ 
		printf("\n\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\ttidak dapat menginputkan huruf.\n\n"); 
		}
		else{
			if(pilihan == 1){ 
				desimalkebiner();
				break; 
			}
			else if(pilihan == 2){ 
				main(); 
				break; 
			}
			else if(pilihan == 3){ 
				penutup();
				exit(0); 
				break; 
			}
			else{ 
				printf("\tInputan salah! Tekan 1 untuk mengulang, 2 untuk kembali ke menu, dan 3 untuk menutup program.\n\n"); 
			}
		}
	}while(1);
}

void binerKeDesimal(){
	char biner[50]; 
	char validasi; 
	int desimal, valid, i;
	int pilihan;
	/* 
	   variabel desimal => untuk menampung hasil dari bilangan desimal yang akan terbentuk nanti
	   variabel valid => untuk validasi bilangan biner yang diinputkan user
	   variabel i => untuk menampung nilai iterasi pada perulangan for */

	system("cls"); // clear screen

	do{
    printf("========================================================\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|             Konversi biner ke desimal                |\n");
	printf("========================================================\n"); 

		valid = 1; 
		printf("\n\tMasukkan bilangan biner: ");
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

	printf("\tBilangan desimal: %d\n",konversiBinerKeDesimal(biner)); 

	printf("\n========================================================\n");
    printf("1. Ulang\n"); 
   	printf("2. Menu utama\n"); 
   	printf("3. keluar\n"); 
	
	do{ 
		printf("\nMasukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\ttidak dapat menginputkan huruf.\n\n"); 
		}
		else{
			if(pilihan == 1){ 
				binerKeDesimal();
				break; 
			}
			else if(pilihan == 2){ 
				main(); 
				break; 
			}
			else if(pilihan == 3){ 
				penutup();
				exit(0); 
				break; 
			}
			else{ 
				printf("Inputan salah! Tekan 1 untuk mengulang, 2 untuk kembali ke menu, dan 3 untuk menutup program.\n\n"); 
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

int clean(){
	while(getchar() != '\n'); // apabila saat validasi inputan dilakukan terdapat kesalahan inputan,
	// maka fungsi ini akan membersihkan kesalahan inputan tersebut agar variabel dapat menampung inputan yang baru
	return 1;
}

void penutup(){
	system("cls");
	printf("========================================================\n");
	printf("|                  Terimakasih                         |\n");
	printf("|              dari kami Kelompok 18                   |\n");
	printf("========================================================\n");
	
}
