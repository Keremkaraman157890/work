#include <stdio.h>

// Struct tanımlama
struct Ogrenci {
    char ad[50];
    int numara;
    float notOrtalamasi;
};

int main() {
    // Struct türünden bir değişken oluşturma
    struct Ogrenci ogrenci1;

    // Kullanıcıdan veri alma
    printf("Öğrenci adı: ");
    scanf("%s", ogrenci1.ad);

    printf("Öğrenci numarası: ");
    scanf("%d", &ogrenci1.numara);

    printf("Öğrenci not ortalaması: ");
    scanf("%f", &ogrenci1.notOrtalamasi);

    // Verileri ekrana yazdırma
    printf("\n--- Öğrenci Bilgileri ---\n");
    printf("Ad: %s\n", ogrenci1.ad);
    printf("Numara: %d\n", ogrenci1.numara);
    printf("Not Ortalaması: %.2f\n", ogrenci1.notOrtalamasi);

    return 0;
}
