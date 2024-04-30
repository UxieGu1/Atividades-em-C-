/*Faça um algoritmo que calcule a seguinte soma:
H = 10 + 10 + 10 + ..... + 10
O código em C++ deve ler um número n (inteiro e positivo) que representa o número
de 10 que serão somados e ao final do programa mostrar o resultado final de H. Utilize
comandos de repetição
Ex: n = 8
H = 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10
H = 80*/
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int N, H;
	cout << "O número de vezes a ser lido será: ";
		cin >> N;
	for(int i = 1; i <= 10; i++){
		H = H + N;
	}
	cout << "O valor da variável H será: " << H;
	return 0;
}
