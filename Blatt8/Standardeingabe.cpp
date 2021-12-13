#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int main() {
  std::string name = "nachname" ;
  std::string vorname = "vorname" ;
  std::string wohnort = "wohnort";
  int postleitzahl;
  std::string strassenname = "strassenname";
  int hausnummer;
  std::string ausgabe;
  std::cout << "Nachnamen eingeben" << '\n';
  std::cin >> name;
  std::cout << "Vornamen eingeben" << '\n';
  std::cin >> vorname;
  std::cout << "Wohnort eingeben" << '\n';
  std::cin >> wohnort;
  std::cout << "Postleitzahl eingeben" << '\n';
  std::cin >> postleitzahl;
  std::cout << "Strassenname eingeben" << '\n';
  std::cin >> strassenname;
  std::cout << "Hausnummer eingeben" << '\n';
  std::cin >> hausnummer;
  system("cls");
    ausgabe = name +" "+ vorname + '\n' + wohnort + " "+ std::to_string(postleitzahl) + '\n' + strassenname + " "+ std::to_string(hausnummer);
    std::cout << ausgabe << '\n';

  return 0;
}
