#include <iostream>
#include <cmath>
#include <cstdlib> // biblioteca para usar o exit

using namespace std;

// Função para exibir o menu de opções
void exibirMenu() {
    cout << "\n===========================================================\n";
    cout << "\nBEM-VINDO AO CONVERSOR DE BASES NUMERICAS\n\n";
    cout << "QUAL OPERACAO DESEJA REALIZAR? \n\n";
    cout << "[ 1 ] BINARIO     ->  DECIMAL\n";
    cout << "[ 2 ] DECIMAL     ->  BINARIO\n";
    cout << "[ 3 ] OCTAL       ->  DECIMAL\n";
    cout << "[ 4 ] DECIMAL     ->  OCTAL\n";
    cout << "[ 5 ] HEXADECIMAL ->  DECIMAL\n";
    cout << "[ 6 ] DECIMAL     ->  HEXADECIMAL\n";
    cout << "[ 0 ] SAIR\n";
    cout << "\n===========================================================\n";
}

// Função para converter base (binária, octal ou hexadecimal) -------> decimal
int baseToDec(string num_base, int base) {
    int dec = 0;

    for (int i = num_base.length() - 1; i >= 0; i--) {
        char digit = num_base[i];
        int num = (isdigit(digit) ? digit - '0' : toupper(digit) - 'A' + 10);

        if (num >= base || num < 0) {
            cout << "Numero invalido!" << endl;
            exit(EXIT_FAILURE);
        }

        dec += num * pow(base, num_base.length() - i - 1);
    }

    return dec;
}
// Função para converter decimal para base específica (binário, octal ou hexadecimal)
string decToBase(int num_dec, int base) {
    string num_conv = "";
    const string resto = "0123456789ABCDEF";

    while (num_dec > 0) {
        num_conv = resto[num_dec % base] + num_conv;
        num_dec /= base;
    }

    return num_conv;
}

// Função para processar a escolha do usuário e realizar a operação correspondente
void processarEscolha(int opcao) {
    switch (opcao) {
        case 0:
            cout << "Calculadora encerrada!" << endl;
            exit(EXIT_SUCCESS);
        case 1:
            cout << "BINARIO: ";
            int dec;
            cin >> dec;
            cout << "DECIMAL: " << baseToDec(to_string(dec), 2) << endl;
            break;
        case 2:
            cout << "DECIMAL: ";
            cin >> dec;
            cout << "BINARIO: " << decToBase(dec, 2) << endl;
            break;
        case 3:
            cout << "OCTAL: ";
            cin >> dec;
            cout << "DECIMAL: " << baseToDec(to_string(dec), 8) << endl;
            break;
        case 4:
            cout << "DECIMAL: ";
            cin >> dec;
            cout << "OCTAL: " << decToBase(dec, 8) << endl;
            break;
        case 5:
            cout << "HEXADECIMAL: ";
            cin >> dec;
            cout << "DECIMAL: " << baseToDec(to_string(dec), 16) << endl;
            break;
        case 6:
            cout << "DECIMAL: ";
            cin >> dec;
            cout << "HEXADECIMAL: " << decToBase(dec, 16) << endl;
            break;
        default:
            cout << "Opcao nao permitida!\nTente novamente." << endl;
            break;
    }
}



int main() {
    int opcao;

    while (true) {
        exibirMenu();
        cout << "QUAL OPERACAO DESEJA REALIZAR? ";
        cin >> opcao;
        processarEscolha(opcao);
    }

    return 0; 
}
