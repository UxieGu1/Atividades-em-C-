/*Fa�a um programa que receba 20 valores inteiros quaisquer e apresente uma
mensagem dizendo em qual dos seguintes intervalos:
Intervalo A - 0 at� 25
Intervalo B - 26 at� 50
Intervalo C - 51 at� 75
Obviamente se o valor n�o estiver em nenhum destes intervalos, dever� ser impressa
a mensagem �Fora de intervalo�. Utilize comandos de repeti��o*/
#include <iostream>
using namespace std;
int main(){
	int valores;
for(int i = 0; i < 10; i++){
	cout << "Digite os valores: ";
	cin >> valores;
	if(valores >= 0 && valores < 25 ){
		cout << "Intervalo A" << endl;
		
	}else if(valores >= 25 && valores < 50 ){
		cout << "Intervalo B" <<endl;
		
	}else if(valores >= 50 && valores <= 75 ){
		cout << "Intervalo C" <<endl;
	}else if(valores < 0 || valores > 75){
		cout << "Fora de intervalo" <<endl;
	}
	
}
	return 0;
}
