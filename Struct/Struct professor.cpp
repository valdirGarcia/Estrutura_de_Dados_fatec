#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura para representar um professor
struct Professor {
    string nome;
    string disciplina;
};

// Função para cadastrar um professor
void cadastrarProfessor(Professor &professor) {
    cout << "Digite o nome do professor: ";
    getline(cin, professor.nome);
    
    cout << "Digite a disciplina do professor: ";
    getline(cin, professor.disciplina);
}

int main() {
    const int MAX_PROFESSORES = 5; // Defina o número máximo de professores
    Professor professores[MAX_PROFESSORES];

    // Loop para cadastrar os professores
    for (int i = 0; i < MAX_PROFESSORES; ++i) {
        cout << "=== Cadastro do Professor " << i + 1 << " ===" << endl;
        cadastrarProfessor(professores[i]);
        cout << endl;
    }

    // Exibição dos professores cadastrados
    cout << "=== Professores Cadastrados ===" << endl;
    for (int i = 0; i < MAX_PROFESSORES; ++i) {
        cout << "Professor " << i + 1 << ":" << endl;
        cout << "Nome: " << professores[i].nome << endl;
        cout << "Disciplina: " << professores[i].disciplina << endl;
        cout << endl;
    }

    return 0;
}

