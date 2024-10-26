#include <stdio.h>

int main() {
    int sayi;
    int tersSayi = 0;


    // Kullanıcıdan bir sayı girmesini iste
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("\n");

    // Girilen sayıyı geçici değişkene ata

    int gecici = sayi;

    // Sayının tersini hesapla
    while (gecici != 0) {
        int kalan = gecici % 10;             // Son basamağı al

        tersSayi = tersSayi * 10 + kalan;    // Tersi sayıyı oluştur

        gecici = gecici / 10;                // Sayıyı bir basamak küçült

    }

    // Girilen sayı ile tersinin eşit olup olmadığını kontrol et
    if (sayi == tersSayi) {

        printf("%d sayısı palindrom sayıdır\n", sayi);

    } 
    else {
        printf("%d sayısı palindrom sayısı değildir\n", sayi);
    }

    return 0;
}
