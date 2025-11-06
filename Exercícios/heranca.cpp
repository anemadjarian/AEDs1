#include <iostream>
using namespace std;

class Animal {
public:
    void falar() { cout << "Som genérico\n"; }
};

class Cachorro : public Animal {
public:
    void falar() { cout << "Au au!\n"; }
};

int main() {
    Cachorro c;
    c.falar();
}
