// Coded by Nate
// UTF-8
// Data Conclusão 10-12-2017

#include <iostream>
using namespace std;

int main(){

// Início do Título do Programa

	cout << "" << endl;
	cout << "=====================" << endl;
	cout << "" << endl;
	cout << " Calculo da Tabuada " << endl;
	cout << "" << endl;
	cout << "=====================\n" << endl;
	
// Fim do Título do Programa

	cout << "Digite um numero para saber sua Tabuada" << endl;

	int num; // Nessa linha e na linha abaixo, define-se um numero inteiro para o user digitar.
	cin >> num;
	cout << "" << endl; // Apenas um espaço

	for (int i = 1; i <= 10; i++){ // o "I" é o numero q será multiplicado com o valor ja digitado pelo o user (num).

		int res = i * num; // operação da multiplicação
		cout << num << " X " << i << " = " << res << endl;

	} // com o i valendo valendo/iniciando no 1, enquanto ele estiver menor ou igual a 10, ele irá sofrer um incremento de 1 até chegar a 10.

	return main(); // no final irá retornar ao main, gerando novamente o programa (como se fosse um loop...).

}
