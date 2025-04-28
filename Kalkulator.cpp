#include <iostream>
using namespace std;

int main() {
    char operasi;
    float angka1, angka2;

    // Menampilkan pilihan operasi
    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    // Memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Melakukan operasi sesuai pilihan
    switch (operasi) {
        case '+':
            cout << "Hasil: " << angka1 + angka2;
            break;
            
        case '-':
            cout << "Hasil: " << angka1 - angka2;
            break;
        case '*':
            cout << "Hasil: " << angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0) {
                cout << "Hasil: " << angka1 / angka2;
            } else {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan.";
            }
            break;
        default:
            cout << "Error: Operasi tidak valid.";
            break;
    }

    return 0;
}