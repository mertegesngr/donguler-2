#include <stdio.h>

int main() {
    int sayi, gecici, basamak;

    // Kullanıcıdan bir sayı girmesini iste
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Sayının basamak değerlerini ekrana yazdıracağını belirt
    printf("Basamak degerleri:\n");

    // Giriş yapılan sayıyı korumak için 'sayi' değerini 'gecici' değişkenine aktar
    gecici = sayi;

    // Eğer sayı 0 ise, sadece "0" olarak ekrana yazdır
    if(gecici == 0) {
        printf("0\n");
    }   
    else {
        // Sayı 0 değilse, her basamağı tek tek yazdırana kadar döngüye gir
        while (gecici > 0) {
            basamak = gecici % 10;  // Sayının son basamağını al
            printf("%d\n", basamak); // Bu basamağı ekrana yazdır
            gecici /= 10;            // Sayıyı bir basamak küçült (sağdan sola ilerle)
        }
    }
    
    return 0; // Program başarıyla bitti
}
