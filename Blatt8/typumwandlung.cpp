#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int main() {
  using std::cout;
using std::endl;
using std::string;

  int l;					//erstellt die Variable l vom typ Integer (ganzzahliger Wert)
  double laenge{ 100.05 };	//erstellt die Variable laenge mit dem Wert 100.05 Mit Datentyp double (Gleitpunktzahl)
  char zeichen;				//erstellt die Variable zeichen mit dem Datentyp char (Zeichen)
  
   l = laenge;				//weist dem Wert der Variable l dem Wert der Variable laenge zu. l ist vom Datentyp int und kann somit keine Gleitpunktzahlen darstellen. Die Variable laenge ist jedoch eine vom Typ double und somit eine Gleitpunktzahl. Die beiden können also nicht verlustfrei ineinander umgewandelt werden.
   zeichen = laenge;		//Weist dem Wert der Variable zeichen dem Wert der Variable laenge zu. Die Variable zeichen hat den Datentypen char, welcher genau ein Zeichen erlaubt. Die Variable laenge ist jedoch ein double, welcher eine Gleitpunktzahl darstellt. Ein char kann keine Gleitpunktzahl speichern und ein double keine Zeichen. Man kann also die Datentypen nicht verlustfrei ineinander umwandeln.
   std::cout << laenge << " " << l << " " << zeichen << endl;
 string messlatte { "777.77" };
   //laenge = static_cast<double>(messlatte);  //sorgt für fehler beim compilieren
  return 0;
}
