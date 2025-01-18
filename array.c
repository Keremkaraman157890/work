#include <stdio.h>
int main (void){
    int n,i;
    printf("Kac sayi girilecek:");
    scanf("%d",&n);
    int sayilar[n];
    int cift[n],tek[n];
    int cift_sayac=0,tek_sayac=0;
    
    printf("Sayilari giriniz:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. sayi:",i+1);
        scanf("%d",&sayilar[i]);
    }
    if (sayilar[i]%2==0)
    {
        cift[cift_sayac++]=sayilar[i];
    }
    else if (sayilar[i]%2!==0)
    {
        tek[tek_sayac++]= sayilar[i];
    }
    printf("\nCift sayilar:");
    for (int i = 0; i < cift_sayac ; i++)
    {
        printf("%d",cift[i]);
    }
    printf("\nTek sayilar:");
    for (int i = 0; i < tek_sayac; i++)
    {
        printf("%d",tek[i]);
    }
    return 0;
}