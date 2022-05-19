#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer();
int validasiInteger();
void printNilai(float nilaiAkhir);

int main() {
    char input_menu[1024];
    int jumlahAbsensi, nilaiQuiz, nilaiUTS, nilaiUAS;
    float nilaiAbsensi, nilaiTugas, totalNilaiTugas, nilaiAkhir;

    do {
        printf(
            "=========================================================\n"
            "||                                                     ||\n"
            "||                      KELOMPOK 18                    ||\n"
            "||                     MODUL II NO 2                   ||\n"
            "||                                                     ||\n"
            "=========================================================\n\n");

        printf(
            "[1] Menentukan nilai akhir dan nilai angka mata kuliah\n"
            "[2] Keluar dari program\n\n"
            "Pilih menu : ");
        scanf("%s", &input_menu);
        fflush(stdin);
        system("cls || clear");

        if (strcmp(input_menu, "1") == 0) {
            printf("Jumlah absensi  :\n");
            jumlahAbsensi = validasiInteger();

            while (jumlahAbsensi > 15) {
                printf("Maksimal absensi adalah 15\n");
                jumlahAbsensi = validasiInteger();
            }

            nilaiAbsensi = ((float)100 / 15) * jumlahAbsensi;
            totalNilaiTugas = 0;
            printf("\n");

            for (int i = 1; i <= 3; i++) {
                printf("Nilai tugas ke-%d\n", i);
                nilaiTugas = validasiInteger();
                totalNilaiTugas += nilaiTugas;
            }
            printf("\n");
            totalNilaiTugas /= 3;

            printf("Nilai Quiz :\n");
            nilaiQuiz = validasiInteger();
            printf("\n");
            printf("Nilai UTS  :\n");
            nilaiUTS = validasiInteger();
            printf("\n");
            printf("Nilai UAS  : \n");
            nilaiUAS = validasiInteger();

            nilaiAkhir = (nilaiAbsensi * 0.05) + (totalNilaiTugas * 0.2) + (nilaiQuiz * 0.15) + (nilaiUTS * 0.3) + (nilaiUAS * 0.3);
            system("cls || clear");
            printNilai(nilaiAkhir);
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

void printNilai(float nilaiAkhir) {
    char nilaiHuruf[2];

    if (nilaiAkhir <= 100 && nilaiAkhir >= 80) {
        strncpy(nilaiHuruf, "A", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 80 && nilaiAkhir >= 75) {
        strncpy(nilaiHuruf, "B+", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 75 && nilaiAkhir >= 65) {
        strncpy(nilaiHuruf, "B", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 65 && nilaiAkhir >= 60) {
        strncpy(nilaiHuruf, "C+", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 60 && nilaiAkhir >= 55) {
        strncpy(nilaiHuruf, "C", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 55 && nilaiAkhir >= 50) {
        strncpy(nilaiHuruf, "D+", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 50 && nilaiAkhir >= 45) {
        strncpy(nilaiHuruf, "D", sizeof(nilaiHuruf));
    } else if (nilaiAkhir < 45 && nilaiAkhir >= 0) {
        strncpy(nilaiHuruf, "E", sizeof(nilaiHuruf));
    }

    printf("Nilai angka: %.0f\n", nilaiAkhir);
    printf("Nilai huruf: %s\n\n", nilaiHuruf);
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
        printf("\nTolong input berupa bilangan integer!\n");
        return validasiInteger();
    } else {
        temp = input;
        if (temp == input && temp > 0) {
            return input;
        } else {
            printf("\nAngka yang dimasukan merupakan bilangan negatif\nTolong input berupa bilangan integer positif!\n");
            return validasiInteger();
        }
    }
}
