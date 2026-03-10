#include <iostream>
using namespace std;

float berat_badan, tinggi_badan;

//bagian awal
void warga_nanya(){
    cout << "Masukkan berat badan: ";
    cin >> berat_badan;
    cout << "masukan tinggi badan (cm): ";
    cin >> tinggi_badan;
    tinggi_badan = tinggi_badan / 100;
}

//kalkulasi bmi
float BMI(float m, float kg){
    return kg / (m * m);
}

int main (){
    
}