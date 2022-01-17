#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>


float Kaffeebohnen;
float Espressobohnen;
float Wasser;
float Milch;
float Zucker;
float Preis;
float Geld;
float Rueckgeld;
int main () {
Kaffeebohnen = 1000;
Espressobohnen = 1000;
Wasser = 5000;
Milch = 1000;
Zucker = 500;
Preis = 0;
Geld = 0;
Rueckgeld = 0;



while (true) {


  system("cls");
    std::string milk = "astring";
    std::string sugar ="astring";
    std::string password ="astring";
    std::string n = "astring";
    std::cout << "Herzlich Willkommen beim Kaffee-Automaten" << '\n';
    std::cout << "Preis pro Tasse: 1 Euro" << '\n';
    std::cout << "Milch oder Zucker: 10 Cent" << '\n';
    std::cout << "-------------------------------------------------------" << '\n';
    std::cout << "Bitte w"<<(char)132<<"hlen sie aus:" << '\n';
    std::cout << "(k) Kaffee" << '\n';
    std::cout << "(e) Espresso" << '\n';
    std::cout << "(s) Service Mode" << '\n';
    std::cin >> n;


    if(n=="k"){
      std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl (K)affee Entschieden" << '\n';
      Preis = 1;
      std::cout << "Wollen sie Milch? (j/n)" << '\n';
      std::cin >> milk;
        if(milk == "j" ){ Preis = Preis+0.1;}
        if(milk == "n" ){}
          std::cout << "Wollen sie Zucker? (j/n)" << '\n';
          std::cin >> sugar;
        if(sugar == "j" ){ Preis = Preis+0.1;}
        if(sugar == "n" ){}
          std::cout << "Bitte Zahlen sie :" <<Preis << '\n';
          std::cin >> Geld;
            if (Geld < Preis) {
              std::cout << "Zu wenig Geld, Vorgang wird abgebrochen." << '\n';
              sleep (2);
                }
            if (Geld >= Preis) {
              std::cout << "Ihr Getr"<<(char)132<<"nk wird zubereitet" << '\n';
              sleep (3);
              std::cout << "Kaffee ist Fertig" << '\n';
                  if (sugar == "j") {
                    Zucker = Zucker - 5;

                  }
                  if (milk == "j") {
                    Milch = Milch - 30;
                  }
                  Rueckgeld = Geld - Preis;
                  Kaffeebohnen = Kaffeebohnen - 5;
                  Wasser = Wasser - 125;
          std::cout << "Bitte entnehmen sie " <<Rueckgeld <<" Wechselgeld" << '\n';
      }
      sleep (2);
    }
    if(n=="e"){
      std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl (E)spresso Entschieden" << '\n';
      Preis = 1;
      std::cout << "Wollen sie Milch? (j/n)" << '\n';
      std::cin >> milk;
        if(milk == "j" ){ Preis = Preis+0.1;}
        if(milk == "n" ){}
          std::cout << "Wollen sie Zucker? (j/n)" << '\n';
          std::cin >> sugar;
            if(sugar == "j" ){ Preis = Preis+0.1;}
            if(sugar == "n" ){}
              std::cout << "Bitte Zahlen sie :" <<Preis << '\n';
              std::cin >> Geld;
                if (Geld < Preis) {
                  std::cout << "Zu wenig Geld, Vorgang wird abgebrochen." << '\n';
                  sleep (2);
                }
                  if (Geld >= Preis) {
                    std::cout << "Ihr Getr"<<(char)132<<"nk wird zubereitet" << '\n';
                    sleep (3);
                    std::cout << "Kaffee ist Fertig" << '\n';
                  if (sugar == "j") {
                    Zucker = Zucker - 5;

                  }
                  if (milk == "j") {
                    Milch = Milch - 30;
                  }
                  Rueckgeld = Geld - Preis;
                  Wasser = Wasser - 125;
                  Espressobohnen = Espressobohnen - 5;
                  std::cout << "Bitte entnehmen sie " <<Rueckgeld <<" Wechselgeld" << '\n';
                }
              }


    if(n=="s"){
        std::cout << "Sie haben sich f"<<(char)129<<"r Auswahl s Entschieden" << '\n';
        system("echo off");
        std::cout << "Bitte Passwort eingeben:" << '\n'; //Da getch nicht in minGW enthalten ist bräuchte ich Hilfe wie man das ersetzt, da die Beispiele die genannt wurden etwa 3 mal länger ist als mein Programm
        std::cin >> password;
        if (password == "passwd") {
        std::cout << "Kaffebohnen"<<Kaffeebohnen << '\n';
        std::cout << "Espressobohnen"<<Espressobohnen << '\n';
        std::cout << "Wassser"<<Wasser << '\n';
        std::cout << "Milch"<<Milch << '\n';
        std::cout << "Zucker"<<Zucker << '\n';
        sleep(6);
      }

  else{
    std::cout << "Falsches Passwort! Zugang zum Service Interface verweigert!" << '\n';
    sleep(2);
  }
  system("echo on");
}

}

}
