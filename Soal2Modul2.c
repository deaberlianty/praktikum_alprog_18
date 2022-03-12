#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int jumlahAbsensi, nilaiQuiz, nilaiUTS, nilaiUAS;
    float nilaiAbsensi, nilaiTugas, totalNilaiTugas, nilaiAkhir;
    char nilaiHuruf[2];

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

    system("pause");
}
