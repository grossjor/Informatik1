#include<iostream>
using namespace std;

int main()
{
	std::cout << "Messwerte [m]" << endl;
	std::cout << "- - - - - - - -" << endl;
	double werte[] = { 99.975, 100.002, 99.999, 99.982, 100.1, 100.009, 99.826, 100.547, 100.023, 100.008 };
	int i = 0;
	for (i = 0; i < (sizeof(werte) / sizeof(werte[0])); i++) {
		printf("%lf\n", werte[i]);						//printed die Werte aus dem Array
	}
	std::cout << endl;

	double summe = 0;
	int arraySize = sizeof(werte) / sizeof(werte[0]);
	for (int i = 0; i < arraySize; i++) {
		summe += werte[i];								//berechnet die Summe
	}
	double mittelwert = summe / arraySize;				//berechnet den Mittelwert
	std::cout << "Mittelwert " << mittelwert << "m ";

	double varianz = 0.0;
	double sd = 0.0;
	for (i = 0; i < arraySize; i++) {
		varianz += abs((werte[i] - mittelwert)) * abs((werte[i] - mittelwert));
	}
	varianz /= (arraySize -1);							//berechnet die Varianz
	
	std::cout << "Varianz = " << varianz << " quadratmeter ";
	sd = sqrt(varianz);									//berechnet die Standardabweichung
//	std::cout <<  "sd = " << sd;
	std::cout << endl;
	
	return 0;
	
}