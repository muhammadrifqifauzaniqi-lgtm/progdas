#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector <string> buah = {"mangga", "jeruk"};

    cout << buah[0] << endl; //mengakses elemen berdasarkan indeks

    buah.insert(buah.begin(), "apel"); //tambahkan di awal
    buah.insert(buah.begin() + 2, "semangka"); //tambahkan di tengah
    buah.push_back("pisang"); //tambahkan di akhir
    cout << "setelah di tambah: ";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    buah.erase(buah.begin()); //hapus elemen di awal
    buah.erase(buah.begin() + 1); //hapus elemen di tengah
    buah.pop_back(); //hapus elemen di akhir
    cout << "setelah di hapus: ";
    for (string item : buah) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}