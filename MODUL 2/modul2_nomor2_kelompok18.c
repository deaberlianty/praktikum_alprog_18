#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    printf("\n\nNilai angka: %.0f\n", nilaiAkhir);
    printf("Nilai huruf: %s\n\n", nilaiHuruf);
}

int main() {
    char input_menu;
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
            "[1] Menentukan nilai akhir dan nilai angka mata kuliah\n\n"
            "Pilih menu : ");
        scanf("%c", &input_menu);
        system("cls");

        if (input_menu == '1') {
            printf("Jumlah absensi  : ");
            scanf("%d", &jumlahAbsensi);

            if (jumlahAbsensi > 15) {
                jumlahAbsensi = 15;
            }

            nilaiAbsensi = ((float)100 / 15) * jumlahAbsensi;
            totalNilaiTugas = 0;

            for (int i = 1; i <= 3; i++) {
                printf("Nilai tugas ke-%d: ", i);
                scanf("%f", &nilaiTugas);
                totalNilaiTugas += nilaiTugas;
            }
            totalNilaiTugas /= 3;

            printf("Nilai Quiz: ");
            scanf("%d", &nilaiQuiz);
            printf("Nilai UTS : ");
            scanf("%d", &nilaiUTS);
            printf("Nilai UAS : ");
            scanf("%d", &nilaiUAS);

            nilaiAkhir = (nilaiAbsensi * 0.05) + (totalNilaiTugas * 0.2) + (nilaiQuiz * 0.15) + (nilaiUTS * 0.3) + (nilaiUAS * 0.3);
            printNilai(nilaiAkhir);
        }

        printf("Ingin mengulangi program ? (Y/N) : ");
        scanf(" %c", &input_menu);
        system("cls");
        getchar();

    } while (input_menu == 'y' || input_menu == 'Y');

    system("pause");
}