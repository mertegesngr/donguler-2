#include <stdio.h>

int main() {
    int n;

    // Fibonacci Serisi:
    // İlk iki terimi 0 ve 1 olan, sonraki her terimin kendinden önceki iki terimin toplamı ile elde edildiği bir sayı dizisidir.
    // Örnek: 0, 1, 1, 2, 3, 5, 8, 13, ...

    printf("Fibonacci serisinin kaç terimini görmek istiyorsunuz? ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci serisinin ilk %d terimi:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            // İlk iki terim direkt olarak yazdırılır.
            next = i;
        } else {
            // Her yeni terim, önceki iki terimin toplamı olur.
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
