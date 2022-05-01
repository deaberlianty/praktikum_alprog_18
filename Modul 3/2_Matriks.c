#include <stdio.h>
#include <stdlib.h>

int penjumlahan() ;
int perkalian() ;
int transpose() ;
int check() ;
int correct() ;
int validation() ;
int perulangan () ;
char pilihan ;

int main() 
{
	int menu ;
	printf("\n = PROGRAM PERHITUNGAN MATRIKS MODUL 3 NO 2 = \n") ;
	printf(" ============================================ \n") ;
	printf("\n SILAHKAN PILIH PERHITUNGAN MATRIKS! \n") ;
	printf("\n 1. Penjumlahan\n 2. Perkalian\n 3. Transpose\n 0. Keluar dan Selesai\n") ;
	correct(&menu,"\n Masukkan Pilihan Anda (0/1/2/3) : ") ;
	printf("\n ***************************************** \n") ;
	printf("\n") ;
	system("cls || clear") ;

	switch(menu) 
	{
		case 1 : 
		penjumlahan() ; 
		break ;
		case 2 : 
		perkalian() ; 
		break ;
		case 3 : 
		transpose() ; 
		break ;
		case 0 : 
		printf(" Terima Kasih! Created by Kelompok 18") ; 
		exit (0) ;
		break ;
		default:
			printf(" Pilihan Anda salah! Silakan pilih angka 0-3 saja! \n ") ;
			printf("************************************************* ") ;
			printf("\n") ; 
			break ;
	}
	perulangan() ;
}
	
int penjumlahan () 
{   
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10] ;
	printf (" Operasi Penjumlahan Matriks \n") ;
	printf ("\n Masukkan Angka : \n") ;
	printf ("\n Masukkan jumlah baris matriks : ") ;
	m = validation() ;
	printf ("\n Masukkan jumlah kolom matriks : ") ;
	n = validation() ;
	printf ("\n Contoh pengisian elemen matriks dari kiri ke kanan (3x3)\n") ;
	printf ("\n Masukkan elemen matriks : \n") ;
	printf (" 1 2 3 4 5 6 7 8 9 \n") ;
	printf ("\n Hasil masukkan elemen matriks Anda akan muncul seperti di bawah ini. \n") ;
	printf ("\n 1 2 3 \n 4 5 6\n 7 8 9\n") ;
	printf ("\n Masukkan elemen matriks pertama : \n") ;
	for (i = 0; i < m; i++)
	{
	    for (j = 0; j < n; j++)
	    {
	    	scanf ("%d", &matriks1[i][j]) ;
	    }
	}
	printf("\n Matriks 1 : \n") ;
    for (i = 0; i < m; i++)
	{
        for (j = 0; j < n; j++)
		{
            printf("%d\t", matriks1[i][j]) ;
        }
        printf("\n") ;
    }
	printf ("\n Masukkan elemen matriks kedua : \n") ;
	for (i = 0; i < m; i++)
	{
	    for (j = 0; j < n; j++)
	    {
	    	scanf ("%d", &matriks2[i][j]) ;
	    }
	}
	printf("\n Matriks 2 : \n") ;
    for (i = 0; i < m; i++)
	{
        for (j = 0; j < n; j++)
		{
            printf("%d\t", matriks2[i][j]) ;
        }
        printf("\n") ;
    }
	printf ("\n Hasil penjumlahan matriks : \n") ;
	for (i = 0; i < m; i++)
	{
	    for (j = 0; j < n; j++)
	    {
	    	hasil[i][j] = matriks1[i][j] + matriks2[i][j] ;
	    	printf ("%d \t", hasil[i][j]) ;
	    }
	printf ("\n") ;
	}
	return 0 ;
}

int perkalian ()
{
	int matriks1[10][10], matriks2[10][10], hasil[10][10] ;
	int i, j, k, m, n, p, q, jumlah = 0 ;
	printf (" Operasi Perkalian Matriks \n") ;
	printf ("\n Masukkan Angka : \n") ;
	printf ("\n Masukkan jumlah baris matriks pertama : ") ;
	m = validation() ;
	printf ("\n Masukkan jumlah kolom matriks pertama : ") ;
	n = validation() ;
	printf ("\n Masukkan jumlah baris matriks kedua : ") ;
	p = validation() ;
	printf ("\n Masukkan jumlah kolom matriks kedua : ") ;
	q = validation() ;
	printf ("\n Contoh pengisian elemen matriks dari kiri ke kanan (3x3)\n") ;
	printf ("\n Masukkan elemen matriks : \n") ;
	printf (" 1 2 3 4 5 6 7 8 9 \n") ;
	printf ("\n Hasil masukkan elemen matriks Anda akan muncul seperti di bawah ini. \n") ;
	printf ("\n 1 2 3 \n 4 5 6\n 7 8 9\n") ;
	if (n != p)
	{ 
		printf ("\n Matriks tidak dapat dikalikan satu sama lain.\n") ;
	} 
	else 
	{
	    printf ("\n Masukkan elemen matriks pertama : \n") ;
	    for (i = 0; i < m; i++)
	    {
	      	for (j = 0; j < n; j++)
			{
	        	scanf ("%d", &matriks1[i][j]) ;
	     	}
	    }
	    printf("\n Matriks 1 : \n") ;
    	for (i = 0; i < m; i++)
		{
        	for (j = 0; j < n; j++)
			{
            	printf("%d\t", matriks1[i][j]) ;
        	}
        printf("\n") ;
    	}
	    printf ("\n Masukkan elemen matriks kedua : \n") ;
	    for (i = 0; i < p; i++)
	    {
	     	for (j = 0; j < q; j++)
			{
	        	scanf ("%d", &matriks2[i][j]) ;
	        }
	    }
	    printf("\n Matriks 2 : \n") ;
    	for (i = 0; i < p; i++)
		{
        	for (j = 0; j < q; j++)
			{
            	printf("%d\t", matriks2[i][j]) ;
        	}
        printf("\n") ;
    	}	
	    for (i = 0; i < m; i++)
	    {
	      	for (j = 0; j < q; j++)
			{
	 			for (k = 0; k < p; k++)
				{
	          		jumlah = jumlah + matriks1[i][k] * matriks2[k][j] ;
	        	}
	        hasil[i][j] = jumlah ;
	        jumlah = 0 ;
	        }
	    } 
	printf ("\n Hasil perkalian matriks : \n") ;
	for (i = 0; i < m; i++)
	{
	    for (j = 0; j < n; j++)
	    {
	    	printf ("%d\t", hasil[i][j]) ;
	    }
	    printf ("\n") ;
	}
	}
	
	return 0 ;
} 

int transpose ()
{
	int i, j, m, n ;
	int matriks[10][10] ;
	int transpose[10][10] ;
	printf (" Operasi Transpose Matriks \n") ;
	printf ("\n Masukkan Angka : \n") ;
	printf ("\n Masukkan jumlah baris matriks : ") ;
	m = validation() ;
	printf ("\n Masukkan jumlah kolom matriks : ") ;
	n = validation() ;
	printf ("\n Contoh pengisian elemen matriks dari kiri ke kanan (3x3)\n") ;
	printf ("\n Masukkan elemen matriks : \n") ;
	printf (" 1 2 3 4 5 6 7 8 9 \n") ;
	printf ("\n Hasil masukkan elemen matriks Anda akan muncul seperti di bawah ini. \n") ;
	printf ("\n 1 2 3 \n 4 5 6\n 7 8 9\n") ;
	printf ("\n Masukkan elemen matriks : \n") ;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
	      	scanf ("%d", &matriks[i][j]) ;
	    }
	}
	printf("\n Matriks : \n") ;
    for (i = 0; i < m; i++)
	{
        for (j = 0; j < n; j++)
		{
            printf("%d\t", matriks[i][j]) ;
        }
        printf("\n") ;
    }
	for (i = 0; i < m; i ++)
	{
	    for (j = 0; j < n; j++)
	    {
	      	transpose[j][i] = matriks[i][j] ;
	    } 
	}
	printf ("\n Hasil transpose matriks :\n") ;
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < m; j++)
		{
	      	printf ("%d\t", transpose[i][j]) ;
	    }
	printf ("\n") ;
	}
	return 0 ;
}

int check(int *var) 
{
	char buff[1024] ;
	char cek ;
	fflush(stdin) ;
	if(fgets(buff, sizeof(buff), stdin) != NULL)
	{
		if(sscanf(buff, "%d %c", var, &cek) == 1) 
		{
			return 1 ;
		}
	}
	return 0 ;
}

//Validasi
int correct(int *var, char *prompt) 
{
	while(1)
	{
		printf(prompt) ;
		if(check(var))
			break ;
		printf("\n Maaf!!! Kami hanya dapat menerima masukan berupa angka! \n") ;
		printf("\n") ;
	}
}

int validation() 
{
    int angka ;
    char karakter ;
    scanf("%d%c", &angka, &karakter) ;
    if(karakter != '\n' || angka < 0)
    {
        printf("\n Maaf!!! Kami hanya dapat menerima masukan berupa angka! \n\n") ;
        printf("\n Masukkan Ulang Angka : ") ;
        printf("\n") ;
        fflush(stdin) ;
        validation() ;
    }
	else
	{	
        return angka ;
    }
}

int perulangan() 
{
	char pilihan[2] ;
	printf ("\n Ingin Mencoba Kembali? (Y/T) : ") ; 
	scanf ("%s", &pilihan) ;
	system ("cls || clear") ;
	if (strcmp(pilihan, "y")==0)
	{
		system ("cls || clear") ;
		main () ;
	}
	else if (strcmp(pilihan, "t")==0) 
	{
		printf (" Terima Kasih ") ;	
		exit (0) ;
	}
	else 
	{
		printf ("\n Silahkan PILIH Y/T saja \n") ;	
		perulangan() ;
	}
	system("cls || clear") ;
}
