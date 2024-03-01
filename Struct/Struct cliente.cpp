#include <iostream>
#include <string>

using namespace std;

// Defini��o da estrutura para representar um cliente
struct Cliente {
    string nome;
    string endereco;
    string cpf;
    float valorCredito;
    int numeroParcelas;
};

// Fun��o para cadastrar um cliente
void cadastrarCliente(Cliente &cliente) {
    cout << "Digite o nome do cliente: ";
    getline(cin, cliente.nome);
    
    cout << "Digite o endere�o do cliente: ";
    getline(cin, cliente.endereco);
    
    cout << "Digite o CPF do cliente: ";
    getline(cin, cliente.cpf);
    
    cout << "Digite o valor do cr�dito desejado: ";
    cin >> cliente.valorCredito;
    
    cout << "Digite o n�mero de parcelas desejadas (1 a 12): ";
    cin >> cliente.numeroParcelas;
    
    // Limpa o buffer do teclado
    cin.ignore();
}

int main() {
    Cliente cliente;

    cout << "=== Cadastro do Cliente ===" << endl;
    cadastrarCliente(cliente);
    cout << endl;

    // Exibi��o das informa��es do cliente
    cout << "=== Informa��es do Cliente ===" << endl;
    cout << "Nome: " << cliente.nome << endl;
    cout << "Endere�o: " << cliente.endereco << endl;
    cout << "CPF: " << cliente.cpf << endl;
    cout << "Valor do cr�dito: " << cliente.valorCredito << endl;
    cout << "N�mero de parcelas: " << cliente.numeroParcelas << endl;

    return 0;
}

