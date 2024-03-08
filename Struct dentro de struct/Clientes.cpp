#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Parcela {
    string data;
    string local;
};

struct Cliente {
    string nome;
    string endereco;
    string cidade;
    string estado;
    vector<Parcela> parcelas; // Vetor para armazenar as parcelas do cliente
};

void cadastrarCliente(vector<Cliente> &clientes);
void cadastrarParcela(Cliente &cliente);

int main() {
    vector<Cliente> clientes;

    cadastrarCliente(clientes);

    cout << "\nClientes cadastrados:\n";
    for (int i = 0; i < clientes.size(); ++i) {
        const Cliente &cliente = clientes[i];
        cout << "Nome: " << cliente.nome << endl;
        cout << "Endereço: " << cliente.endereco << ", " << cliente.cidade << ", " << cliente.estado << endl;
        cout << "Parcelas:\n";
        for (int j = 0; j < cliente.parcelas.size(); ++j) {
            const Parcela &parcela = cliente.parcelas[j];
            cout << "  Data: " << parcela.data << ", Local: " << parcela.local << endl;
        }
        cout << endl;
    }

    return 0;
}

void cadastrarCliente(vector<Cliente> &clientes) {
    Cliente novoCliente;
    cout << "Digite o nome do cliente: ";
    getline(cin >> ws, novoCliente.nome); // Utiliza getline para permitir espaços no nome
    cout << "Digite o endereço do cliente: ";
    getline(cin >> ws, novoCliente.endereco);
    cout << "Digite a cidade do cliente: ";
    getline(cin >> ws, novoCliente.cidade);
    cout << "Digite o estado do cliente: ";
    getline(cin >> ws, novoCliente.estado);

    for (int i = 0; i < 12; ++i) {
        cadastrarParcela(novoCliente);
    }

    clientes.push_back(novoCliente);
}

void cadastrarParcela(Cliente &cliente) {
    Parcela novaParcela;
    cout << "Digite a data da parcela: ";
    getline(cin >> ws, novaParcela.data); // Utiliza getline para permitir espaços na data
    cout << "Digite o local da parcela: ";
    getline(cin >> ws, novaParcela.local);

    cliente.parcelas.push_back(novaParcela);
}

