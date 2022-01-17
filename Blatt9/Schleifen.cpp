#include <iostream>
using namespace std;

int main()			//es war keine main funktion vorhanden
{
	int i, k, n;

	i = 101, k = 5, n = 10;
	while (i > 0) k = 2 * k; // i ist immer > 0, deshalb wird k immer größer -> keine Abbruchbedingung (es fehlt ein i--)

	i = 101, k = 5, n = 10;
	while (i != 0) i = i - 2; // i wird nie 0, da i ungerade begínnt -> keine Abbruchbedingung erreicht (>= statt != benutzen)

	i = 101, k = 5, n = 10;
	while (n != i) { // n wird immer != i bleiben (doppeltes von i) -> keine Abbruchbedingung erreicht
		++i;
		n = 2 * i;
	}
}