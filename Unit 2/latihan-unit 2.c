#include <stdio.h>
int main(){
    int jumlahtransaksi;
    int nominal;
    int total=0, i=1;

    printf("Masukan jumlah transaksi:");
    scanf("%d", &jumlahtransaksi);

    if(jumlahtransaksi<=0){
        printf( "Tidak ada transaksi hari ini\n" );
        return 0;
    }
    for (i=1;i<=jumlahtransaksi;i++){
        printf("Masukan nominal transaksi ke-%d:", i);
        scanf("%d", &nominal);
        total+=nominal;
    }

    printf("Total pengeluaran hari ini: %d\n", total);

    return 0;
}