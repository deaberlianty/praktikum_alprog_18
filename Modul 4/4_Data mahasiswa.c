#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BARIS 1024

struct mahasiswa {
    char nama[1000];
    char nim[1000];
} mahasiswa;

int validasiAngka(const char *nim);
int validasiNama(const char *nama);
void inputData(struct mahasiswa mhs);
void cariData(struct mahasiswa mhs);

int main() {
    struct mahasiswa mhs;
    char input_menu[1024];

    printf(
        "=========================================================\n"
        "||                                                     ||\n"
        "||                      KELOMPOK 18                    ||\n"
        "||                     MODUL IV NO 4                   ||\n"
        "||                                                     ||\n"
        "=========================================================\n\n");
    printf("[1] Input data mahasiswa\n[2] Cari data mahasiswa\n\nPilih menu : ");
    scanf("%s", &input_menu);
    system("cls || clear");

    if (strcmp(input_menu, "1") == 0) {
        inputData(mhs);
    } else if (strcmp(input_menu, "2") == 0) {
        cariData(mhs);
    } else {
        printf("Menu tidak ditemukan !\nKetik Y / y jika ingin mengulang program : ");
        scanf("%s", &input_menu);

        if ((strcmp(input_menu, "y") == 0) || (strcmp(input_menu, "Y") == 0)) {
            system("cls || clear");
            getchar();
            main();
        }
    }

    printf("Program telah berakhir ~\nTekan sembarang untuk keluar");
    getch();
    exit(0);
}

void inputData(struct mahasiswa mhs) {
    int dataAda = 0;
    char input_menu[1024], buffer[MAX_BARIS];

    do {
        printf("Masukan detail informasi mahasiswa !\n\n");
        printf("Masukkan nim mahasiswa : ");
        scanf("%s", &mhs.nim);
        while (!validasiAngka(mhs.nim)) {
            printf("NIM tidak valid !\nMasukkan nim mahasiswa : ");
            scanf("%s", &mhs.nim);
        }
        fflush(stdin);
        printf("Masukkan nama mahasiswa : ");
        gets(mhs.nama);
        while (!validasiNama(mhs.nama)) {
            printf("Nama tidak valid !\nMasukkan nama mahasiswa : ");
            gets(mhs.nama);
        }
        fflush(stdin);
        FILE *fileData = fopen("datamahasiswa.txt", "r");

        if (fileData == NULL) {
            printf("Mohon maaf, file data mahasiswa tidak ditemukan !\nFile data mahasiswa baru akan dibuat dan disimpan pada directory program!\n");
        } else {
            rewind(fileData);
            while (fgets(buffer, MAX_BARIS, fileData)) {
                buffer[strcspn(buffer, "%s|%[^|]|\n")] = 0;
                if (strcmp(buffer, mhs.nim) == 0) {
                    printf("Mohon maaf, mahasiswa dengan NIM %s sudah ada dalam file data mahasiswa\n", buffer);
                    dataAda = 1;
                }
            }

            fclose(fileData);
        }

        if (dataAda == 0) {
            FILE *addData = fopen("datamahasiswa.txt", "a");
            fprintf(addData, "%s|%s|\n", mhs.nim, mhs.nama);
            fclose(addData);
            printf("\nBerhasil menambahkan data mahasiswa !\n");
        }

        dataAda = 0;
        printf("\nKetik Y / y jika ingin mengulang menginputkan data : ");
        scanf(" %s", &input_menu);
        system("cls || clear");
        fflush(stdin);
    } while ((strcmp(input_menu, "y") == 0) || (strcmp(input_menu, "Y") == 0));

    main();
}

void cariData(struct mahasiswa mhs) {
    char input_menu[1024];
    int ketemu = 0;

    do {
        char nim[1000];
        printf("Masukkan nim mahasiswa yang ingin dicari : ");
        scanf("%s", &nim);
        while (!validasiAngka(nim)) {
            printf("NIM tidak valid !\nMasukkan nim mahasiswa yang ingin dicari : ");
            scanf("%s", &nim);
        }
        fflush(stdin);
        FILE *fileData = fopen("datamahasiswa.txt", "r");

        if (fileData == NULL) {
            printf("Mohon maaf, file tidak ditemukan !\n");
        } else {
            while (!feof(fileData)) {
                fflush(stdin);
                fscanf(fileData, "%[^|]|%[^|]|\n", &mhs.nim, &mhs.nama);
                if (strcmp(mhs.nim, nim) == 0) {
                    printf("\nInformasi Mahasiswa :\n");
                    printf("NIM : %s\n", mhs.nim);
                    printf("Nama : %s\n", mhs.nama);
                    ketemu = 1;
                }
            }
            fclose(fileData);
        }

        if (ketemu == 0) {
            printf("\nMohon maaf data mahasiswa dengan nim %s tidak ditemukan !\n\n", nim);
        }

        ketemu = 0;
        printf("\nKetik Y / y jika ingin mengulang mencari data : ");
        scanf(" %s", &input_menu);
        system("cls || clear");
        fflush(stdin);
    } while ((strcmp(input_menu, "y") == 0) || (strcmp(input_menu, "Y") == 0));

    main();
}

int validasiAngka(const char *nim) {
    for (int i = 0; i < strlen(nim); ++i) {
        if (!isdigit(nim[i])) {
            return 0;
        }
    }
    return 1;
}

int validasiNama(const char *nama) {
    for (int i = 0; i < strlen(nama); ++i) {
        if (!isalpha(nama[i]) && !isspace(nama[i])) {
            return 0;
        }
    }
    return 1;
}