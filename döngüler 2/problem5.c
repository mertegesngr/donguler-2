#include <stdio.h>

int main () {

int sayi , gecici ; 

printf("sayi : ") ; scanf("%d",&sayi) ; printf("\n") ; 


gecici=sayi ;


while (gecici>0){

int basamak = gecici%10 ; 

printf("%d",basamak) ;
gecici = gecici/10 ; 

}




















return 0 ;
}