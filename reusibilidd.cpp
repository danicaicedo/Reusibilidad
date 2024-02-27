#include <iostream>
using namespace std;

const double PI = 3.14159;

double calcularAreaCirculo(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio = 5.0;
    double area = calcularAreaCirculo(radio);
    cout << "El área del círculo es: " << area << endl;
    return 0;
}