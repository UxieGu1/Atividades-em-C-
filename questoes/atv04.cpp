/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, faça um programa em C++ que calcule o tempo necessário
para que essa massa se torne menor que 0,5 grama. O programa em C++ deve escrever a
massa inicial, a massa final e o tempo calculado em minutos.*/
#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	double massaInicial, massaFinal, tempo;
	cout << "Massa inicial em gramas: ";
	cin >> massaInicial;
	massaFinal = massaInicial;
	while(massaFinal >= 0.5){
		massaFinal /= 2;
		tempo = tempo + 50;
	}
	cout << "A Massa inicial é: " << massaInicial << endl;
	cout << "A Massa Final é: " << massaFinal << endl;
	cout << "o Tempo total é: " << tempo / 60 << "minutos" << endl;
	
	return 0;
}
	
