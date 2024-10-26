#include <stdio.h>   // Standart giriş-çıkış işlemleri için gerekli kütüphane.
#include <math.h>    // Matematiksel fonksiyonlar için gerekli kütüphane.

int main() {
    int taban, us;  // Taban ve üs değerlerini saklamak için değişkenler.
    int sonuc = 1;  // Sonucu saklamak için başlangıçta 1 atanmış.

    // Kullanıcıdan taban değerini alır.
    printf("Taban = "); 

    scanf("%d", &taban);  // Kullanıcının girdiği taban değeri alınır.

    printf("\n");  // Bir satır boşluk bırakır.

    // Kullanıcıdan üs değerini alır.
    printf("Üs = "); 

    scanf("%d", &us);  // Kullanıcının girdiği üs değeri alınır.

    printf("\n");  // Bir satır boşluk bırakır.

    /*
    // Eğer üs sıfır ise sonucu 1 olarak ayarlar.
    if (us == 0) {
        printf("Sonuç = 1");
    } else {
        // Üs pozitifse, döngü kullanarak tabanın üssünü hesaplar.
        for (int i = 1; i <= us; i++) {
            sonuc = sonuc * taban;  // Sonucu taban ile çarpar.
        }
    }
    */

    // Matematik kütüphanesinin pow fonksiyonu kullanılarak da tabanın üssü hesaplanır.

    sonuc = pow(taban, us);  

    // Sonucun tam sayı olarak yazdırılması; pow fonksiyonu double döndürür, bu nedenle tip dönüşümü gerekebilir.
    
    printf("Sonuç = %d\n", sonuc);  

    return 0;  // main() fonksiyonu 0 döndürür ise, bu programın başarıyla sona erdiği anlamına gelir.
}
