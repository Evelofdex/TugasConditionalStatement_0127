#include <iostream>
using namespace std;
//variable
float berat_badan, tinggi_badan;
//bagian awal
void warga_nanya(){
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat_badan;
    cout << "masukan tinggi badan (meter): ";
    cin >> tinggi_badan;
}
//fungsi kalkulasi bmi
float BMI(float m, float kg){
    return kg / (m * m);
}
//fungsi cek status BMI
string cek_berat(){
    if(BMI(tinggi_badan, berat_badan) < 18.5){
        return "Berat badan kurang";
    }  else if (BMI(tinggi_badan, berat_badan) < 25){
        return "Berat badan normal";
    }  else if (BMI(tinggi_badan, berat_badan) < 30){
        return "Berat badan kelebihan";
    }  else {
        return "Obesitas";
    }
    return 0;
}
int main (){
    warga_nanya();
    cout << endl << "--- Hasil --" << endl;
    cout << "BMI Anda : " << BMI(tinggi_badan, berat_badan) << endl;
    cout << "Status : " << cek_berat() << endl;
}