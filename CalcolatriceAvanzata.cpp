// Librerie utili per il programma

#include <iostream>
#include <cmath>

using namespace std;

// Funzione Addizione

int addizione(int num1,int num2) {
	
	return num1 + num2;
	
}

// Funzione Sottrazione

int sottrazione(int num1,int num2) {
	
	return num1 - num2;
	
}

// Funzione Moltiplicazione

int moltiplicazione(int num1,int num2) {
	
	return num1 * num2;
	
}

// Funzione Divisione

int divisione(int num1,int num2) {
	
	return num1 / num2;
	
}

// Funzione Radice quadrata

int radQuad(int num1) {
	
	return sqrt(num1);
	
}

// Funzione Radice cubica

int radCub(int num1) {
	
	return cbrt(num1);
	
}

// Funzione Potenza

int potenza(int num1,int num2) {
	
	return pow(num1,num2);
	
}

// Funzione Valore Assoluto

int valAss(int num1) {
	
	return abs(num1);
	
}

// Funzione Arrotondamento eccesso

int eccesso(int num1) {
	
	return ceil(num1);
	
}

// Funzione Arrotondamento difetto

int difetto(int num1) {
	
	return floor(num1);
	
}

// Funzione Arrotondamento numero vicino

int vicino(int num1) {
	
	return round(num1);
}

// Funzione seno angolo

int seno(int num1) {
	
	return sin(num1);
	
}

// Funzione coseno angolo

int coseno(int num1) {
	
	return cos(num1);
	
}

// Funzione tangente angolo

int tangente(int num1) {
	
	return tan(num1);
	
}

// Funzione principale(main)

int main() {
	
	// Dichiarazione variabili
	
	double num1;
	double num2;
	
	int opz;
	char running = 'y';
	
	// ciclo while esecuzione
	
	while (running == 'y') {
		
		// menù principale
		
		cout << "\nOpzioni disponibili:" << endl;
		
		cout << "\n0: Exit";
		cout << "\n1: Addizione";
		cout << "\n2: Sottrazione";
		cout << "\n3: Moltiplicazione";
		cout << "\n4: Divisione";
		cout << "\n5: Radice quadrata";
		cout << "\n6: Radice cubica";
		cout << "\n7: Potenza";
		cout << "\n8: Valore assoluto";
		cout << "\n9: Arrotondamento per eccesso";
		cout << "\n10: Arrotondamento per difetto";
		cout << "\n11: Arrotondamento a numero piu vicino";
		cout << "\n12: Seno angolo in radianti";
		cout << "\n13: Coseno angolo in radianti";
		cout << "\n14: Tangente angolo in radianti" << endl;
		
		cout << "\nInserisci opzione(0/14): ";
		cin >> opz;
		
		// struttura condizionale scelta opzione
		
		switch(opz) {
			
			// case addizione
			
			case 1:
				
				cout << "\nInserisci il primo numero: ";
				cin >> num1;
				
				cout << "\nInserisci il secondo numero: ";
				cin >> num2;
				
				cout << addizione(num1,num2);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
			
			// case sottrazione
				
			case 2:
				
				cout << "\nInserisci il primo numero: ";
				cin >> num1;
				
				cout << "\nInserisci il secondo numero: ";
				cin >> num2;
				
				cout << sottrazione(num1,num2);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
			
			// case moltiplicazione
				
			case 3:
				
				cout << "\nInserisci il primo numero: ";
				cin >> num1;
				
				cout << "\nInserisci il secondo numero: ";
				cin >> num2;
				
				cout << moltiplicazione(num1,num2);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case divisione
			
			case 4:
				
				cout << "\nInserisci il primo numero: ";
				cin >> num1;
				
				cout << "\nInserisci il secondo numero: ";
				cin >> num2;
				
				cout << divisione(num1,num2);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case radice quadrata
			
			case 5:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << radQuad(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
			
			// case radice cubica
			
			case 6:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << radCub(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case potenza
			
			case 7:
				
				cout << "\nInserisci base: ";
				cin >> num1;
				
				cout << "\nInserisci esponente: ";
				cin >> num2;
				
				cout << potenza(num1,num2);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
			
			// case valore assoluto
			
			case 8:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << valAss(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case arrotondamento eccesso
			
			case 9:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << eccesso(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case arrotondamento difetto
			
			case 10:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << difetto(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// case arrotondamento numero vicino
			
			case 11:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << vicino(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// seno angolo
			
			case 12:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << seno(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// coseno angolo
			
			case 13:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << coseno(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
				
			// tangente angolo
			
			case 14:
				
				cout << "\nInserisci numero: ";
				cin >> num1;
				
				cout << tangente(num1);
				
				cout << "\n\nTornare al menu(y/n): ";
				cin >> running;
				
				break;
			
			// case uscita
			
			case 0:
				
				return 0;
				break;
				
		}
	}
}
