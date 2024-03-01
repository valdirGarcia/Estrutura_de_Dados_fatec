#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura para representar um cliente
struct Cliente {
    string nome;
    string endereco;
    string cpf;
    float valorCredito;
    int numeroParcelas;
};

// Função para cadastrar um cliente
void cadastrarCliente(Cliente &cliente) {
    cout << "Digite o nome do cliente: ";
    getline(cin, cliente.nome);
    
    cout << "Digite o endereço do cliente: ";
    getline(cin, cliente.endereco);
    
    cout << "Digite o CPF do cliente: ";
    getline(cin, cliente.cpf);
    
    cout << "Digite o valor do crédito desejado: ";
    cin >> cliente.valorCredito;
    
    cout << "Digite o número de parcelas desejadas (1 a 12): ";
    cin >> cliente.numeroParcelas;
    
    // Limpa o buffer do teclado
    cin.ignore();
}

int main() {
    Cliente cliente;

    cout << "=== Cadastro do Cliente ===" << endl;
    cadastrarCliente(cliente);
    cout << endl;

    // Exibição das informações do cliente
    cout << "=== Informações do Cliente ===" << endl;
    cout << "Nome: " << cliente.nome << endl;
    cout << "Endereço: " << cliente.endereco << endl;
    cout << "CPF: " << cliente.cpf << endl;
    cout << "Valor do crédito: " << cliente.valorCredito << endl;
    cout << "Número de parcelas: " << cliente.numeroParcelas << endl;

    return 0;
}

