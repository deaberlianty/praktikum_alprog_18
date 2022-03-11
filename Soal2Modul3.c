#include <stdio.h>

int penjumlahan () ;
int perkalian () ;
int tranpose () ;

int main ()
{
	int list ; 
	menu :
	printf ("-> PROGRAM OPERASI MATEMATIKA PADA MATRIKS MODUL 3 SOAL 2 <- \n") ;
	printf ("=============================================================\n") ;
	printf ("Silakan tentukan operasi yang akan dilakukan! \n") ;
	printf( " 1. Penjumlahan\n 2. Perkalian\n 3. Tranpose\n 0. Keluar dan Selesai\n") ;
	printf ("Masukkan Pilihan Anda (0/1/2/3): ") ;
	scanf ("%d", &list) ;
	printf ("************************************************************ \n") ;
	printf ("\n") ; 

switch (list)
{
	case 1 : penjumlahan () ; goto menu ; break ;
	case 2 : perkalian () ; goto menu ; break ;
	case 3 : tranpose () ; goto menu ; break ;
	case 0 : printf ("Terima Kasih! Created by Kelompok 18 :)") ; break ;
	default :
		printf ("Pilihan yang anda tentukan salah! Silakan pilih angka 0-5 saja! \n") ; 
		printf ("*************************************************************** \n") ;
		printf ("\n") ; goto menu ; break ;
	}
}

int penjumlahan () 
{   
  printf ("Operasi Penjumlahan Matriks \n") ;
  printf ("Masukkan Angka: \n");int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10] ;
  printf ("Masukkan jumlah baris matriks: ") ;
  scanf ("%d", &m) ;
  printf ("Masukkan jumlah kolom matriks: ") ;
  scanf ("%d", &n) ;
  printf ("Masukkan elemen matrix pertama: \n") ;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf ("%d", &matriks1[i][j]) ;
    }
  }
  printf ("Masukkan elemen matrix kedua: \n") ;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf ("%d", &matriks2[i][j]) ;
    }
  }
  printf ("hasil penjumlahan matrix: \n") ;
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
  printf ("Operasi Perkalian Matriks \n") ;
  printf ("Masukkan Angka: \n") ;
  int matriks1[10][10], matriks2[10][10], hasil[10][10] ;
  int i, j, k, m, n, p, q, jumlah = 0 ;
  printf ("Masukkan jumlah baris matriks pertama : ") ;
  scanf ("%d",&m) ;
  printf ("Masukkan jumlah kolom matriks pertama : ") ;
  scanf ("%d",&n) ;
  printf ("Masukkan jumlah baris matriks kedua : ") ;
  scanf ("%d",&p) ;
  printf ("Masukkan jumlah kolom matriks kedua : ") ;
  scanf ("%d",&q) ;
  if (n != p)
  { 
    printf ("Matriks tidak dapat dikalikan satu sama lain.\n") ;
  } else {
    printf ("Masukkan elemen matriks pertama : \n") ;
    for (i = 0; i < m; i++)
	{
      for (j = 0; j < n; j++)
	  {
        scanf ("%d", &matriks1[i][j]) ;
      }
    }
    printf ("Masukkan elemen matriks kedua : \n") ;
    for (i = 0; i < p; i++)
	{
      for (j = 0; j < q; j++)
	  {
        scanf ("%d", &matriks2[i][j]) ;
      }
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
    printf ("Hasil perkalian matriks: \n") ;
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

int tranpose ()
{
  printf ("Operasi Tranpose Matriks \n") ;
  printf ("Masukkan Angka: \n") ;
  int i, j, m, n ;
  int matriks[10][10] ;
  int transpose[10][10] ;
  printf ("Masukkan jumlah baris matriks: ") ;
  scanf ("%d", &m) ;
  printf ("Masukkan jumlah kolom matriks: ") ;
  scanf ("%d", &n) ;
  printf ("Masukkan elemen matriks:\n") ;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
	{
      scanf ("%d", &matriks[i][j]) ;
    }
  }
  for (i = 0; i < m; i ++)
  {
    for (j = 0; j < n; j++)
	{
      transpose[j][i] = matriks[i][j] ;
    } 
  }
  printf ("Hasil transpose matriks:\n") ;
  for (i = 0; i < n; i ++)
  {
    for (j = 0; j < m; j++)
	{
      printf ("%d\t",transpose[i][j]) ;
    }
    printf ("\n") ;
  }
  return 0 ;
}

