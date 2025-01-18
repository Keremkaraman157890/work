#include <stdio.h>

// Sayının tersini hesaplayan fonksiyon
int ters(int sayi) {
    int tersSayi = 0;
    while (sayi > 0) {
        tersSayi = tersSayi * 10 + (sayi % 10);
        sayi /= 10;
    }
    return tersSayi;
}

// Palindrom kontrol fonksiyonu
int polindrom(int sayi) {
    int tersSayi = ters(sayi);
    return (sayi == tersSayi); // Sayı tersine eşitse, palindromdur
}

int main(void) {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Palindrom kontrolü
    if (polindrom(sayi)) {
        printf("Bu bir palindrom sayidir.\n");
    } else {
        printf("Bu bir palindrom sayi degildir.\n");
    }

    return 0;
}
