#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y) {
    return x * y;
}

float luasLingkaran(float x) {
    return 3.14*x*x;
}

int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

    do{
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                cout << "Menghitung luas persegi panjang" << endl;
                cout << "Masukkan panjang = ";
                cin >> panjang;
                cout << "Masukkan Lebar = ";
                cin >> lebar;
                cout << "Luas persegi panjang = " << luasPersegiPanjang(panjang, lebar) << endl;
                break;
            case 2:
                cout << "Mengitung luas lingkaran" << endl;
                cout << "Masukkan jari-jari = ";
                cin >> jejari;
                cout << "Luas lingkaran = " << luasLingkaran(jejari) << endl;
                break; 
            case 3:
                break;
            default:
                cout << "Pilihan anda salah";
                break;

    
        }
    }while(pilihan != 3);
}