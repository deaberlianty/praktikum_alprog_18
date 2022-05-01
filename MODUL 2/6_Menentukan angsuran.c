#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void gotoxy(int x, int y);
void clearBuffer();
int validasiFloat();
int validasiInteger();

int main() {
    int jangkaWaktu;
    float pokokPinjaman, bunga, angsuranPokok, bungaBulanSekian, totalBunga, angsuranPerBulan, totalAngsuran;
    char input_menu[1024];

    do {
        printf(
            "=========================================================\n"
            "||                                                     ||\n"
            "||                      KELOMPOK 18                    ||\n"
            "||                     MODUL II NO 6                   ||\n"
            "||                                                     ||\n"
            "=========================================================\n\n");
        printf(
            "[1] Menentukan angsuran berdasarkan pokok pinjaman, bunga dan lama pinjaman\n"
            "[2] Keluar dari program\n\n"
            "Pilih menu : ");
        scanf("%s", &input_menu);
        fflush(stdin);
        system("cls || clear");

        if (strcmp(input_menu, "1") == 0) {
            printf("Pokok pinjaman :\n");
            pokokPinjaman = validasiFloat();
            printf("\n");
            printf("Bunga :\n");
            bunga = validasiFloat();
            printf("\n");
            bunga /= 100;
            printf("Jangka waktu :\n");
            jangkaWaktu = validasiInteger();
            printf("\n");
            angsuranPokok = pokokPinjaman / jangkaWaktu;
            totalBunga = 0;
            totalAngsuran = 0;
            system("cls || clear");

            gotoxy(0, 0);
            printf("Bulan");
            gotoxy(13, 0);
            printf("Bunga");
            gotoxy(26, 0);
            printf("Angsuran Pokok");
            gotoxy(45, 0);
            printf("Angsuran Perbulan");

            for (float i = 1; i <= jangkaWaktu; i++) {
                gotoxy(2, i + 1);
                printf("%.0f", i);

                bungaBulanSekian = (pokokPinjaman - ((i - 1) * angsuranPokok)) * (bunga / 12);
                gotoxy(12, i + 1);
                printf("Rp. %.0f", bungaBulanSekian);
                totalBunga += bungaBulanSekian;

                gotoxy(26 + 3, i + 1);
                printf("Rp. %.0f", angsuranPokok);

                angsuranPerBulan = angsuranPokok + bungaBulanSekian;
                gotoxy(49, i + 1);
                printf("Rp. %.0f", angsuranPerBulan);
                totalAngsuran += angsuranPerBulan;
            }

            printf("\n\nTotal bunga    : Rp. %.0f\n", totalBunga);
            printf("Total angsuran : Rp. %.0f\n", totalAngsuran);
        } else if (strcmp(input_menu, "2") == 0) {
            break;
        } else {
            printf("Menu tidak ditemukan !\n");
        }

        printf("\nKetik Y / y jika ingin mengulang program : ");
        scanf(" %s", &input_menu);
        system("cls || clear");
        getchar();

    } while ((strcmp(input_menu, "y") == 0) || (strcmp(input_menu, "Y") == 0));

    printf("Program telah berakhir ~\n");
    system("pause");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int validasiInteger() {
    int input, temp;
    char karakter;
    printf("Masukkan angka : ");

    if (scanf("%d%c", &input, &karakter) != 2 || karakter == ',' || karakter != '\n') {
        clearBuffer();
        printf("Tolong input berupa angka!\nMasukkan Panjangnya : ");
        return validasiInteger();
    } else {
        temp = input;
        if (temp == input && temp > 0) {
            return input;
        } else {
            printf("Angka yang dimasukan merupakan bilangan negatif\nTolong input berupa bilangan positif!\n");
            return validasiInteger();
        }
    }
}

int validasiFloat() {
    float input, temp;
    char karakter;
    printf("Masukkan angka : ");

    if (scanf("%f%c", &input, &karakter) != 2 || karakter == ',' || karakter != '\n') {
        clearBuffer();
        printf("\nTolong input berupa angka!\n");
        return validasiFloat();
    } else {
        temp = input;
        if (temp == input && temp > 0) {
            return input;
        } else {
            printf("\nAngka yang dimasukan merupakan bilangan negatif\nTolong input berupa bilangan positif!\n");
            return validasiFloat();
        }
    }
}