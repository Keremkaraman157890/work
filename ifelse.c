#include <stdio.h>

// Hesaplama fonksiyonu
double hesapla(double x) {
    double s = 0; // Toplam için başlangıç değeri
    for (int i = 1; i <= x; i++) { // Döngü 1'den x'e kadar
        s += (i + x); // s'ye (i + x) ekle
    }
    return s; // s'yi döndür
}

int main(void) {
    double x, sonuc;

    // Kullanıcıdan giriş al
    printf("Bir sayi giriniz: ");
    scanf("%lf", &x);

    // Hesaplama yap
    sonuc = hesapla(x);

    // Sonucu ekrana yazdır
    printf("Sonuc: %.2lf\n", sonuc);

    return 0;
}
