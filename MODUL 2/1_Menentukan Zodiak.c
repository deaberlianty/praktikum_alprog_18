#include <stdio.h>
#include <string.h> 
#include <conio.h>
#include<stdlib.h>
#include <ctype.h>

void zodiak();

int clean();

int validasi_string(char nama[20], int n);


void penutup();

int main(){
	int pilihan;
	char validasi;
	system("cls");
	printf("========================================================\n");
	printf("|                  PROGRAM ZODIAK                      |\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|       1. Zodiak                                      |\n");
	printf("|       2. Keluar                                      |\n");
	printf("========================================================\n"); 
	do{
		printf("\tMasukan pilihan anda: ");
	    if(((scanf(" %d%c", &pilihan, &validasi))  !=2 || validasi != '\n') && clean()){ 
			printf("\ttidak dapat menginputkan huruf\n\n");
		}else{
			if(pilihan == 1){ 
				zodiak();
				break; 
			}
			else if(pilihan == 2){ 
				penutup();
				exit(0);
			}else{ 
				printf("\tInputan salah! Mohon hanya memasukkan angka dari 1 hingga 2\n\n"); 
			}
		}
		
	}while(1);
	return 0;
}


void zodiak(){
	int tanggal;
    char bulan[225];
    char *bintang;
    char validasi;
    int pilihan;
    int n;
    system("cls");
	printf("========================================================\n");
	printf("|        Bulan dan tanggal pada kalender masehi        |\n");
	printf("========================================================\n");
	printf("|       >Januari   (1-31)                              |\n");
	printf("|       >Februari  (1-28)                              |\n");
	printf("|       >Maret     (1-31)                              |\n");
	printf("|       >April     (1-30)                              |\n");
	printf("|       >Mei       (1-31)                              |\n");
	printf("|       >Juni      (1-30)                              |\n");
	printf("|       >Juli      (1-31)                              |\n");
	printf("|       >Agustus   (1-31)                              |\n");
	printf("|       >September (1-30)                              |\n");
	printf("|       >Oktober   (1-31)                              |\n");
	printf("|       >November  (1-30)                              |\n");
	printf("|       >Desember  (1-31)                              |\n");
	printf("|                                                      |\n");
	printf("|       Masukan bulan diatas dengan kalimat            |\n");
	printf("========================================================\n");
	do{
		printf("        Masukan tanggal: ");
		if(((scanf("%d%c", &tanggal, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tTanggal tidak dapat berupa huruf \n\n");
		}
		else{
			if(tanggal < 1 ){ 
				printf("\tTanggal tidak bisa negatif\n\n"); 
			}else if(tanggal > 31){
				printf("\tTanggal tidak lebih dari 31\n\n"); 
			}
			else{ 
				break; 
			}
		}
	}while(1);
    
    
	
	do{
		do{
 			printf("        Masukan bulan: ");
    		scanf(" %[^\n]s", &bulan);
    
    		n = strlen(bulan);
    		bulan[n] = '\0';
    
    		if(validasi_string(bulan, n)){
    			break;
			}else{
			printf("\ttidak dapat menginputkan angka\n");
			}	
		}while(1);
		
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
    		if (tanggal >= 1 && tanggal <= 19) {
                bintang = "Capricorn";
				break;	
            } else if (tanggal >= 20 && tanggal <= 31) {
                bintang = "Aquarius";
                break;
            } 

    	}else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
        	if (tanggal >= 1 && tanggal <= 18) {
                bintang = "Aquarius";
				break;	
            } else if (tanggal >= 19 && tanggal <=28) {
                bintang = "Pisces";
                break;
            }  else{
            	bintang = "Tanggal 29-31 tidak ada pada bulan ini";
            	break;
			}
    	} else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
        	if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Pisces";	
                break;
            } else if (tanggal >= 21 && tanggal <= 31) {
                bintang = "Aries";
                break;
            } 
    	} else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
            if (tanggal >= 1 && tanggal <= 19) {
                bintang = "Aries";	
                break;
            } else if (tanggal >= 20 && tanggal <=30) {
                bintang = "Taurus";
                break;
            }  else{
            	bintang = "Tanggal 31 tidak ada pada bulan ini";
            	break;
			}
    	} else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
            if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Taurus";	
                break;
            } else if (tanggal >= 21 && tanggal <= 31 ) {
                bintang = "Gemini";
                break;
            } 
    	} else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
            if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Gemini";	
                break;
            } else if (tanggal >= 21 && tanggal <= 30) {
                bintang = "Cancer";
                break;
            }  else{
            	bintang = "Tanggal 31 tidak ada pada bulan ini";
            	break;
			}
		} else if ((strcmp(bulan, "Juli") == 0) || (strcmp(bulan, "juli") == 0))  {
            if (tanggal >= 1 && tanggal <= 22) {
                bintang = "Cancer";	
                break;
            } else if (tanggal >= 23 && tanggal <=31) {
                bintang = "Leo";
                break;
            } 
    	} else if ((strcmp(bulan, "Agustus") == 0) || (strcmp(bulan, "agustus") == 0))  {
            if (tanggal >=1 && tanggal <= 22) {
                bintang = "Leo";	
                break;
            } else if (tanggal >= 23 && tanggal <= 31) {
                bintang = "Virgo";
                break;
            } 
    	} else if ((strcmp(bulan, "September") == 0) || (strcmp(bulan, "september") == 0))  {
            if (tanggal >=1 && tanggal <= 22) {
                bintang = "Virgo";	
                break;
            } else if (tanggal >= 23 && tanggal <= 31) {
                bintang = "Libra";
                break;
            } 
    	} else if ((strcmp(bulan, "Oktober") == 0) || (strcmp(bulan, "oktober") == 0))  {
            if (tanggal >= 1 && tanggal <= 22) {
                bintang = "Libra";	
                break;
            } else if (tanggal >= 23 && tanggal <=31) {
                bintang = "Scorpio";
                break;
            } 
    	} else if ((strcmp(bulan, "November") == 0) || (strcmp(bulan, "november") == 0))  {
            if (tanggal >=1 && tanggal <=23 ) {
                bintang = "Scorpio";
				break;	
            } else if (tanggal >= 23 && tanggal <=30) {
                bintang = "Sagitarius";
                break;
            } else{
            	bintang = "Tanggal 31 tidak ada pada bulan ini";
            	break;
			}
    	} else if ((strcmp(bulan, "Desember") == 0) || (strcmp(bulan, "desember") == 0))  {
            if (tanggal >= 1 && tanggal <= 21) {
                bintang = "Sagitarius";	
                break;
            } else if (tanggal >= 22 && tanggal <= 31) {
                bintang = "Carpicorn";
                break;
            } 
    	} else{
    		printf("\n\tFormat bulan salah\n");
		}
	}while(1);
	
	
		system("cls");
		printf("=========================================================\n");
		printf("\t  Tanggal %d dengan bulan %s\n",tanggal, bulan);
    	printf("\t  zodiak : %s\n", bintang);
        printf("=========================================================\n");
        
        printf("\n=========================================================\n");
    	printf("|         1. Ulang                                      |\n"); 
    	printf("|         2. Menu utama                                 |\n"); 
    	printf("|         3. keluar                                     |\n"); 
    	printf("=========================================================\n");
        
    do{
    	printf("\n\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\ttidak dapat menginputkan huruf.\n\n"); 
		}
		else{
			if(pilihan == 1){ 
				zodiak(); 
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

int validasi_string(char nama[20], int n){
	int i;
	
	for (i = 0; i < n; ++i){
		if(isdigit(nama[i])){
			return 0;
		}else{
			return 1;
		}
		
	}
}


