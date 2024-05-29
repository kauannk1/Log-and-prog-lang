#include <iostream>
using namespace std;

#define N 10

string meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho",
					"Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

typedef struct {
	int codigo;
	string nome;
	float vendas[12] = { 0 };
	
} Vendedor;

bool cadastrar_vendedor(Vendedor[N], int);
int procurar_vendedor(Vendedor[N], int, int);
void cadastrar_venda(Vendedor[N], int);
void consultar_venda(Vendedor[N], int);

int main(){
	Vendedor vendedores[N];
	int option, n_vendedores;
	string dashes(10, '-');
	
	do {
		system("cls");
		cout << dashes << " SISTEMA DE VENDAS " << dashes << endl;
		cout << "1. Cadastrar vendedor\n";
        cout << "2. Cadastrar venda\n";
        cout << "3. Consultar venda\n";
        cout << "4. Cosultar total de vendas\n";
        cout << "5. Mostrar melhor vendedor\n";
        cout << "6. Mostrar melhor mes\n";
        cout << "7. Finalizar\n";
        cout << dashes << dashes << endl;
        cout << "Informe uma opcao: ";
        cin >> option;
        
        switch (option){
        	case 1: cout << dashes << " CADASTRAR VENDEDOR " << dashes << endl;
					if(cadastrar_vendedor(vendedores, n_vendedores)){
						n_vendedores++;
					}
        			break;
        	case 2: cout << dashes << " CADASTRAR VENDA " << dashes << endl; 
        			cadastrar_venda(vendedores, n_vendedores);
        			break;
        	case 3: cout << dashes << " CONSULTAR VENDA " << dashes << endl;
        			consultar_venda(vendedores, n_vendedores);
        			break;
        	case 4: cout << dashes << " CONSULTAR TOTAL DE VENDAS " << dashes << endl; 
        			break;
        	case 5: cout << dashes << " MOSTRAR MELHOR VENDEDOR " << dashes << endl; 
        			break;
        	case 6: cout << dashes << " MOSTRAR MELHOR MES " << dashes << endl; 
        			break;
        	case 7: cout << dashes << " FINALIZAR " << dashes << endl; 
        			break;
        	deafult: cout<< "Opcao invalida... \n";
		}
		cout << endl;
		system("pause");
        
		
	} while (option != 7);
	
	return 0;
}

bool cadastrar_vendedor(Vendedor vends[N], int n){
	Vendedor v;
	
	if (n == N){
		cout << "Ultrapassou o numero maximo de vendedores cadastrados ..." << endl;
		return false;
	}
	
	cout << "Informe os dados do vendedor: " << endl;
	cout << "Codigo: ";
	cin >> v.codigo;
	
	// verificando de v.codigo ja existe em vends
	int index = procurar_vendedor(vends, n, v.codigo);
	if (index == -1){ // v.codigo nao existe em vends
		cout << "Nome: ";
		cin.ignore();
		getline(cin, v.nome); // para pegar os espacos da resposta
		vends[n] = v;
		return true;
	}
	
	else{
		cout << "Codigo ja existe no sistema ... " << endl;	
		return false;
	}
	
	
}

int procurar_vendedor(Vendedor vends[N], int n, int cod) {
    for (int i = 0; i < n; i++)
        if (vends[i].codigo == cod)
        	return i;
    return -1;
}

void cadastrar_venda(Vendedor vends[N], int n){
	int cod, mes;
	
	cout << "Informe os dados\n";
	cin >> cod;
	int index = procurar_vendedor(vends, n, cod);
	if(index > -1) { //vendedor foi encontrado
		cout << "Mes [1-12]: ";
		cin >> mes;
		while (mes < 1 or mes > 12){
				cout << "Mes invalido ... Informe o mes [1-12]: ";
				cin >> mes;
		}
		mes--; //para bater com numero 1 do vetor
		cout << "Vendas de " << meses[mes] << ": ";
		cin >> vends[index].vendas[mes];
		
	}
	else{ //vendedor inexistente
		cout << "Vendedor inexistente ... " << endl;
	}
}
void consultar_venda(Vendedor vends[N], int n) {
    int index, cod, mes;

    cout << "Informe codigo: ";
    cin >> cod;
    index = procurar_vendedor(vends, n, cod);
    if (index > -1) { // encontrou o vendedor
        cout << "Informe o mes [1-12, 0 - anual]: ";
        cin >> mes; 
        if (mes == 0) {//listar todos os meses
        	cout << "Vendedor: " << vends[index].nome << "(" << vends[index].codigo << ")\n";
            cout << "\tMes\t|\tValor\t|\n";
			for (int i = 0; i < 12; i++) {
                cout << "\t" << meses[i] << "\t|\t" << vends[index].vendas[i] << "\t|\n";
			}
            
    	}
    	else { // listar o mes específico
    		cout << "Vendedor: " << vends[index].nome << "(" << vends[index].codigo << ")\n";
			cout << "Mes de " << meses[mes-1] << ": " << vends[index].vendas[mes-1] << endl;
		}
		
	}
    else // vendedor não existe
        cout << "Vendedor inexistente ...\n";
}
