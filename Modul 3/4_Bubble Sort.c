#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void proses() ;
void perulangan() ;
clock_t tempo ;
double durasi[2] ;
int x, y, temp ;

int main()
{
	int opsi ;
	printf("..............................................................................................................\n") ;
	printf(".\t\t\t\t [PENGURUTAN DATA DENGAN BUBBLE SORT] \t\t\t\t\t     .\n") ;
    printf(".\t\t\t\t 1. Bubble Sort 1000 Data \t\t\t\t\t\t     .\n") ;
    printf(".\t\t\t\t 2. Bubble Sort 16000 Data \t\t\t\t\t\t     .\n") ;
    printf(".\t\t\t\t 3. Bubble Sort 64000 Data \t\t\t\t\t\t     .\n") ;
    printf(".\t\t\t\t 4. Keluar dari Program \t\t\t\t\t\t     .\n") ;
	printf("..............................................................................................................\n") ;
	printf("==============================================================================================================\n") ;
    printf("\t Masukkan Pilihan Anda (1/2/3/4) : ") ;
	opsi = validasi() ;
	switch (opsi)
	{
	case 1 :
   		system("cls || clear") ;
      	proses(1000) ;
      	break ;
   	case 2 :
   		system("cls || clear") ;
   		proses(16000) ;
   		break ;
   	case 3 :
   		system("cls || clear") ;
   		proses(64000) ;
   		break ;
   	case 4 :
   		system("cls || clear") ;
   		printf("Terima kasih!!! Created by Kelompok 18 \n") ;
   		exit(1) ;
   	default :
   		system("cls || clear") ;
   		printf("Harap masukkan pilihan yang tersedia!\n") ;
   		main() ;
   }
   perulangan() ;
   return 0 ;
}

void penggunaancarabiasa(int a1[], int n)
{
	for(x = 0; x < n-1; x++)
	{
		for(y = 0; y < n-1-x; y++)
		{
			if(a1[y] > a1[y+1])
			{
				temp = a1[y] ;
				a1[y] = a1[y+1] ;
				a1[y+1] = temp ;
			}
		}
	}
}

void penggunaancarapointer(int *pa2[], int n)
{
	for(x = 0; x < n-1; x++)
	{
		for(y = 0; y < n-1-x; y++)
		{
			if(*(pa2+y) > *(pa2+y+1))
			{
				temp = *(pa2+y) ;
				*(pa2+y) = *(pa2+y+1) ;
				*(pa2+y+1) = temp ;
			}
		}
	}
}

void proses (int n)
{
	int a1[n], a2[n], opsi ;
	for(x = 0; x < n; x++)
	{
		a1[x] = rand() ;
		a2[x] = a1[x] ;
	}
	for(x = 0; x < n; x++)
	{
   		printf("\t\t\t") ;
		for(y = 0; y <= 10; y++)
		{
    		printf("%d ", a1[x]) ;
		}
		printf("\n\n") ;
	}
	printf("..............................................................................................................\n") ;
	printf(".\t\t\t\t     %d Bilangan acak berhasil ditampilkan\t\t\t\t     .\n", n) ;
	printf("..............................................................................................................\n") ;
	printf("\n\t\t\t Tekan sesuatu di keyboard untuk memulai pengurutan data ...\n") ;
	getch() ;
	tempo = clock() ;
	penggunaancarabiasa(a1, n) ;	
	tempo = clock() - tempo ;
	durasi[0] = (double)(tempo) / CLOCKS_PER_SEC ;
	tempo = clock() ;
	penggunaancarapointer(a2, n) ;
	tempo = clock() - tempo ;
	durasi[1] = (double)(tempo) / CLOCKS_PER_SEC ;
	
	system("cls || clear") ;
	printf("\t\t\t Hasil Pengurutan \n\n") ;
	for(x = 0; x < n; x++)
	{
		printf("\t\t\t") ;
		for(y = 0; y <= 10; y++)
		{
	      printf("%d ", a1[x]) ;
		}
		printf("\n\n") ;
	}
	printf("..............................................................................................................\n") ;
	printf(".\t\t\t\t\t     PENGURUTAN DATA SELESAI \t\t\t\t             .\n", n) ;
	printf("..............................................................................................................\n") ;
	printf("\n\n") ;
	printf("\t\t\t\t     +-----------------------------------+\n") ;
	printf("\t\t\t\t     Waktu Yang Diperlukan        \n") ;
	printf("\t\t\t\t     +-----------------------------------+\n") ;
	printf("\t\t\t\t     Cara biasa : %f detik               \n", durasi[0]) ;
	printf("\t\t\t\t     Pointer    : %f detik               \n", durasi[1]) ;
	printf("\t\t\t\t     +-----------------------------------+\n") ;
}

int validasi() 
{
    int angka ;
    char karakter ;
    scanf("%d%c", &angka, &karakter) ;
    if(karakter != '\n' || angka < 0)
    {
        printf("\n Maaf!!! Kami hanya dapat menerima masukan berupa angka! \n\n") ;
        printf("\n Masukkan Ulang Angka : ") ;
        fflush(stdin) ;
        validasi() ;
    }
	else
	{	
        return angka ;
    }
}


void perulangan()
{
   int opsi ;
   printf("\n\t\t\t\t     .....................................\n\n") ;
   printf("\t\t\t\t     Ulang Operasi? \n") ;
   printf("\t\t\t\t     [1] Mengulang Pengurutan Data \n") ;
   printf("\t\t\t\t     [2] Keluar\n") ;
   fflush(stdin) ;
   printf("\t\t\t\t     Masukkan pilihan yang tersedia (1/2) : ") ;
   scanf("%d", &opsi) ;
   switch(opsi)
   {
   	case 1 :
		system("cls || clear") ;
      	main() ;
      	break ;
   	case 2 :
   		system("cls || clear") ;
   		printf("Terima kasih!!! Created by Kelompok 18 \n") ;
      	exit(0) ;
      	break ;
    default :
      	system("cls || clear") ;
      	printf("\t\t\t Masukkan pilihan yang tersedia") ;
      	perulangan() ;
      	break ;
   }
}
