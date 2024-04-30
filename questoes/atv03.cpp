/*Escreva um algoritmo que leia 500 valores inteiros e positivos e:
a) encontre o maior valor;
b) encontre o menor valor;
c) calcule a média dos números lidos.*/
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
	cout << "O maior valor é: " << maior << endl;
	cout << "O menor valor é: " << menor << endl;
	cout << "O média dos valores é: " << media / 500 << endl;
	return 0;
}
