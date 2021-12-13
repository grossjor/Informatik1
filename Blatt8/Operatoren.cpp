#include<iostream>
using namespace std;

 int main()
 {
 int a = 2;			// a wird 2 zugewiesen
 int b = 1;			// b wird 1 zugewiesen
 a = b = 2;			// b wird der Wert 2 zugewiesen und dann wird a der Wert von b zugewiesen
 a = 5 * 3 + 2;		// a wird der Wert 5*3+2 = 17 zugewiesen
 a = 5 * (3 + 2);	// a wird der Wert 5*(3+2) = 25 zugewiesen 
 a *= 5 + 5;		// a wird der Wert a=a*(5+5) = 25*10 = 250 zugewiesen 
 a %= 2 * 3;		// a wird der Wert a=a%(2*3) = a%6 = 250%6 (=250 Modulo6) = 4 zugewiesen 
 a = !(--b == 0);	// ! ist der logische Operator NOT. a wird dem entgegengesetzten(booleschen) Wert der Aussage --b == 0 zugewiesen. Da b=2, also --b = 1 ungleich 0, ist die Aussage false; a wäre somit true. Da a aber vom Datentyp int ist kann dieser den Wert true nicht annehmen. Höchstens die Interpretation des Wertes 1 als true; bzw. 0 als false.
 a = 0 && 0 + 2;	// && ist der logische Operator AND. Da a weder 0 noch 2 ist, wird a also der Wert false zugewiesen.(wenn a nicht int wäre...); a wäre also entsprechend der Interpretation = 0.
 a = b++ * 2;		// a wird der Wert b++ * 2 = (2+1)*2 = 6 zugewiesen.
 a = -5 - 5;		// a wird der Wert -5 - 5 = -10 zugewiesen.
 a = -(+b++);		// a wird der Wert -(+b++) = -(2+1) = -3 zugewiesen.
 a = 5 == 5 && 0 || 1;		// a ist -3 und somit weder 0 noch 1. a ist auch nicht 5, somit ist a = false. (Also 0)
 a = ((((((b + b) * 2) + b) && b || b)) == b);	//
 a = b + ++b;
 a = sizeof(int) * sizeof(a);

 return 0;
 }
