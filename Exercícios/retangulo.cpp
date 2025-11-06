#include <iostream>
using namespace std;

class Retangulo {
public:
    int largura, altura;
    Retangulo(int l, int a) { largura = l; altura = a; }
    int area() { return largura * altura; }
};

int main() {
    Retangulo r(5, 3);
    cout << "Área = " << r.area() << endl;
}
