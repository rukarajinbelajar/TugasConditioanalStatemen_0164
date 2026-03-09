#include <iostream>
using namespace std;

float bmi(float bb, float tb)
{
    return bb/(tb*tb);
}

string status(float r)
{
    if(r < 18.5)
        return "Berat Badan Kurang";
    else if(r < 25)
        return "Berat Badan Normal";
    else if(r < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    float bb,tb,r;
    string status;

    cout << "Masukkan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (M) : ";
    cin >> tb;

    cout << "----- Selamat Datang Mahasiswa Kelas A 2025 -----" <<endl;
    input(bb,tb);
    r:bmi(bb,tb);
    cout <<endl;
    cout << "----- Hasil -----" <<endl;
    cout << "BMI Anda : " <<r<<endl;
    cout << "Status : " <<status(r)<<endl;
}