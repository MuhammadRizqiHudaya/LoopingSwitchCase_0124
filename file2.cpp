#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //perulangan while 
    int x;
    int perulanganwhile = 0;
    int perulangando = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "perulangan while" << endl;
    cout << "Nilai x awal " << x << endl;

    while(x < 7){
        cout << "nilai x = " << x << " Lari keliling " << endl;
        x = rand() %10;
        perulanganwhile++;
    }

    cout << "nilai x terakhir = " << x << endl;
    cout << "jumlah perulangan =" << perulanganwhile << endl;
}
