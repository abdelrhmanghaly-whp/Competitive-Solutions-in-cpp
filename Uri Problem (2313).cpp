#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    string SidesOfTriangle = " ";
    cin >> a >> b >> c;
    if (a + c > b) 
    {
        // check hena, vaild aw la2
        if ((a != b and b == c) or (a == c and a != b) or (a == b and c != b))
            SidesOfTriangle = "Valido-Isoceles";
        else if (a == b and a == c)
            SidesOfTriangle = "Valido-Equilatero";
        else if (a != b and b != c and a != c)
            SidesOfTriangle = "Valido-Escaleno";
    }
    else
    {
        SidesOfTriangle = "Invalido";
    }
    // lw valid ncheck el type, Isosceles wla Scalene,
    if (SidesOfTriangle != "Invalido")
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) or pow(b, 2) == pow(a, 2) + pow(c, 2) or pow(c, 2) == pow(a, 2) + pow(b, 2))
            cout << SidesOfTriangle << endl << "Retangulo: S" << endl;
        else
            cout << SidesOfTriangle << endl << "Retangulo: N" << endl;
    }
    else
        cout << SidesOfTriangle << endl;
    return 0;
}