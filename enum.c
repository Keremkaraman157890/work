#include <stdio.h>

// Enum tanımı
enum Islem { TOPLAMA = 1, CIKARMA, CARPMA, BOLME };

int main() {
    int sayi1, sayi2, secim;
    printf("Birinci sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("İkinci sayıyı girin: ");
    scanf("%d", &sayi2);

    printf("\n--- Menü ---\n");
    printf("1. Toplama\n");
    printf("2. Çıkarma\n");
    printf("3. Çarpma\n");
    printf("4. Bölme\n");
    printf("Seçiminizi yapın: ");
    scanf("%d", &secim);

    switch (secim) {
        case TOPLAMA:
            printf("Sonuç: %d\n", sayi1 + sayi2);
            break;
        case CIKARMA:
            printf("Sonuç: %d\n", sayi1 - sayi2);
            break;
        case CARPMA:
            printf("Sonuç: %d\n", sayi1 * sayi2);
            break;
        case BOLME:
            if (sayi2 != 0) {
                printf("Sonuç: %.2f\n", (float)sayi1 / sayi2);
            } else {
                printf("Hata: Sıfıra bölme hatası!\n");
            }
            break;
        default:
            printf("Geçersiz seçim.\n");
    }

    return 0;
}
