#include <stdio.h>

// Basamak sayısını hesaplayan fonksiyon
int calculate(int number) {
    int count = 0;
    while (number != 0) {
        number = number / 10; // Sayıyı 10'a bölerek basamakları azaltıyoruz
        count++;
    }
    return count; // Basamak sayısını döndür
}

int main() {
    int s; // Kullanıcının girdiği sayı
    do {
        printf("Lütfen bir sayı giriniz: ");
        scanf("%d", &s); // Kullanıcıdan bir sayı al
        
        if (s!= 0) { // Sıfır girilmediği sürece hesapla
            int sayac = calculate(s); // Basamak sayısını hesapla
            printf("Basamak sayısı: %d\n", sayac);
        }
    } while (s!= 0); // Kullanıcı sıfır girene kadar devam et
    
    printf("Son.\n"); // Program sonlanır
    return 0;
}
