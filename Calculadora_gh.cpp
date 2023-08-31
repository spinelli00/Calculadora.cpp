#include <conio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <locale.h>

int operador;
int opcaodomenu; 

using namespace std;

void menu() { //menu 
	        setlocale(LC_ALL,"Portuguese");
	    printf("Digite a opção desejada : ");
		cout << "\n[1] Soma";
		cout << "\n[2] Subtração";
		cout << "\n[3] Multiplicação";
		cout << "\n[4] Divisão";
		cout << "\n[5] Raiz quadrada";
		cout << "\n[6] Potência";
     	opcaodomenu = getch();
	}
	
void soma() { //operacao de soma 
	float a, b, c, result;
	int maisnum;

	cout << "\n\nDigite o 1° número : ";
	cin >> a; 
	
	cout << "Digite o 2° número : ";
	cin >> b;
	
	cout << "\nDeseja mais algum número ? \n[1] Sim \n[2] Não";
	maisnum = getch();
	
	if (maisnum <= 1) {
		cout << "\nDigite o 3° número : ";
	     	cin >> c;
	     	result = a + b + c;
	     	cout << "\nO valor da soma e : " << result;
	 }  
	 if (maisnum >= 2) {
		result = a + b;
	    cout << "\nO valor da soma e : " << result;
	     }
		 }

void subtracao() { //operacao de subtracao 
float a, b, c, result;
	int menosnum;

	cout << "\n\nDigite o 1° número : ";
	cin >> a; 
	
	cout << "Digite o 2° número : ";
	cin >> b;
	
	cout << "\nDeseja mais algum número ? \n[1] Sim \n[2] Não";
	menosnum = getch();
	
	switch (menosnum) {
		case '1' :
			cout << "\nDigite o 3° número : ";
	     	cin >> c;
	     	result = a - b - c;
	     	cout << "\nO valor da subtracão e : " << result;
	     	break;
	     	
	    case '2' :
	    	result = a - b;
	     	cout << "\nO valor da subtracão e : " << result;
	     	break;
			
	}
	
}

void multiplicacao() { //operacao de multiplicacao 

float a, b, result;
	int menosnum;

	cout << "\n\nDigite o 1° número : ";
	cin >> a; 
	
	cout << "Digite o 2° número : ";
	cin >> b;
	
    result = a * b;
	cout << "\nO valor da subtracão e : " << result;
	}

void divisao() {//operacao divisao
	
float a, b, result;
	int divi;
	cout << "\n\nDigite o 1° número : ";
	cin >> a; 
	cout << "Digite o 2° número : ";
	cin >> b;	
	result = a / b;
	cout << "\nO valor da subtracão e : " << result;	
	}

void sqrt() {//raiz quadrada
	
float a, result;
	int divi;
	cout << "\n\nDigite o número : ";
	cin >> a; 	
	result = sqrt(a);
	cout << "\nO valor da raiz quadrada e : " << result;	
	}
	
void potencia() {//potencia
	
float a, b, result;
	int divi;
	cout << "\n\nDigite o número : ";
	cin >> a; 	
	cout << "\nDigite o numero da potência : ";
	cin >> b;
	result = pow(a, b);
	cout << "\nA potência do número e igual a : " << result;	
	}


int main() {//principal 
	
	menu();
	
	switch (opcaodomenu) {
		case '1' :
			soma(); 
			break;
			
		case '2' :
			subtracao();
			break;
			
		case '3' :
			multiplicacao();
			break;
			
		case '4' :
			divisao();
			break;
			
		case '5' :
			sqrt();
			break;
			
		case '6' :
			potencia();
			break;
		
			
	
}
}



	
