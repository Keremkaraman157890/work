/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int kare_Cikarma (int sayi)
{  int ab,cd,sonuc;
	if(sayi<1000  || sayi>9999){
	return 0;}
	ab=sayi/100;
	cd=sayi%100;
	sonuc=(ab*ab)-(cd*cd);
	if(kare_Cikarma==sayi){
		printf("Uygun bir sayi.");}
	else
	{printf("Uygun bir sayi degil.");}
	return(sonuc);
}
int main (void)
{printf("Dort basamakli bir sayi giriniz:");
int sayi;
scanf("%d",&sayi);
kare_Cikarma(sayi);
getchar();
return 0;}*/
/*include <stdio.h>
#include <stdlib.h>
#include <math.h>
int toplam_kup( int sayi);
int main(void)
{printf("Bes basamakli bir sayi griniz:");
	int sayi;
scanf("%d",&sayi);
toplam_kup(sayi);
return 0;}
int toplam_kup(int sayi)
{ if (sayi < 10000 || sayi > 99999) {
        printf("Lütfen beş basamaklı bir sayı giriniz.\n");
        return 0; // Geçersiz sayı
    }
  int ab,cde,sonuc;
  ab=sayi/1000;
  cde=sayi%1000;
  sonuc=pow((ab+cde),3);
  if ( sayi==sonuc){
	printf("Uygun bir sayi.");
  }
  else{
	printf("Uygun bir sayi degil.");
  }
  return (sonuc);
  }
 #include <stdio.h>
#include <math.h>

// Toplamın küpünü hesaplayan ve kontrol eden fonksiyon
int toplam_kup(int sayi) {
    int ab, cde, sonuc;

    // Sayının beş basamaklı olup olmadığını kontrol et
    if (sayi < 10000 || sayi > 99999) {
        printf("Lütfen beş basamaklı bir sayı giriniz.\n");
        return 0; // Geçersiz sayı
    }

    // Basamakları ayır
    ab = sayi / 1000;   // İlk iki basamak (AB)
    cde = sayi % 1000;  // Son üç basamak (CDE)

    // Toplamın küpünü hesapla
    sonuc = (ab + cde) * (ab + cde) * (ab + cde);

    // Sonucu kontrol et
    printf("AB: %d, CDE: %d, (AB + CDE)^3: %d, Sayı: %d\n", ab, cde, sonuc, sayi);
    if (sayi == sonuc) {
        printf("%d sayısı, özelliğe uygun bir sayıdır.\n", sayi);
    } else {
        printf("%d sayısı, özelliğe uygun değildir.\n", sayi);
    }

    return sonuc;
}

int main(void) {
    int sayi;

    // Kullanıcıdan beş basamaklı bir sayı al
    printf("Beş basamaklı bir sayı giriniz: ");
    scanf("%d", &sayi);

    // Fonksiyonu çağır
    toplam_kup(sayi);

    return 0;
}*/
#include <stdio.h>
#include <math.h>
int permutation (int n ,int r);
int factoriel (int f);
int main (void)
{       int n,r,outcome;
        scanf("%d%d",&n,&r);
		printf("iki sayi griiniz:");
		outcome=permutation (n,r);
		printf("Permutation (n,r):%d",outcome);
		return 0;}
int factoriel (int f)
{       int i,outcomef=1;
        for ( i = 1; i <= f; i++)
		{
			outcomef*=i;
		}
		return (outcomef);}
int permutation (int n, int r)
{       int outcomef;
        outcomef=factoriel(n)/factoriel(n-r);
		return (outcomef);
}