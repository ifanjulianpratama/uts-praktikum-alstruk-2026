#include <iostream>
#include <string>

using namespace std;

string stackBuku[5];
int top = -1;

string queueAnggota[5];
int front = 0;
int rear = -1;
int jumlahAntrian = 0;

int main() {
    stackBuku[++top] = "Fisika Dasar";
    stackBuku[++top] = "Kalkulus";
    stackBuku[++top] = "Algoritma";
    stackBuku[++top] = "Jaringan";

    cout << "=== HASIL STACK BUKU ===" << endl;
    cout << "Buku Teratas: " << stackBuku[top] << endl;

    top--; 
    top--;

    cout << "Isi Stack Akhir: ";
    for(int i = 0; i <= top; i++) {
        cout << "[" << stackBuku[i] << "] ";
    }
    cout << "\n\n";

    queueAnggota[++rear] = "Reza"; jumlahAntrian++;
    queueAnggota[++rear] = "Mia";  jumlahAntrian++;
    queueAnggota[++rear] = "Hendra"; jumlahAntrian++;

    cout << "=== HASIL QUEUE ANGGOTA ===" << endl;
    cout << "Anggota Terdepan: " << queueAnggota[front] << endl;

    front = (front + 1) % 5;
    jumlahAntrian--;

    rear = (rear + 1) % 5;
    queueAnggota[rear] = "Putri";
    jumlahAntrian++;

    cout << "Isi Queue Akhir: ";
    int idx = front;
    for(int i = 0; i < jumlahAntrian; i++) {
        cout << "(" << queueAnggota[idx] << ") ";
        idx = (idx + 1) % 5;
    }
    cout << endl;

    return 0;
}
