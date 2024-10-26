#include <stdio.h>  // Standart giriş-çıkış fonksiyonları için gerekli kütüphane.

int main() {
    int sayi;  // Kullanıcının girdiği sayıyı saklamak için değişken.

    // Kullanıcıdan bir tam sayı girmesini isteyen mesaj.

    printf("Hangi tamsayının bölenlerini bulmak istiyorsunuz: ");

    scanf("%d", &sayi);  // Kullanıcının girdiği sayıyı alır.
    printf("\n");  // Bir satır boşluk bırakır.


    // Kullanıcının girdiği sayının bölenlerini göstermek için mesaj.
    printf("%d sayısının tam bölenleri: ", sayi);



    // 1'den sayıya kadar olan tüm sayıları kontrol et
    for (int i = 1; i <= sayi; i++) {

        // Eğer sayi, i'ye tam bölünüyorsa
        if (sayi % i == 0) {

            printf("%d ,", i);  // i sayısını ekrana yazdır.
        }
    }

    // Sonuç olarak tüm bölenlerin listelendiği mesaj.
    // Burada program bitiyor, çıkış mesajı yok ama kullanıcı sonuçları görecektir.


    return 0;   // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
