#include <iostream>
using namespace std;

float bmi(float bb, flloat tb)
{
    return bb/(tb*tb)
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
    float berat,tinggi,r;
    string status;

    cout << "Masukkan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (M) : ";
    cin >> tb;

    cout << "----- Selamat Datang Mahasiswa Kelas A 2025 -----"
}