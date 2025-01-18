#include <stdio.h>

// Faktöriyel hesaplayan fonksiyon
int factoriel(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}

// Verilen seriyi hesaplayan fonksiyon
double hesapla(int n) {
    double sonuc = 0.0;
    for (int i = 1; i <= n; i++) {
        int pay = 0;
        for (int j = 1; j <= i; j++) {
            pay += j;  // Pay, 1'den i'ye kadar olan sayıların toplamı
        }
        sonuc += (double)pay / factoriel(i);  // Serinin her terimini ekliyoruz
    }
    return sonuc;
}

int main(void) {
    int n;
    printf("Bir pozitif tamsayi giriniz: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Pozitif bir tamsayi giriniz.\n");
        return 1; // Programdan çık
    }

    double sonuc = hesapla(n); // Seriyi hesapla
    printf("Sonuc: %lf\n", sonuc);

    return 0;
}
