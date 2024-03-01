#include <iostream>
#include <string>

using namespace std;

// Defini��o da estrutura para representar um carro
struct Carro {
    string marca;
    string modelo;
    int ano;
    float preco;
};

// Fun��o para cadastrar um carro
void cadastrarCarro(Carro &carro) {
    cout << "Digite a marca do carro: ";
    getline(cin, carro.marca);
    
    cout << "Digite o modelo do carro: ";
    getline(cin, carro.modelo);
    
    cout << "Digite o ano do carro: ";
    cin >> carro.ano;
    
    cout << "Digite o pre�o do carro: ";
    cin >> carro.preco;
    
    // Limpa o buffer do teclado
    cin.ignore();
}

int main() {
    const int MAX_CARROS = 4;
    Carro carros[MAX_CARROS];

    // Loop para cadastrar at� 4 carros
    for (int i = 0; i < MAX_CARROS; ++i) {
        cout << "=== Cadastro do Carro " << i + 1 << " ===" << endl;
        cadastrarCarro(carros[i]);
        cout << endl;
    }

    // Exibi��o dos carros cadastrados
    cout << "=== Carros Cadastrados ===" << endl;
    for (int i = 0; i < MAX_CARROS; ++i) {
        cout << "Carro " << i + 1 << ":" << endl;
        cout << "Marca: " << carros[i].marca << endl;
        cout << "Modelo: " << carros[i].modelo << endl;
        cout << "Ano: " << carros[i].ano << endl;
        cout << "Pre�o: " << carros[i].preco << endl;
        cout << endl;
    }

    return 0;
}

