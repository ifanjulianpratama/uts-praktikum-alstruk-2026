#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    int n;
    Mahasiswa mhs[5]; 
    float totalIPK = 0;

    cout << "Masukkan jumlah mahasiswa (1-5): ";
    cin >> n;

    if (n > 5) n = 5;

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM      : "; cin >> mhs[i].nim;
        cin.ignore(); 
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "Semester : "; cin >> mhs[i].semester;
        cout << "IPK      : "; cin >> mhs[i].ipk;
        totalIPK += mhs[i].ipk; 
    }

    cout << "\n------------------------------------------------------------\n";
    cout << left << setw(4) << "No" << setw(15) << "NIM" << setw(20) << "Nama" << setw(10) << "Semester" << "IPK" << endl;
    cout << "------------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) << i + 1 
             << setw(15) << mhs[i].nim 
             << setw(20) << mhs[i].nama 
             << setw(10) << mhs[i].semester 
             << fixed << setprecision(2) << mhs[i].ipk << endl;
    }

    int indexTertinggi = 0;
    for (int i = 1; i < n; i++) {
        if (mhs[i].ipk > mhs[indexTertinggi].ipk) {
            indexTertinggi = i;
        }
    }
    cout << "\nMahasiswa dengan IPK Tertinggi: " << mhs[indexTertinggi].nama << " (" << mhs[indexTertinggi].ipk << ")";

    cout << "\nRata-rata IPK Seluruh Mahasiswa: " << totalIPK / n << endl;

    int cariSmstr;
    bool ditemukan = false;
    cout << "\nMasukkan semester yang ingin dicari: ";
    cin >> cariSmstr;

    cout << "Daftar Mahasiswa Semester " << cariSmstr << ":\n";
    for (int i = 0; i < n; i++) {
        if (mhs[i].semester == cariSmstr) {
            cout << "- " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")\n";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut." << endl; // [cite: 27]
    }

    return 0;
}
