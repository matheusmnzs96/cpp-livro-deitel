/* Primeiro programa C++.
 * Programa de impressão de texto. 
 * ---------------------------------------------
 * Created By Matheus Menezes on 2018-06-07 
 * Manaus - Brazil
 */

#include <iostream> // biblioteca que permite entrada e saída de dados
#include <stdlib.h> // biblioteca que permite o uso do system("pause")

using namespace std; // habilita o uso dos recursos de entrada/saída da biblioteca iostream

// função inicia a execução do programa.
int main(){
	
	string nome; // declarando variavel do tipo string

	cout << "Digite seu nome: "; // exibindo mensagem
	getline(cin, nome); // lendo dado do tipo string

	cout << "\nWelcome to C++ Programming, " << nome << "!" << endl; // exibindo mensagem final

	system("pause"); // utilizado para que o programa não feche imediatamente apos ser executado
	return 0; // para indicar que o programa foi executado com sucesso
}