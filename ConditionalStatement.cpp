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