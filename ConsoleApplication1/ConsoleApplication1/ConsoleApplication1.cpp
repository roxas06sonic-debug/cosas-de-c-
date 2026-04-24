#include <iostream>
#include <string>
using namespace std;

int main() {
	int votingAge = 18;
	string Edad;
	cout << "Escribe tu edad: ";
	getline (cin, Edad);

	int edadNum = stoi(Edad);
	if (edadNum >= votingAge) {
	cout << "suficientemente viejo pa votar.";
	}
	else { 
		cout << "no eres suficientemente viejo.";
	}
	return 0;
}

