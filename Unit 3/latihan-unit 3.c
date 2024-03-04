#include<stdio.h>

int main(){
    int x, hasil;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &x);

    int array[x];

    for(int i=0; i<x; ++i){
        printf("Masukkan nilai elemen ke-%d: ", i+1);
        scanf("%d", &array[i]);
        hasil+=array[i];
    }

        printf("Jumlah seluruh elemen pada array adalah: %d\n", hasil);
        return 0;
}

