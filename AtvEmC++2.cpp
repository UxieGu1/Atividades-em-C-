/*Fa�a um algoritmo que calcule a seguinte soma:
H = 10 + 10 + 10 + ..... + 10
O c�digo em C++ deve ler um n�mero n (inteiro e positivo) que representa o n�mero
de 10 que ser�o somados e ao final do programa mostrar o resultado final de H. Utilize
comandos de repeti��o
Ex: n = 8
H = 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10
H = 80*/
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int N, H;
	cout << "O n�mero de vezes a ser lido ser�: ";
		cin >> N;
	for(int i = 1; i <= 10; i++){
		H = H + N;
	}
	cout << "O valor da vari�vel H ser�: " << H;
	return 0;
}
