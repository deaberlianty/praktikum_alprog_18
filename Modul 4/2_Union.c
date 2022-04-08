#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kubus{
	int volume;
	int sisi_kubus;
	int permukaan_kubus;
};

union kubus2{
	int volume;
	int sisi_kubus;
	int permukaan_kubus; 
};

void perhitungan_kubus(); 

int clean();

void penutup();

int main(){
	char validasi;
	int pilihan;
	system("cls"); // clear screen

   printf("========================================================\n");
	printf("|                  PROGRAM UNION                       |\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|      1. Menghitung kubus                             |\n");
	printf("|      2. Tutup Program                                |\n");
	printf("========================================================\n"); 

	do{
		printf("\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\ttidak dapat menginputkan huruf \n\n"); 
		}else{
			if(pilihan == 1){ 
				perhitungan_kubus();
				break;
			}else if(pilihan == 2){ 
				penutup();
				exit(0); 
				break; 
			}else{
				printf("Inputan salah! Tekan 1 untuk mengulang, 2 untuk kembali ke menu, dan 3 untuk menutup program.\n\n");  
			}
		}
	}while(1);
	

	return 0; // menutup program
}
	


void perhitungan_kubus(){
	system("cls");
	struct kubus a;
	union kubus2 b;
	char validasi;
	int ulang, sisi;
	printf("========================================================\n");
	printf("|                 Perhitungan kubus                    |\n");
	printf("========================================================\n");
	do{

		printf("\tMasukan sisi : ");
		if(((scanf("%d%c", &sisi, &validasi)) != 2 || validasi != '\n') && clean()){ // meminta inputan bilangan desimal dari user sekaligus divalidasi
			printf("\tInputan hanya boleh memasukan bilangan \n\n"); // menampilkan error apabila inputan salah
		}
		else{
			if(sisi < 0){ // apabila inputan bilangan desimal kurang dari 0 maka
				printf("Inputan hanya boleh memasukan bilangan positif\n\n"); // menampilkan error apabila inputan salah
			}
			else{ // selain dari itu maka
				break; // keluar dari perulangan apabila inputan benar
			}
		}
	}while(1);
	
	printf("========================================================\n");
	printf("|                  struct kubus                        |\n");
	printf("========================================================\n");
	a.sisi_kubus = sisi;
	printf("\n\tSisi             : %d\n", a.sisi_kubus);
	
	a.permukaan_kubus = 6*a.sisi_kubus*a.sisi_kubus;

	
	printf("\tLuas permukaan   : %d\n", a.permukaan_kubus);
	a.volume = a.sisi_kubus*a.sisi_kubus*a.sisi_kubus;
	
	printf("\tVolume           : %d\n", a.volume);
	
	printf("========================================================\n");
	printf("|                  union kubus                         |\n");
	printf("========================================================\n");
	
	b.sisi_kubus = sisi;
	
	printf("\n\tSisi              : %d\n", b.sisi_kubus);
	
	b.permukaan_kubus = 6*b.sisi_kubus*b.sisi_kubus;
	
	printf("\tLuas permukaan    : %d\n", b.permukaan_kubus);
	
	b.volume = b.sisi_kubus;
	
	printf("\tVolume            : %d\n", b.volume);
	
	printf("========================================================\n");
	printf("|                 ukuran memori                        |\n");
	printf("========================================================\n");
	
//	printf("\n Ukuran memori dari struct kubus : %d byte\n", sizeof(kubus));
//	printf("\n Ukuran memori dari union kubus  : %d byte\n", sizeof(kubus2));
	
	printf("\n=========================================================\n");
    printf("|         1. Ulang                                      |\n"); 
    printf("|         2. Menu utama                                 |\n"); 
    printf("|         3. keluar                                     |\n"); 
    printf("=========================================================\n");
        
    do{
    	printf("\n\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &ulang, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tInputan hanya boleh memasukan bilangan.\n\n"); 
		}
		else{
			if(ulang == 1){ 
				perhitungan_kubus();
				break; 
			}
			else if(ulang == 2){ 
				main(); 
				break; 
			}
			else if(ulang == 3){ 
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



