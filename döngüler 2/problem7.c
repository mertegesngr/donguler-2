#include <stdio.h>

int main() {
    int sayi ; 

printf ("faktröyelini almak istediğiniz sayı : ") ; scanf("%d",&sayi) ; printf("\n") ; 

int sonuc = 1 ; 

for(int i =1 ; i<=sayi ; i++){

sonuc = sonuc * i ; 

}


printf(" sayınızın faktöriyeli %d " , sonuc ) ;



























    return 0;
}
