
#include <stdio.h>

int main (){
    int x; 
    int sayacPozitif = 0, sayacNegatif = 0, sayacSifir = 0; 

    printf("Kaç adet sayı gireceksiniz: "); 
    scanf("%d", &x); 
    printf("\n"); 

    for(int i = 1; i <= x; i++ ){
        int gecici; 
        printf("%d. sayı = ", i); 
        scanf("%d", &gecici); 
        printf("\n"); 

        if(gecici < 0){
            printf("Girdiğiniz sayı negatif.\n"); 
            sayacNegatif++; 
        }
        else if(gecici == 0){
            printf("Girdiğiniz sayı sıfır.\n"); 
            sayacSifir++; 
        }
        else if (gecici > 0){
            printf("Girdiğiniz sayı pozitif.\n"); 
            sayacPozitif++; 
        }
    }

    printf("Negatif sayı sayısı = %d\n", sayacNegatif); 
    printf("Pozitif sayı sayısı = %d\n", sayacPozitif); 
    printf("Sıfıra eşit olan sayı sayısı = %d\n", sayacSifir); 

    return 0; 
}

