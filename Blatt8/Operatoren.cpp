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
 a = ((((((b + b) * 2) + b) && b || b)) == b);	// (b+b)*2+b =4*2+2 = 10; b=2. a ist weder 10 noch 2. die innere Klammer(AND-Operation) ist also false(0). Da a = false(0), ist die OR-Operation true(a=1). Da b = 2, also ungleich 1 ist, ist a also insgesamt false(0).
 a = b + ++b;		// a wird der Wert b + (b+1) = 2+3 =5 zugewiesen.
 a = sizeof(int) * sizeof(a);	//a wird dem quadrat des Werts der größe (in bytes) zugewiesen, die ein integer hat, da sizeof(int) = 4 und sizeof(a) = 4. a ist also = 16.

 return 0;
 }
 /* Compiler-Werte:
 2=a 2=b	stimmt überein
 17=a 2=b	stimmt überein
 25=a 2=b	stimmt überein
 250=a 2=b	stimmt überein
 4=a 2=b	stimmt überein
 1=a 1=b	b falsch
 0=a 1=b	b falsch
 2=a 2=b	a falsch weil b falsch -> a=++true *2 = (1+1)*2 =2
-10=a 2=b	stimmt überein
-2=a 3=b	?
1=a 3=b		a stimmt überein
0=a 3=b		a stimmt überein
8=a 4=b		a falsch weil b falsch. b(3) wird mit ++b zu 4. 4+4=8=a.
16=a 4=b	stimmt überein.
 /*