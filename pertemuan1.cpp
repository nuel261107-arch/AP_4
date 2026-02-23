#include <iostream>   // untuk input dan output (header)
#include <string>     // supaya bisa pakai tipe data string 

using namespace std;  // biar tidak perlu tulis std:: untuk setiap baris kode

int main() {  // awal program
    system("cls");  // membersihkan layar
    // deklarasi variabel
    string nama, nip, departemen, jabatan;
    int umur;
    double gaji;

    // bagian input
    cout << "Nama            : ";
    getline(cin, nama);   // pakai getline supaya bisa input nama dengan spasi
    cout << "NIP             : ";
    getline(cin, nip);
    cout << "Umur            : ";
    cin >> umur;
    cin.ignore(); // supaya input setelah angka tidak loncat
    cout << "Departemen      : ";
    getline(cin, departemen);
    cout << "Jabatan         : ";
    getline(cin, jabatan);
    cout << "Gaji            : ";
    cin >> gaji;

    // bagian output
    cout << "Nama       : " << nama << endl;
    cout << "NIP        : " << nip << endl;
    cout << "Umur       : " << umur << " tahun" << endl;
    cout << "Departemen : " << departemen << endl;
    cout << "Jabatan    : " << jabatan << endl;
    cout << "Gaji       : Rp " << gaji << endl;

    return 0;  // akhir program
}