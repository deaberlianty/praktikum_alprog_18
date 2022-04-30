// I Komang Cleon Kalea
// 2105551090
// Kelompok 18
// Modul 3 no.5

#include <stdio.h>
#include <windows.h>

void clear(){
    system("cls | clear");
}

void pembatas(){
    char pembatas[] = "---------------------------------------------------------\n";
    printf("%s", pembatas);
}

int validasi_integer() {
    int bilangan;
    char ch;

    scanf("%d%c", &bilangan, &ch);

    if(ch != '\n' || bilangan < 0){
        printf("\n\nInput yang dimasukkan tidak berupa angka!\n", bilangan, ch);
        
        pembatas();
        printf("Silahkan Input Ulang : ");

        fflush(stdin);
        validasi_integer();
        
    }else{
        return bilangan;
    }
}

void enkripsi(){
    char text[255];
    char huruf;
    int i;
    int cypher;

    printf("Masukkan Kalimat yang ingin dienkripsi : ");
    scanf(" %[^\n]", text);

    printf("Masukkan Cipherkey : ");
    cypher = validasi_integer();

    for(i = 0 ; text[i] != '\0'; i++){
        huruf = text[i];
        
        if(huruf >= 'a' && huruf <= 'z'){
            huruf = huruf + cypher;

            if(huruf  > 'z'){
                huruf = huruf - 'z' + 'a' - 1;
            }
            text[i] = huruf;

        }else if(huruf >= 'A' && huruf <= 'Z'){
            huruf = huruf + cypher;

            if(huruf > 'Z'){
                huruf = huruf - 'Z' + 'A' - 1;
            }
            text[i] = huruf;
        }
    }

    pembatas();
    printf("Hasil Enkripsi : %s", text);
}

void dekripsi(){
    char text[255];
    char huruf;
    int i;
    int cypher;

    printf("Masukkan Kalimat yang ingin didekripsi : ");
    scanf(" %[^\n]s", text);

    printf("Masukkan Cipherkey : ");
    cypher = validasi_integer();

    for(i = 0 ; text[i] != '\0'; i++){
        huruf = text[i];
        
        if(huruf >= 'a' && huruf <= 'z'){
            huruf = huruf - cypher;

            if(huruf  > 'z'){
                huruf = huruf + 'z' - 'a' - 1;
            }
            text[i] = huruf;

        }else if(huruf >= 'A' && huruf <= 'Z'){
            huruf = huruf - cypher;

            if(huruf > 'Z'){
                huruf = huruf + 'Z' - 'A' - 1;
            }
            text[i] = huruf;
        }
    }

    pembatas();
    printf("Hasil Dekripsi : %s", text);
}

int main(){
    int pilihan;
    int i;
    int j;

    do{
        clear();
        j = 0; 
        do{
            

            printf("\t\tENKRIPSI DAN DEKRIPSI\n");
            pembatas();

            printf("1. Enkripsi\n2. Dekripsi\n");
            pembatas();

            printf("Masukkan Program Yang Ingin Digunakan : ");
            pilihan = validasi_integer();
            
            pembatas();
            if(pilihan == 1){
                enkripsi();
                j = 1;

            }else if(pilihan == 2){
                dekripsi();
                j = 1;

            }else{
                clear();

                pembatas();
                printf("%d <- Input yang dimasukkan tidak valid !!\n\n", pilihan);
                pembatas();
            }

        }while(j == 0);

        printf("\nApakah anda ingin menggunakan program lagi ? \n( 1. Iya | 2. Tidak) : ");
        i = validasi_integer();

    }while(i == 1);

    clear();
    return 0;
}
