#include<iostream>
using namespace std;

int main()
{
	double werte[500];
	int i = 0;
	int anzahl;

	cout << "Anzahl Werte:\n";
	cin >> anzahl;

	cout << "Werte: ";
	for (i = 0; i < anzahl; ++i) {
		std::cin >> werte[i];
	}
	std::cout << endl;

	double summe = 0;
	for (int i = 0; i < anzahl; i++) {
		summe += werte[i];								//berechnet die Summe
	}
	double mittelwert = summe / anzahl;				//berechnet den Mittelwert
	std::cout << "Mittelwert " << mittelwert << "m ";

	double varianz = 0.0;
	double sd = 0.0;
	for (i = 0; i < anzahl; i++) {
		varianz += abs((werte[i] - mittelwert)) * abs((werte[i] - mittelwert));
	}
	varianz /= (anzahl - 1);							//berechnet die Varianz

	std::cout << "Varianz = " << varianz << " quadratmeter ";
	sd = sqrt(varianz);									//berechnet die Standardabweichung
//	std::cout <<  "sd = " << sd;
	std::cout << endl;

	return 0;

}