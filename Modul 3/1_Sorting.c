#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void array(int source[], int target[], int n) ; 
void bubble_sort(int data[], int banyakdata) ;
void insertion_sort(int data[], int banyakdata) ;
int partisi_quick_sort (int data[], int min, int max) ;
void quick_sort(int data[], int min, int max) ;

float durasi_bubble_sort(int data[], int banyakdata) ;
float durasi_insertion_sort(int data[], int banyakdata) ;
float durasi_quick_sort(int data[], int banyakdata) ;
float durasi_sequential_search(int data[], int banyakdata, int bilangan) ;
float durasi_binary_search(int data[], int banyakdata, int bilangan) ;

int sequential_search(int data[], int bilangan, int banyakdata) ;
int binary_search(int data[], int min, int max, int bilangan) ;
void sub_menu(int data[], int banyakdata) ;
void bilangan_acak(int data[], int banyakdata) ;
void print_bilangan(int data[], int banyakdata) ;
int validasi(int *var) ;
void sortsearch(int *var, char *prompt) ;
void ulang() ;
int data[64000] ;
int banyakdata ;

//fungsi menu pertama
int main()
{
	system("cls || clear") ;
    int pilihan ;
    int banyakdata ;

	printf("===========================================================\n") ;
    printf("|                       SELAMAT DATANG                    |\n") ;   
    printf("|               PROGRAM SORTING dan SEARCHING             |\n") ;
	printf("===========================================================\n\n") ;
	printf("===========================================================\n") ;
    printf("\t\t Menu Pilihan banyak data :\n") ;
    printf("\t\t 1. 1000 data \n") ;
	printf("\t\t 2. 16000 data \n") ;
	printf("\t\t 3. 64000 data \n") ;
	printf("\t\t 4. Keluar dan Selesai \n") ;
	printf("===========================================================\n") ;
	sortsearch(&pilihan, " Masukkan Pilihan Anda (1/2/3/4) : ") ;
    while(pilihan<1||pilihan>4)
	{
        printf("\n Pilihan yang Anda masukkan salah!") ;
        sleep(3) ;
        main() ;
    }
    switch(pilihan)
	{
        case 1 : 
            banyakdata = 1000 ;
            break ;
        case 2 : 
            banyakdata = 16000 ;
            break ;
        case 3 : 
            banyakdata = 64000 ;
            break ;
        case 4 :
        	printf(" Terima Kasih! Created by Kelompok 18") ; 
			exit (0) ;
			break ;
		default:
			printf("||---------------------------------------------------||\n") ;
			printf("||                #### 404 NOT FOUND ####            ||\n") ;
			printf("|| Pilihan Anda salah! Silakan pilih angka 1-4 saja! ||\n") ;
			printf("||---------------------------------------------------||\n") ;
			printf("\n") ;
			break ;
    }
    int data [banyakdata] ; 
    //print bilangan (data,banyakdata);
    sub_menu (data, banyakdata) ;
}

//fungsi sub menu
void sub_menu(int data[], int banyakdata)
{
    int pilihan, min, max ;
    float durasi, durasi2, durasi3 ;
    int bilangan ;
    printf("\n Pilih metode yang ingin Anda gunakan :\n") ;
    printf(" 1. Sorting (Bubble Sort,  Insertion Sort,  Quick Sort)\n") ;
    printf(" 2. Searching (Binary Search,  Sequential Search)\n") ;
	sortsearch(&pilihan, "\n Masukkan Pilihan Anda (1/2) : ") ;
    while(pilihan<1||pilihan>2)
	{
    	printf("||---------------------------------------------------||\n") ;
		printf("||                #### 404 NOT FOUND ####            ||\n") ;
		printf("||           Pilihan yang Anda masukkan salah!       ||\n") ;
		printf("||---------------------------------------------------||\n") ;
        sleep(3) ;
        sub_menu(data, banyakdata) ;
    }
	printf ("\n Bilangan sebelum di Sorting :\n") ;
	bilangan_acak (data, banyakdata) ;
    print_bilangan(data, banyakdata) ;
    printf("\n Bilangan sesudah di Sorting :\n") ;
    insertion_sort(data, banyakdata) ;
    bubble_sort(data, banyakdata) ;
    quick_sort(data, min, max) ;
	print_bilangan(data, banyakdata) ;
    switch (pilihan)
	{
        case 1 :
        	bilangan_acak(data, banyakdata) ;
            durasi_bubble_sort(data, banyakdata) ;
            bilangan_acak(data, banyakdata) ;
            durasi_insertion_sort(data, banyakdata) ;
            bilangan_acak(data, banyakdata) ;
            durasi_quick_sort(data, banyakdata) ;
            break;
        case 2:
        	sortsearch(&bilangan, "\n Masukan Data yang ingin dicari  : ") ;
            durasi = durasi_sequential_search(data, banyakdata, bilangan) ; 
            durasi2 = durasi_binary_search(data, banyakdata, bilangan) ; 
            break ;
    }
	perulangan() ;  
} 

//membuat angka acak
void bilangan_acak(int data[], int banyakdata)
{
    srand(0) ;
    int i ;
    for (i = 0; i < banyakdata ; i++)
        data[i] = rand() ;
}

//print angka acak
void print_bilangan(int data[], int banyakdata)
{
   int i, j ;
   for (i = 0; i < banyakdata; i++) 
   {
   		printf("\t") ;
   		for (j = 0; j <= 10; j++)
   		{
   			printf("%d ", data[i]) ;
		}
		printf("\n\n") ;
   }     
}

//fungsi bubble sort
void bubble_sort(int data[], int banyakdata)
{
    int i, j,temp ;
    for (i = 0; i < banyakdata-1; i++)      
         for (j = 0; j < banyakdata-i-1; j++) 
            if (data[j] > data[j+1])
			{
                temp = data[j] ;
                data[j] = data[j+1] ;
                data[j+1] = temp ;
    }
}

//insertion sort
void insertion_sort(int data[], int banyakdata)
{
    int i, j, temp ;
    for (i = 1; i < banyakdata; i++)
	{
        temp = data[i] ;
        j = i - 1 ;
        while (j >= 0 && data[j] > temp)
		{
            data[j + 1] = data[j] ;
            j = j - 1 ;
        }
        data[j + 1] = temp ;
    }
}

//partisi
int partisi (int data[], int min, int max)
{
    int pivot = data[max] ;    
    int temp ;
    int i = (min - 1) ;  
    int j ;
    for (j = min; j <= max- 1; j++)
    {
        if (data[j] <= pivot)
        {
            i++ ;    
            temp = data[i] ;
            data[i] = data[j] ;
            data[j] = temp ;
        }
    }
    temp = data[i+1] ;
    data[i+1] = data[max] ;
    data[max] = temp ;
    return (i + 1) ;
}
 
//quick sort
void quick_sort(int data[], int min, int max)
{
    if (min < max)
    {
        int pi = partisi(data, min, max) ;
        quick_sort(data, min, pi - 1) ;
        quick_sort(data, pi + 1, max) ;
    }
}

//sequential search
int sequential_search(int data[], int banyakdata, int bilangan)
{
    int i ;
	for(i = 0; i < banyakdata ; i++)
	{
        if(data [i] == bilangan)
		{
            return i ;
        }
    }
    return -1 ;
}

//binary search
int binary_search(int data[],int min,int max, int bilangan)
{
	int mid ;
    if (max >= min)
	{
        mid = min + (max - min)/2 ;
        if (data[mid] == bilangan)
		{
            return mid ;	
		}
		else if (data[mid] > bilangan)
		{
            return binary_search(data, min, mid-1, bilangan) ;	
		}
		else
		{
			return binary_search(data, mid+1, max, bilangan) ;
		}
   }
   return -1 ;
}

//menghitung durasi waktu bubble sort
float durasi_bubble_sort(int data[], int banyakdata)
{
    clock_t start = clock() ;
    bubble_sort(data,banyakdata) ;
    clock_t end = clock() ;
    float wkt = (float)(end - start) / CLOCKS_PER_SEC ;
    printf("\n Durasi waktu yang di perlukan untuk sorting dengan menggunakan metode Bubble Sort = %lf s", wkt) ;
}

//menghitung durasi waktu insertion sort
float durasi_insertion_sort(int data[], int banyakdata)
{
    clock_t start = clock() ;
    insertion_sort(data,banyakdata) ;
    clock_t end = clock() ;
    float wkt = (float)(end - start) / CLOCKS_PER_SEC ;
    printf("\n Durasi waktu yang di perlukan untuk sorting dengan menggunakan metode Insertion Sort = %lf s", wkt) ;
}

//waktu quick sort
float durasi_quick_sort(int data[], int banyakdata)
{
    clock_t start = clock() ;
    quick_sort(data,0,banyakdata-1) ;
    clock_t end = clock() ;
    float wkt = (float)(end - start) / CLOCKS_PER_SEC ;
    printf("\n Durasi waktu yang di perlukan untuk sorting dengan menggunakan metode Quick Sort = %.2f s", wkt) ;
}

//waktu sequential 
float durasi_sequential_search(int data[], int banyakdata, int bilangan)
{
    int array ;
    clock_t start = clock() ;
    array = sequential_search(data, banyakdata, bilangan) ;
    clock_t end = clock() ;
    float wkt = (float)(end - start) / CLOCKS_PER_SEC ;
    printf("\n Durasi waktu yang di perlukan untuk searching dengan menggunakan metode Sequential Search = %lf s", wkt) ;
    if(array == -1)
	{
        printf("\n Bilangan %d tidak terdapat pada array\n", bilangan) ; 
    }
	else
	{
        printf("\n SEQUENTIAL SEARCH : Bilangan %d berada di array di indeks ke %d\n", bilangan, array) ;    
    }
    return wkt ;
}

//waktubinary
float durasi_binary_search(int data[], int banyakdata, int bilangan)
{
    int array ;
    clock_t start = clock() ;
    array = binary_search(data, 0, banyakdata-1, bilangan) ;
    clock_t end = clock() ;
    float wkt = (float)(end - start) / CLOCKS_PER_SEC ;
    printf("\n Durasi waktu yang di perlukan untuk searching dengan menggunakan metode Binary Search = %lf s", wkt) ;
    if(array == -1)
	{
        printf("\n Bilangan %d tidak terdapat pada array\n", bilangan) ;  
    }
	else 
	{
        printf("\n BINARY SEARCH : Bilangan %d berada di array di indeks ke %d\n", bilangan, array) ;    
    }
 
}

int validasi(int *var)
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

void sortsearch(int *var, char *prompt)
{
	while(1)
	{
		printf(prompt) ;
		if(validasi(var))
			break ;
		printf("\n Maaf masukan yang Anda inputkan salah. Silakan coba kembali.\n") ;
    	sleep(3) ;
	}
}

void perulangan()
{
	char pilihan[2] ;
	printf("\n\n Apakah Anda ingin mengulang program ini (y/n)?") ;
	scanf("%s", &pilihan) ;
	if(strcmp(pilihan, "y")==0)
	{
		system("cls || clear") ;
		main() ;
	}
	else if(strcmp(pilihan, "n")==0)
	{
		printf("\n||-----------------------------------------------------||") ;
		printf("\n||================    Terima Kasih    =================||") ;
		printf("\n||-----------------------------------------------------||\n") ;
		exit(0) ;
	}
	else
	{
		printf("||---------------------------------------------------||\n") ;
		printf("||                #### 404 NOT FOUND ####            ||\n") ;
		printf("||                   Silahkan pilih y/n              ||\n") ;
		printf("||---------------------------------------------------||\n") ;
		perulangan() ;
	}

    system("cls || clear") ;
}
