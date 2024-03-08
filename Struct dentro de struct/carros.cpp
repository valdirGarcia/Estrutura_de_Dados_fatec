#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Revisao {
    string data;
    string local;
};

struct Carro {
    string placa;
    int ano;
    string marca;
    vector<Revisao> revisoes; 
};

void cadastrarCarro(vector<Carro> &carros);
void cadastrarRevisao(Carro &carro);

int main() {
	
    vector<Carro> carros;

    cadastrarCarro(carros);

    cout << "\nCarros cadastrados:\n";
    
    for (int i = 0; i < carros.size(); ++i) {
        cout << "Placa: " << carros[i].placa << ", Marca: " << carros[i].marca << ", Ano: " << carros[i].ano << endl;
        cout << "Revisões:\n";
        for (int j = 0; j < carros[i].revisoes.size(); ++j) {
            cout << "  Data: " << carros[i].revisoes[j].data << ", Local: " << carros[i].revisoes[j].local << endl;
        }
        cout << endl;
    }

    return 0;
}

void cadastrarCarro(vector<Carro> &carros) {
    Carro novoCarro;
    cout << "Digite a placa do carro: ";
    cin >> novoCarro.placa;
    cout << "Digite a marca do carro: ";
    cin >> novoCarro.marca;
    cout << "Digite o ano do carro: ";
    cin >> novoCarro.ano;

    for (int i = 0; i < 5; ++i) {
        cadastrarRevisao(novoCarro);
    }

    carros.push_back(novoCarro);
}

void cadastrarRevisao(Carro &carro) {
    Revisao novaRevisao;
    cout << "Digite a data da revisão: ";
    cin >> novaRevisao.data;
    cout << "Digite o local da revisão: ";
    cin >> novaRevisao.local;
    carro.revisoes.push_back(novaRevisao);
}

