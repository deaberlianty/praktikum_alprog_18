// I Komang Cleon Kalea
// 2105551090
// Kelompok 18
// Modul 3 no.3

#include <stdio.h>
#include <math.h>
#include <windows.h>
void pembatas(){
    char pembatas[] = "---------------------------------------------------------\n";
    printf("%s", pembatas);
}
void clear(){
    system("cls");
}
void sort_array(int banyak_data, int input_nilai[]){
    int i;
    int key;
    int j;

    for(i = 1 ; i < banyak_data ; i++){
        key = input_nilai[i];
        j = i-1;

        while(j >= 0 && input_nilai[j] > key){
            input_nilai[j+1] = input_nilai[j];
            j = j-1;
        }
        input_nilai[j+1] = key;
    }
}
void print_array(int banyak_data, int input_nilai[]){
    int i;

    printf("{ ");

    for (i = 0; i < banyak_data; i++){
        printf("%d ", input_nilai[i]);
    }

    printf("}\n");
}
void rumus_mean(int banyak_data, int input_nilai[]){
    float nilai_mean;

    for(int i = 0 ; i < banyak_data ; i++){
        nilai_mean = nilai_mean + input_nilai[i];
    }

    nilai_mean = nilai_mean / banyak_data;

    printf("Nilai Mean Dari Bilangan yang Di Input Adalah : %.2f\n", nilai_mean);
}
void rumus_median(int banyak_data, int input_nilai[]){
    int i;
    float nilai_median;

    i = ((banyak_data + 1) / 2);

    if(banyak_data % 2 == 0){
        nilai_median = (input_nilai[i-1] + input_nilai[i]);
        nilai_median = nilai_median / 2;

    }else{
        nilai_median = input_nilai[i-1];
    }

    printf("Nilai Median = %.2f", nilai_median);
}
void rumus_modus(int banyak_data, int input_nilai[]){
    int nilai_bilangan;
    int bilangan_sementara;
    int modus;
    int i;
    int j;
    int jumlah_nilai_bilangan = 0;

    for(i=0 ; i < banyak_data ; i++){
        nilai_bilangan = input_nilai[i];
        bilangan_sementara = 0;

        for(j = 0 ; j < banyak_data ; j++){
            if(nilai_bilangan == input_nilai[j]){
                bilangan_sementara = bilangan_sementara + 1;
            }
        }

        if(bilangan_sementara > jumlah_nilai_bilangan){
            jumlah_nilai_bilangan = bilangan_sementara;
            modus = input_nilai[i];
        }
    }
    
    printf("\nNilai yang paling sering muncul (modus) adalah : %d sebanyak %d kali\n", modus, jumlah_nilai_bilangan);
}
int main(){
    int i;
    int banyak_data;
    int nilai_mean;
    int no_bilangan = 0;

    clear("cls");

    printf("\n\n\t\t\tSTATISTIKA\n\n");
    pembatas();

    printf("Masukkan Banyak Bilangan yang Ingin Di Input : ");
    scanf("%d", &banyak_data);

    int input_nilai[banyak_data];

    pembatas();

    for(i = 0 ; i < banyak_data ; i++){
        no_bilangan++;
        printf("Masukkan Bilangan Ke-%d : ", no_bilangan);
        scanf("%d", &input_nilai[i]);
    }

    pembatas();

    printf("Bilangan Sebelum Sorting\n");
    print_array(banyak_data, input_nilai);

    printf("\nBilangan Setelah Sorting\n");
    sort_array(banyak_data, input_nilai);
    print_array(banyak_data, input_nilai);

    pembatas();

    rumus_mean(banyak_data, input_nilai);
    rumus_median(banyak_data, input_nilai);
    rumus_modus(banyak_data, input_nilai);

    pembatas();
    return 0;
}
