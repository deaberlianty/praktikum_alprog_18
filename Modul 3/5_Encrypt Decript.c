#include <stdio.h>
#include <windows.h>
#include <string.h>

void clear(){
    system("cls || clear");
}

void pembatas(){
    char pembatas[] = "----------------------------------------------------------------------------\n";
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

void hasil_enkripsi_cypher(int cypher){
    char alphabets[26];
    char pergeseran_alphabets[26];
    char huruf;
    int i = 0;

    pembatas();

    for(huruf = 'A'; huruf <= 'Z' ; huruf++){
        if(i < 26){
            alphabets[i] = huruf;
            i++;
        }
    }

    for(i = 0 ; i < 26 ; i++){
        printf("%c  ", alphabets[i]);
    }

    printf("\n");

    for(i = 0 ; i < 26 ; i++){
        printf("|  ");
    }

    printf("\n");

    strcpy(pergeseran_alphabets, alphabets);
    
    for(i = 0; pergeseran_alphabets[i] != '\0'; i++){
        if(pergeseran_alphabets[i] >= 'A' && pergeseran_alphabets[i] <= 'Z') {
            pergeseran_alphabets[i] = pergeseran_alphabets[i] + 32;
        }
        
        if(pergeseran_alphabets[i] >= 'a' && pergeseran_alphabets[i] <= 'z'){
            pergeseran_alphabets[i] = pergeseran_alphabets[i] + cypher;

            if(pergeseran_alphabets[i] > 'z'){
                pergeseran_alphabets[i] = pergeseran_alphabets[i] - 26;
            }
            pergeseran_alphabets[i] = pergeseran_alphabets[i] - 32;
        }
	}

    for(i = 0 ; i < 26 ; i++){
        printf("%c  ", pergeseran_alphabets[i]);
    }

    printf("\n");
}

void hasil_dekripsi_cypher(int cypher){
    char alphabets[26];
    char pergeseran_alphabets[26];
    char huruf;
    int i = 0;

    pembatas();

    for(huruf = 'A'; huruf <= 'Z' ; huruf++){
        if(i < 26){
            alphabets[i] = huruf;
            i++;
        }
    }

    for(i = 0 ; i < 26 ; i++){
        printf("%c  ", alphabets[i]);
    }

    printf("\n");

    for(i = 0 ; i < 26 ; i++){
        printf("|  ");
    }

    printf("\n");

    strcpy(pergeseran_alphabets, alphabets);
    
    for(i = 0; pergeseran_alphabets[i] != '\0'; i++){
		if(pergeseran_alphabets[i] >= 'a' && pergeseran_alphabets[i] <= 'z') {
        	pergeseran_alphabets[i] = pergeseran_alphabets[i] - 32;
      	}
      
		if(pergeseran_alphabets[i] >= 'A' && pergeseran_alphabets[i] <= 'Z'){
			pergeseran_alphabets[i] = pergeseran_alphabets[i] - cypher;

			if(pergeseran_alphabets[i] < 'A'){
				pergeseran_alphabets[i] = pergeseran_alphabets[i] + 26;
			}
			pergeseran_alphabets[i] = pergeseran_alphabets[i] +32;
		}
	}

    for(i = 0 ; i < 26 ; i++){
        printf("%c  ", pergeseran_alphabets[i]);
    }
    
    printf("\n");
}

void enkripsi(){
    char text[255];
    int i = 0;
    int cypher;

    pembatas();
    printf("Masukkan Kalimat yang ingin dienkripsi : ");
    scanf(" %[^\n]", text);

    printf("Masukkan Cipherkey : ");
    cypher = validasi_integer();

    hasil_enkripsi_cypher(cypher);
    
    for(i = 0; text[i] != '\0'; i++){
		if(text[i] >= 'A' && text[i] <= 'Z') {
        	text[i] = text[i] + 32;
      	}
      
		if(text[i] >= 'a' && text[i] <= 'z'){
			text[i] = text[i] + cypher;
			if(text[i] > 'z'){
				text[i] = text[i] - 26;
			}
			text[i] = text[i] - 32;
		}
	}

    pembatas();
    printf("Hasil Enkripsi : %s\n", text);
}

void dekripsi(){
    char text[255];
    int i;
    int cypher;

    pembatas();
    printf("Masukkan Kalimat yang ingin didekripsi : ");
    scanf(" %[^\n]s", text);

    printf("Masukkan Cipherkey : ");
    cypher = validasi_integer();

    hasil_dekripsi_cypher(cypher);

    for(i = 0; text[i] != '\0'; i++){
		if(text[i] >= 'a' && text[i] <= 'z') {
        	text[i] = text[i] - 32;
      	}
      
		if(text[i] >= 'A' && text[i] <= 'Z'){
			text[i] = text[i] - cypher;
			if(text[i] < 'A'){
				text[i] = text[i] + 26;
			}
			text[i] = text[i] + 32;
		}
	}

    pembatas();
    printf("Hasil Dekripsi : %s\n", text);
}

int main(){
    int pilihan;
    int i;
    int j;

    do{
        clear();
        j = 0; 

        do{
     
            printf("\t\t\t    ENKRIPSI DAN DEKRIPSI\n");
            pembatas();

            printf("1. Enkripsi\n2. Dekripsi\n3. Keluar Dari Program\n");
            pembatas();

            printf("Masukkan Program Yang Ingin Digunakan : ");
            pilihan = validasi_integer();
            
            pembatas();
            if(pilihan == 1){
                clear();
                enkripsi();
                j = 1;

            }else if(pilihan == 2){
                clear();
                dekripsi();
                j = 1;

            }else if(pilihan == 3){
                clear();
                exit(1);

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
