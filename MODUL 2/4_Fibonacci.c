#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearBuffer();
int validasiInteger();
int fiboRekursif(int n);
int fiboIteratif(int n);

int main() {
    int n;
    char input_menu[1024];

    do {
        printf(
            "=========================================================\n"
            "||                                                     ||\n"
            "||                      KELOMPOK 18                    ||\n"
            "||                     MODUL II NO 4                   ||\n"
            "||                                                     ||\n"
            "=========================================================\n\n");

        printf("[1] Fibonacci\n\nPilih menu : ");
        scanf("%s", &input_menu);
        fflush(stdin);
        system("cls || clear");

        if (strcmp(input_menu, "1") == 0) {
            printf("Masukkan Panjangnya : ");
            n = validasiInteger();
            system("cls || clear");

            printf("Fibonacci Rekursif : ");
            for (int i = 0; i < n; i++) {
                printf("%d ", fiboRekursif(i));
            }
            printf("\n");

            printf("Fibonacci Iteratif : ");
            for (int i = 0; i < n; i++) {
                printf("%d ", fiboIteratif(i));
            }
            printf("\n");
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

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int validasiInteger() {
    int input, temp;
    char karakter;

    if (scanf("%d%c", &input, &karakter) != 2 || karakter == ',' || karakter != '\n') {
        clearBuffer();
        system("cls || clear");
        printf("Tolong input berupa bilangan integer!\nMasukkan Panjangnya : ");
        return validasiInteger();
    } else {
        temp = input;
        if (temp == input && temp > 0) {
            return input;
        } else {
            system("cls || clear");
            printf("Angka yang dimasukan merupakan bilangan negatif\nTolong input berupa bilangan integer positif!\nMasukkan Panjangnya : ");
            return validasiInteger();
        }
    }
}

int fiboRekursif(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fiboRekursif(n - 1) + fiboRekursif(n - 2);
    }
}

int fiboIteratif(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}