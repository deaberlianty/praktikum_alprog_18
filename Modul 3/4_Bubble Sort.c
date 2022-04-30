#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int validation() ;
int perulangan () ;

int main(void)
{
	int a, b, c ;
	
	printf (" Silahkan masukkan jumlah angka yang diinginkan : ") ;
	a = validation() ;
	
	for(c = 0; c <= a; c++)
	{
	b = rand () % 1000 + 1 ;
	printf("%d\n") ;
	}
	system ("pause") ;
	system ("cls ||  clear") ;
	
	printf("Hasil pengurutan : \n");
  	for (c = 0; c <= b ; c++)
  	{
  		printf("%d\n", b) ;
	}
    
    return 0 ;
}

int validation() 
{
    int angka ;
    char karakter ;
    scanf("%d%c", &angka, &karakter) ;
    if(karakter != '\n' || angka<0)
    {
        printf(" Maaf!!! Kami hanya dapat menerima masukan berupa angka! \n\n") ;
        printf(" Masukkan Ulang Angka : ") ;
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
	printf (" Ingin Mencoba Kembali? (Y/T) : ") ; 
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
		printf (" Silahkan PILIH Y/T saja \n") ;	
		perulangan() ;
	}
	system("cls || clear") ;
}
