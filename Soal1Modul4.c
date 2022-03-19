#include <stdio.h>															//library standar
#include <stdlib.h>															//menkonversi string menjadi integer

struct gaji {
    double waktu_kerja;
    double waktu_wajib;
    double gaji_total;
    double gaji_pokok;
    double lembur;
    double waktu_lembur;
} perhitung_gaji;

struct pendataan {
    double waktu_wajib;
    double gaji_perjam;
} pendataan_gaji;


// fungsi prototype 
int validation();
void hitung(int pilihan);
void perulangan();


int main() {
    int pilihan;
    system("cls || clear");													//membersihkan layar		
    printf("=============================================\n");
    printf("|                SELAMAT DATANG             |\n");   
    printf("|             Program Hitung Gaji           |\n");
    printf("|               Penggunaan struct           |\n");
    printf("=============================================\n");
    printf("|         Silahkan ketik pilihan Menu       |\n");
    printf("|               [1] Menghitung              |\n");
    printf("|               [0] Keluar                  |\n");
    printf("=============================================\n");
    validation(&pilihan, "Masukkan Pilihan Anda : ");
    system("cls || clear");
    hitung(pilihan);
}

int input(int *pilih) {
    char buff[1024];
    char term;
    if (fgets(buff, sizeof(buff), stdin) != NULL && sscanf(buff, "%d %c", pilih, &term) == 1) {
        if (*pilih < 0 || *pilih > 1) {
            printf("\t\t\tPilihan yang anda masukkan SALAH, Harap Masukkan pilihan 0 atau 1!\n");
            return 0;
        } else if (*pilih == 0) {
            system("cls || clear");
            printf("Terima Kasih !\n");
            exit(0);
        }
        return 1;
    }
    printf("Pilihan yang anda masukkan SALAH, Harap Masukkan pilihan Angka yang tertera!\n");
    return 0;
}

double validasi_double(double *var) {
    char buff[1024];
    char check;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL) {
        if (sscanf(buff, "%lf %c", var, &check) == 1) {
            if (*var < 1) {
                printf("Harap masukkan Jam kerja tidak kurang dari 1 jam !\n");
                return 0;
            } else if (*var > 24) {
                printf("Harap masukkan Jam kerja tidak lebih dari 24 jam !\n");
                return 0;
            }
            return 1;
        }
    }
    printf("\t\t\tPilihan yang anda masukkan SALAH, Harap Masukkan pilihan Angka yang tertera\n");
    return 0;
}

void validasi_input(double *var, char *prompt) {
    while (1) {
        printf("%s", prompt);
        if (validasi_double(var))
            break;
    }
}

int validation(int *variabel, char *statement) {
    while (1) {
        printf("%s", statement);
        if (input(variabel))
            break;
    }
    return 1;
}

void hitung(int pilihan) {
    pendataan_gaji.waktu_wajib = 8;
    pendataan_gaji.gaji_perjam = 10.625;
    validasi_input(&perhitung_gaji.waktu_kerja, "\nJam Kerja (max: 24 jam, min: 1 jam)     :");

    if (pilihan == 1) {
        if (perhitung_gaji.waktu_kerja > pendataan_gaji.waktu_wajib) {
            perhitung_gaji.gaji_pokok   = pendataan_gaji.gaji_perjam * 8;
            perhitung_gaji.waktu_lembur = perhitung_gaji.waktu_kerja - pendataan_gaji.waktu_wajib;
            perhitung_gaji.waktu_wajib  = perhitung_gaji.waktu_kerja - perhitung_gaji.waktu_lembur;
            perhitung_gaji.lembur       = perhitung_gaji.waktu_lembur * pendataan_gaji.gaji_perjam * 8;
            perhitung_gaji.gaji_total   = perhitung_gaji.gaji_pokok + perhitung_gaji.lembur;
        } else {
            perhitung_gaji.gaji_pokok   = pendataan_gaji.gaji_perjam * perhitung_gaji.waktu_kerja;
            perhitung_gaji.waktu_lembur = 0;
            perhitung_gaji.waktu_wajib  = perhitung_gaji.waktu_kerja - perhitung_gaji.waktu_lembur;
            perhitung_gaji.lembur       = 0;
            perhitung_gaji.gaji_total   = perhitung_gaji.gaji_pokok + perhitung_gaji.lembur;
        }
    }
    
    system("cls || clear");
    printf("================================================\n");
    printf("                   RINCIAN GAJI               \n");
    printf("================================================\n");
    printf("            Gaji per jam = Rp. 10.625         \n");
    printf("         Gaji lembur = 8 x Gaji per jam       \n");
    printf("================================================\n");
    printf("  Jumlah Jam Kerja Total           :%.1lf jam \n", perhitung_gaji.waktu_kerja);
    printf("  Jumlah Jam Wajib                 :%.1lf jam \n", perhitung_gaji.waktu_wajib);
    printf("  Jumlah Jam Lembur                :%.1lf jam \n", perhitung_gaji.waktu_lembur);
    printf("================================================\n");
    printf("  Jumlah Gaji pokok                :Rp%.3lf,- \n", perhitung_gaji.gaji_pokok);
    printf("  Jumlah Gaji Lembur               :Rp%.3lf,- \n", perhitung_gaji.lembur);
    printf("================================================\n");
    printf("  Jumlah Gaji Total                :Rp%.3lf,- \n", perhitung_gaji.gaji_total);
    printf("================================================\n");
    perulangan();
}


void perulangan() {
    int i = 0; 															//validasi
    char perulangan[10]; 												//mengulang
    char ulang;

    while ( i == 0 ) { 
        printf("\n\n================================================\n");
        printf("Apakah anda ingin mengulang program ini? (Y/N)?\n");
        printf(">>> ");
        fgets(perulangan, 9, stdin);

        if (strlen(perulangan) < 1 || strlen(perulangan) > 2) {
           printf("#### 404 NOT FOUND ####\nSilahkan PILIH y/n\n");
           continue;
        }

       if (sscanf(perulangan, "%c", &ulang) != 1) {
            printf("### 404 Not Found ###\n");
        }
        
        ulang = toupper(ulang);
        if ( ulang == 'Y') {													
            main(); 
            i = 1; 
        } else if ( ulang == 'N') {  
            i = 1;  
            printf("================ Terima Kasih ================"); 
        } else  
            printf("#### 404 NOT FOUND ####\n*** Silahkan PILIH y/n\n");
    }

    system("cls || clear");
}

