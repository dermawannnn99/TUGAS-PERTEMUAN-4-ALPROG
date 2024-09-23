#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {

    int batas;

    cout << "Masukan batas angka: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    int JumlahGanjil = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            JumlahGanjil++;
        }
    }
    cout << "\nJumlah bilangan ganjil: " << JumlahGanjil << endl<<endl;

    cout << "Bilangan Genap: ";
    int JumlahGenap = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            JumlahGenap++;
        }
    }
    cout << "\nJumlah bilangan genap: " << JumlahGenap << endl<<endl;

    cout << "Bilangan Prima: ";
    int JumlahPrima = 0;
    for (int i = 1; i <= batas; i++) {
        if (isPrime(i)) {
            cout << i << " ";
            JumlahPrima++;
        }
    }
    cout << "\nJumlah bilangan prima: " << JumlahPrima << endl<<endl;

    cout << "Faktor bilangan ganjil: " << endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << "Faktor " << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) cout << j << " ";
            }
            cout << endl;
        }
    }

    cout << "Faktor bilangan genap: " << endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << "Faktor " << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) cout << j << " ";
            }
            cout << endl;
        }
    }

    cout << "Faktor bilangan prima: " << endl;
    for (int i = 1; i <= batas; i++) {
        if (isPrime(i)) {
            cout << "Faktor " << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) cout << j << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
