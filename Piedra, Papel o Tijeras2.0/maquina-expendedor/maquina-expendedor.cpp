#include <iostream>
#include <string>
#include <random>
using namespace std; 

int main(){
	std::random_device rd;        // fuente de entropía del sistema
	std::mt19937 gen(rd());       // generador Mersenne Twister
	std::uniform_int_distribution<> dist(0, 2); // valores entre 0 y 2
	int jugador, maquina;
	string entrada;
	bool salir = false;

	//menú de inicio del piedra papel o tijeras
	while (!salir) {
		cout << "==== Piedra, Papel o Tijeras ====" << "\n";
		cout << "1. Jugar/volver a jugar" << "\n";
		cout << "2. Salir" << "\n";
		cin >> entrada;

		//opción 1
		switch (stoi(entrada)) {
		case 1:
			do {
				cout << "Elige: 0 = Piedra, 1 = Papel, 2 = Tijeras" << "\n",
					cin >> entrada;

				switch (stoi(entrada)) {
				case 0: jugador = 0; break;
				case 1: jugador = 1; break;
				case 2: jugador = 2; break;
				default:
					cout << "Debes ingresar 0, 1 o 2. \n";
					jugador = -1;
				}
			} while (jugador < 0 || jugador > 2);

			// Mostrar elecciones
			switch (jugador) {
			case 0: cout << "Tu elegiste: Piedra\n"; break;
			case 1: cout << "Tu elegiste: Papel\n"; break;
			case 2: cout << "Tu elegiste: Tijeras\n"; break;
			}

			//Elección aleatoria de la máquina
			maquina = dist(gen);
			switch (maquina) {
			case 0: cout << "La maquina eligio: Piedra\n"; break;
			case 1: cout << "La maquina eligio: Papel\n"; break;
			case 2: cout << "La maquina eligio: Tijeras\n"; break;
			}

			//Determinar ganador 
			if (jugador == maquina) {
				cout << "Empate!\n";
			}
			else if ((jugador == 0 && maquina == 2) ||
					(jugador == 1 && maquina == 0) ||
					(jugador == 2 && maquina == 1)) {
					cout << "Ganaste!\n";
			}
			else {
				cout << "La maquina gana!\n";
			}
			break;

		case 2:
			cout << "Gracias por jugar. Hasta pronto tilin!\n";
			salir = true;
			break;

		default:
			cout << "Opcion invalida. \n";

		}
	}

	return 0;
}
