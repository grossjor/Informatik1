#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int main () {
system("cls");

std::string n = "astring";
std::cout << "Herzlich Willkommen beim Kaffee-Automaten" << '\n';
std::cout << "Bitte w"<<(char)132<<"hlen sie aus:" << '\n';
std::cout << "(k) Kaffee" << '\n';
std::cout << "(e) Espresso" << '\n';
std::cout << "(s) Service Mode" << '\n';
std::cin >> n;


if(n=="k"){
  std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl e Entschieden" << '\n';
  std::cout << "Ihr Getr"<<(char)132<<"nk wird zubereitet" << '\n';
    sleep (3);
    std::cout << "Kaffee ist Fertig" << '\n';
      sleep (3);  //theoretisch ist sleep in millisekunden, kann aber wohl in sekunden sein, was es bei mir anscheinend ist

      return main();


}
if(n=="e"){
  std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl e Entschieden" << '\n';
  std::cout << "Ihr Getr"<<(char)132<<"nk wird zubereitet" << '\n';
    sleep (3);
    std::cout << "Espresso ist Fertig" << '\n';
      sleep (3);
      return main();

}
if(n=="s"){
  std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl s Entschieden" << '\n';
  std::cout << "Der Servicemode ist zuzeit nicht verf"<<(char)129<<"gbar" << '\n';
    sleep (3);
    std::cout << "Zur"<<(char)129<<"ck zum Men"<<(char)129<<"" << '\n';
      sleep (3);
      return main();

}
return main();
}
