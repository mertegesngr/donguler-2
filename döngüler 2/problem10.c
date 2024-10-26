
#include <stdio.h>

int main() {
    int x;
    int sayac = 0; // Bölen sayısını tutacak sayaç

    // Kullanıcıdan bir tamsayı girmesini iste
    printf("Bir tamsayı giriniz: ");
    scanf("%d", &x);

    // 1'den x'e kadar tüm sayılar için döngü başlat
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) { // Eğer i, x'in bir böleni ise
            sayac++;      // Bölen sayısını artır
        }
    }

    // Eğer sayı sadece 2 böleni varsa (1 ve kendisi), asal sayıdır
    if (sayac == 2) {
        printf("%d sayısı asal sayıdır\n", x);
    } else {
        printf("%d sayısı asal sayı değildir\n", x);
    }

    return 0;
}


