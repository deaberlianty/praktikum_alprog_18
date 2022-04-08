#include <stdio.h>
#include <stdlib.h>

void towerHanoiRekursif();

void hanoiRekursif(int cakram, int asal, int tujuan, int temp);

void towerHanoiIteratif();

int clean();

void penutup();



int main(){
	char  validasi;
	int pilihan; 
	system("cls"); 

    printf("========================================================\n");
	printf("|               PROGRAM MENARA HANOI                   |\n");
	printf("|                   KELOMPOK 18                        |\n");
	printf("========================================================\n");
	printf("|      1. Menara hanoi rekrusif                        |\n");
	printf("|      2. Menara hanoi iteratif                        |\n");
	printf("|      3. Tutup Program                                |\n");
	printf("========================================================\n"); 

	do{
		printf("\n\t Masukkan pilihan: ");
		if(((scanf(" %d%c", &pilihan, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t Inputan salah! hanya dapat berupa angka\n\n"); 
		}else{
			if(pilihan == 1){ 
				towerHanoiRekursif();
				break; 
			}
			else if(pilihan == 2){ 
				towerHanoiIteratif(); 
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

	return 0; 
}


void towerHanoiRekursif(){
	char  validasi;
	int cakram, i, counter = 1; 
	int ulang;


	system("cls"); 
	printf("==================================================================\n");
	printf("|                     Hanoi rekrusif                             |\n");
	printf("==================================================================\n");
	do{
		printf("\n\t Masukkan jumlah cakram: ");
		if(((scanf("%d%c", &cakram, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t hanya dapat menginputkan angka.\n\n"); 
		}
		else{
			if(cakram <= 0){ 
				printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0.\n\n"); 
			}
			else{ 
				break; 
			}
		}
	}while(1);
	printf("==================================================================\n"); 
	printf("\t Langkah-Langkahnya\n");
	hanoiRekursif(cakram,1,3,2); 

	for(i=0; i<cakram; i++){ 
		counter = 2 * counter; 
		if(i == cakram - 1){ 
			counter = counter - 1; 
		}
	}
	printf("\n\t Langkah minimum untuk memindahkan %d cakram yaitu: %d\n", cakram, counter); 
	
	printf("==================================================================\n"); 

printf("\n==================================================================\n");
    printf("|         1. Ulang                                               |\n"); 
    printf("|         2. Menu utama                                          |\n"); 
    printf("|         3. keluar                                              |\n"); 
    printf("==================================================================\n");
        
    do{
    	printf("\n\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &ulang, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tInputan hanya boleh memasukan bilangan.\n\n"); 
		}
		else{
			if(ulang == 1){ 
				towerHanoiRekursif();
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

void hanoiRekursif(int jmlhCakram, int asal, int tujuan, int temp){
	if (jmlhCakram > 0) { 
        hanoiRekursif(jmlhCakram-1, asal, temp, tujuan);
        printf("\t Memindahkan Cakram paling atas dari Tower %d ke Tower %d\n", asal, tujuan); 
        hanoiRekursif(jmlhCakram-1, temp, tujuan, asal); 
    }
}

void towerHanoiIteratif(){
	int ulang ; 
	char validasi;
	int cakram, i, counter=0;
	char tower[] = {'1','2','3'}; 

	system("cls");  
	printf("==================================================================\n");
	printf("|                     Hanoi rekrusif                             |\n");
	printf("==================================================================\n");
		
	do{
		printf("\n\t Masukkan jumlah cakram: ");
		if(((scanf("%d%c", &cakram, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); 
		}
		else{
			if(cakram <= 0){ 
				printf("\t Inputan salah! Mohon hanya memasukkan angka lebih dari 0\n\n"); 
			}
			else{ 
				break; 
			}
		}
	}while(1);
	printf("==================================================================\n");
	printf("\t Langkah-Langkahnya\n");
	if(cakram % 2 == 0){ 
		tower[1] = '3'; 
		tower[2] = '2'; 
	}

	for(i=1; i < (1<<cakram); i++){ 
		counter++; 
		printf("\t Memindahkan Cakram paling atas dari Tower %c ke Tower %c\n", tower[((i & (i - 1)) % 3)], tower[(((i | (i - 1)) + 1) % 3)]); 
	}
	printf("\n\t Langkah minimum untuk memindahkan %d cakram yaitu: %d", cakram, counter);
	
	printf("\n==================================================================\n");
    printf("|         1. Ulang                                               |\n"); 
    printf("|         2. Menu utama                                          |\n"); 
    printf("|         3. keluar                                              |\n"); 
    printf("==================================================================\n");

do{
    	printf("\n\tMasukkan pilihan: ");
		if(((scanf(" %d%c", &ulang, &validasi)) != 2 || validasi != '\n') && clean()){ 
			printf("\tInputan hanya boleh memasukan bilangan.\n\n"); 
		}
		else{
			if(ulang == 1){ 
				towerHanoiIteratif();
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
	while(getchar() != '\n'); 
	
	return 1;
}

void penutup(){
	system("cls");
	printf("========================================================\n");
	printf("|                  Terimakasih                         |\n");
	printf("|              dari kami Kelompok 18                   |\n");
	printf("========================================================\n");
	
}
