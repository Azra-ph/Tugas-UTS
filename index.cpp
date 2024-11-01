#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama, mataKuliah;
    float etika, kehadiran, tugas, uts, uas, nilaiAkhir;
    char grade;

    // Input dari pengguna
    cout << "Nama: ";
    getline(cin, nama);
    cout << "Mata kuliah: ";
    getline(cin, mataKuliah);
    
    cout << "Etika: ";
    cin >> etika;
    cout << "Kehadiran: ";
    cin >> kehadiran;
    cout << "Tugas: ";
    cin >> tugas;
    cout << "UTS: ";
    cin >> uts;
    cout << "UAS: ";
    cin >> uas;

    // Perhitungan nilai akhir berdasarkan bobot
    nilaiAkhir = (etika * 0.10) + (kehadiran * 0.15) + (tugas * 0.20) + 
    (uts * 0.25) + (uas * 0.30);

    // Menentukan grade berdasarkan nilai akhir
    if (nilaiAkhir >= 81) {
        grade = 'A';
    } else if (nilaiAkhir >= 71) {
        grade = 'B';
    } else if (nilaiAkhir >= 61) {
        grade = 'C';
    } else if (nilaiAkhir >= 51) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Output hasil
    cout << "\n===== Hasil Penilaian =====\n";
    cout << "Nama: " << nama << endl;
    cout << "Mata kuliah: " << mataKuliah << endl;
    cout << "Etika: " << etika << endl;
    cout << "Kehadiran: " << kehadiran << endl;
    cout << "Tugas: " << tugas << endl;
    cout << "UTS: " << uts << endl;
    cout << "UAS: " << uas << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
