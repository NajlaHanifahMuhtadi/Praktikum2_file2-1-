#include <iostream>
using namespace std;

int p, l;

void input(){
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a*b;
}

int output(){
    cout << "Hasilnya = " << luasPersegiP(p, l)  << endl;
    cout << "terimakasih" << endl;
}