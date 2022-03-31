#include <stdio.h>
#include <string.h> 
#include <conio.h>
#include<stdlib.h>

void zodiak();

int clean();

int main(){
	char pilihan, enterCheck;
	system("cls");
	printf("========================================================\n");
	printf("|                  PROGRAM ZODIAK                      |\n");
	printf("========================================================\n");
	printf("|       1. Zodiak                                      |\n");
	printf("|       2. Keluar                                      |\n");
	printf("========================================================\n"); 
	do{
		printf("Masukan pilihan anda: ");
	    if(((scanf(" %c%c", &pilihan, &enterCheck)) != 2 || enterCheck != '\n') && clean()){ 
			printf("Inputan salah! Mohon hanya memasukkan angka dari 1 atau 2\n\n"); 
		}else{
			if(pilihan == '1'){ 
				 zodiak();
				break; 
			}
			else if(pilihan == '2'){ 
				 exit(0);
			}else{ 
				printf("Inputan salah! Mohon hanya memasukkan angka dari 1 hingga 2\n\n"); 
			}
		}
		
	}while(1);
	return 0;
}


void zodiak(){
	int tanggal;
    char bulan[10];
    char *bintang;
    
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
    printf("        Masukan tanggal: ");
    scanf("%d", &tanggal);
 	printf("        Masukan bulan: ");
    scanf("%s", &bulan);
	
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
    		if (tanggal >= 1 && tanggal <= 19) {
                bintang = "Capricorn";	
            } else if (tanggal >= 20 && tanggal <= 31) {
                bintang = "Aquarius";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }

    }else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
        	if (tanggal >= 1 && tanggal <= 18) {
                bintang = "Aquarius";	
            } else if (tanggal >= 19 && tanggal <=28) {
                bintang = "Pisces";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
        	if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Pisces";	
            } else if (tanggal >= 21 && tanggal <= 31) {
                bintang = "Aries";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
            if (tanggal >= 1 && tanggal <= 19) {
                bintang = "Aries";	
            } else if (tanggal >= 20 && tanggal <=30) {
                bintang = "Taurus";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
            if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Taurus";	
            } else if (tanggal >= 21 && tanggal <= 31 ) {
                bintang = "Gemini";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
            if (tanggal >= 1 && tanggal <= 20) {
                bintang = "Gemini";	
            } else if (tanggal >= 21 && tanggal <= 30) {
                bintang = "Cancer";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
	} else if ((strcmp(bulan, "Juli") == 0) || (strcmp(bulan, "juli") == 0))  {
            if (tanggal >= 1 && tanggal <= 22) {
                bintang = "Cancer";	
            } else if (tanggal >= 23 && tanggal <=31) {
                bintang = "Leo";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Agustus") == 0) || (strcmp(bulan, "agustus") == 0))  {
            if (tanggal >=1 && tanggal <= 22) {
                bintang = "Leo";	
            } else if (tanggal >= 23 && tanggal <= 31) {
                bintang = "Virgo";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "September") == 0) || (strcmp(bulan, "september") == 0))  {
            if (tanggal >=1 && tanggal <= 22) {
                bintang = "Virgo";	
            } else if (tanggal >= 23 && tanggal <= 31) {
                bintang = "Libra";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Oktober") == 0) || (strcmp(bulan, "oktober") == 0))  {
            if (tanggal >= 1 && tanggal <= 22) {
                bintang = "Libra";	
            } else if (tanggal >= 23 && tanggal <=31) {
                bintang = "Scorpio";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "November") == 0) || (strcmp(bulan, "november") == 0))  {
            if (tanggal >=1 && tanggal <=23 ) {
                bintang = "Scorpio";	
            } else if (tanggal >= 23 && tanggal <=30) {
                bintang = "Sagitarius";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else if ((strcmp(bulan, "Desember") == 0) || (strcmp(bulan, "desember") == 0))  {
            if (tanggal >= 1 && tanggal <= 21) {
                bintang = "Sagitarius";	
            } else if (tanggal >= 22 && tanggal <= 31) {
                bintang = "Carpicorn";
            } else {
                printf("\tTanggal tidak sampai %d\n", tanggal);
                bintang = "-";
            }
    } else {
            printf("\tFormat Bulan Salah\n");
            bintang = "-";
		}
		
		printf("========================================================\n");
		printf("\tTanggal %d dengan bulan %s\n",tanggal, bulan);
    	printf("\tzodiak anda adalah %s\n", bintang);
        printf("========================================================\n");
}

int clean(){
	while(getchar() != '\n'); // apabila saat validasi inputan dilakukan terdapat kesalahan inputan,
	// maka fungsi ini akan membersihkan kesalahan inputan tersebut agar variabel dapat menampung inputan yang baru
	return 1;
}
