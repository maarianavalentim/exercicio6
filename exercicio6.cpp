#include <iostream>

using namespace std;

/*int main() {
    int vetor[10];
    cout << "Insira 10 elementos no vetor:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    cout << "Elementos do vetor:\n";
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << endl;
    }
    return 0;
}*/

/*int main() {
    int vetor[7];
    cout << "Insira 7 elementos no vetor:\n";
    for (int i = 0; i < 7; i++) {
        cin >> vetor[i];
    }
    int soma = 0;
    for (int i = 0; i < 7; i++) {
        soma += vetor[i];
    }
    cout << "A soma dos elementos do vetor é: " << soma << endl;
    return 0;
}*/

/*int main() {
    int totalAlunos = 3 * 18 + 2 * 17 + 12 * 16;
    int totalIdades = 3 * 18 + 2 * 17 + 12 * 16; // Total das idades de todos os alunos
    int totalAlunosSala = 3 + 2 + 12; // Total de alunos na sala
    float mediaIdades = static_cast<float>(totalIdades) / totalAlunosSala;
    cout << "A média das idades é: " << mediaIdades << endl;
    return 0;*/


    /*int main() {
        int valores[] = { 5, 9, 7, 10, 15, 23, 20, 30 };
        int totalDepositos = 0;
        for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
            totalDepositos += valores[i];
        }
        cout << "Ele tem " << totalDepositos << " reais no banco.\n";
        return 0;
    }*/

#include <iostream>

using namespace std;

int main() {
    int vetor[10];
    cout << "Insira 10 elementos no vetor:\n";
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    int opcao;
    cout << "Escolha uma opção (1 - Soma, 2 - Subtração, 3 - Multiplicação): ";
    cin >> opcao;
    int resultado;
    if (opcao == 1) {
        resultado = 0;
        for (int i = 0; i < 10; i++) {
            resultado += vetor[i];
        }
    }
    else if (opcao == 2) {
        resultado = vetor[0];
        for (int i = 1; i < 10; i++) {
            resultado -= vetor[i];
        }
    }
    else if (opcao == 3) {
        resultado = 1;
        for (int i = 0; i < 10; i++) {
            resultado *= vetor[i];
        }
    }
    else {
        cout << "Opção inválida!\n";
        return 1;
    }
    cout << "O resultado é: " << resultado << endl;
    return 0;
}


