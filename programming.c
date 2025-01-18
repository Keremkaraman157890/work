#include <stdio.h>
#include <math.h>
int polindrom (int sayi);
int main (void)
{       int sayi,result;
        printf("Bir sayi giriniz:");
        scanf("%d",&sayi);
        result=polindrom(sayi);
        getchar();
        return 0;
}
int polindrom (int sayi)
{       int s,ab,ba,abc,cba,abcd,dcba,abcde,edcba;
        if(sayi>10 && sayi<=99){
          sayi=ab;
          if(ab==ba){
            printf("Bu bir polindrom sayidir.");
          }
          else {
            printf("Bu bir polindrom sayi degildir.");
            sayi=ab+ba;
          }
        }
        else if (sayi>100 && sayi<=999){
          sayi=abc;
            if(abc=cba){
              printf("Bir polindrom sayidir.");
            }
            else{
              printf("Bir polindrom sayi degildir.");
              sayi=abc+cba;
            }
        }
        if(sayi>1000 && sayi<=9999){
          sayi=abcd;
             if(abcd==dcba){
              printf("Bu bir polindrom sayidir.");
             }
             else {
              printf("Bu bir polindrom sayi degildir.");
              sayi=abcd+dcba;
             }
        }
        if(sayi>10000 && sayi<=99999){
          sayi=abcde;
             if(abcde==edcba){
              printf("Bu bir polindrom sayidir.");
             }
             else {
              printf("Bu bir polindrom sayi degildir.");
              sayi=abcde+edcba;
             }
        }
        return(sayi);
}