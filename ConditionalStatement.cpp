#include <iostream>
using namespace std;

float bmi(float bb, float tb)
{
    return bb/(tb*tb);
}

string status(float bmi)
{
    if(bmi < 18.5)
        return "Berat Badan Kurang";
    else if(bmi < 25)
        return "Berat Badan Normal";
    else if(bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    float bb,tb,BMI;
    string status_bmi;

    cout << "----- Selamat Datang Mahasiswa Kelas D 2026 -----" <<endl;
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (M) : ";
    cin >> tb;
    cout <<endl;
    BMI = bmi(bb,tb);
    status_bmi = status(BMI);

    cout << "----- Hasil -----" <<endl;
    cout << "BMI Anda = " <<BMI<<endl;
    cout << "status = "<<status_bmi<<endl;
}