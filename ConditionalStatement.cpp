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

    cout << "----- Selamat Datang Mahasiswa Kelas A 2025 -----" <<endl;
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (M) : ";
    cin >> tb;
    cout <<endl;
    cout << "----- Hasil -----" <<endl;
    r =  bmi(bb,tb);
    status = status(r);

    cout << "\nilai bmi anda : " <<bmi<<endl;
    cout << "Status bmi anda : " <<status<<endl;
}