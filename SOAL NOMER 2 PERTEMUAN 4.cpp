#include <iostream>
using namespace std;

    int fibonacci (int n) {
        if (n == 0 || n == 1) {

            return n;
        }
        else {
            return fibonacci (n-1) + fibonacci (n-2);
        }
    }
    int main () {

    cout <<"=========================================="<<endl;
    cout <<"SELAMAT DATANG DI PROGRAM DERET FIBONACCI"<<endl;
    cout <<"=========================================="<<endl<<endl;

        int i, m, n;
        n = 0;
        cout << "Masukan jumlah deret Fibonacci : ";
        cin >> m;

        cout << "Deret Fibonacci : "<<endl;

        for (i = 0; i < m; i++) {

            cout << fibonacci (n) <<" ";
            n++;
        }
        return 0;

    }
