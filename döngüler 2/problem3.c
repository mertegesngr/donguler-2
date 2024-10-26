#include <stdio.h>

int main() {
    int bolunen, bolen;  // Bölünecek ve bölen sayıları tanımlanıyor
    int bolum = 0;      // Sonucu saklamak için bolum değişkeni
    int kalan;          // Kalanı saklamak için kalan değişkeni

    // Kullanıcıdan bölünecek sayıyı al
    printf("Bölünecek sayıyı giriniz: ");
    scanf("%d", &bolunen);


    // Kullanıcıdan bölen sayıyı al
    printf("Bölen sayıyı giriniz: ");
    scanf("%d", &bolen);


    // Bölen sıfırsa hata mesajı ver
    if (bolen == 0) {
        printf("Bir sayı sıfıra bölünemez!\n");


        return 1;  // Hata durumu için programdan çık

    }

    // Bölme işlemi: çıkarma işlemi ile bölümü hesaplama
    kalan = bolunen; // Kalan başlangıçta bölünecek sayı ile aynı


    while (kalan >= bolen) {  // Kalan, bölen kadar olduğu sürece
        kalan -= bolen;       // Kalanı bölen kadar azalt
        bolum++;              // Her azaltmada bölüm sayısını artır
    }

    // Sonuçları yazdır
    printf("Bölüm: %d\n", bolum);
    printf("Kalan: %d\n", kalan);

    return 0;  // Programın başarıyla sona erdiğini belirtir
}
