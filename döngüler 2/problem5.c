#include <stdio.h>

int main() {
    int sayi, gecici;

    // Kullanıcıdan bir sayı girmesini iste
    printf("Sayi: ");
    scanf("%d", &sayi);
    printf("\n");

    // Sayıyı geçici değişkene ata, böylece asıl değeri değiştirmeden işlemler yapılabilir
    gecici = sayi;

    // Sayının basamaklarını ters sırayla yazdır
    while (gecici > 0) {
        int basamak = gecici % 10;  // Sayının son basamağını al
        printf("%d", basamak);      // Basamağı ekrana yazdır
        gecici = gecici / 10;       // Sayıyı bir basamak sağa kaydırarak küçült
    }

    printf("\n"); // Basamakları ters yazdırdıktan sonra yeni satıra geç

    return 0;
}
