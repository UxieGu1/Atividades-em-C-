/*Escreva um algoritmo que leia 500 valores inteiros e positivos e:
a) encontre o maior valor;
b) encontre o menor valor;
c) calcule a m�dia dos n�meros lidos.*/
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
int maior, menor, media, n;
maior = media = 0;
for(int i = 1; i <= 500; i++){
	cout << "Digite um valor: ";
	cin >> n;
	if(n >= maior){
		maior = n;
	}
	if(n <= menor){
		menor = n;
	}
	media = media + n;
}
	cout << "O maior valor �: " << maior << endl;
	cout << "O menor valor �: " << menor << endl;
	cout << "O m�dia dos valores �: " << media / 500 << endl;
	return 0;
}
