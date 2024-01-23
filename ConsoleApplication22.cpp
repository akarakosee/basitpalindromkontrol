#include <iostream>
#include <string>
using namespace std;

bool palindrom(string mu) {
    // Muhtemel boşlukları ve büyük harfleri kaldır
    mu.erase(remove(mu.begin(), mu.end(), ' '), mu.end());
    (mu.begin(), mu.end(), mu.begin(), ::tolower);
    // Mu'nun uzunluğunu bul
    int n = mu.length();
    // Mu'nun ilk yarısını al
    string ilk = mu.substr(0, n / 2);
    // Mu'nun ikinci yarısını al ve ters çevir
    string ikinci = mu.substr(n / 2 + n % 2, n / 2);
    reverse(ikinci.begin(), ikinci.end());
    // İlk ve ikinci yarıyı karşılaştır
    if (ilk == ikinci) {
        return true;
    }
    else {
        return false;
    }
}

// Örnek kullanım
int main() {
    cout << palindrom("kayak") << endl; // 1
    cout << palindrom("araba") << endl; // 0
}
