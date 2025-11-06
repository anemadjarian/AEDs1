#include <iostream>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    void apresentar() {
        cout << "Olá, sou " << nome << " e tenho " << idade << " anos.\n";
    }
};

int main() {
    Pessoa p;
    p.nome = "Ana";
    p.idade = 20;
    p.apresentar();
}
