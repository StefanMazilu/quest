// Proiectul contine urmatoarele fisiere:
// word.h    - declararea clasei Word pentru hangman
// word.cpp  - definirea metodelor clasei Word

// game.h    - declararea clasei Game
// game.cpp  - definirea metodelor pentru clasa Game

// generator.h - declararea clasei Generator
// generator.cpp - definirea metodelor pentru clasa Generator

// wordcollection.h - declararea clasi WordCollection
// wordcollection.cpp  - definirea metodelor pentru WordCollection

// main.cpp  - toate apelurile de test se adauga in functia main



// NOTA:
// - taskurile se implementeaza in ordinea numerotarii
//   folositi meniul View / Todo list si sortati textul cu click pe coloana Text
// - compilati programul dupa fiecare task
// - daca aveti erori, corectati-le inainte de a trece la taskul urmator!



// Daca aveti erori de compilare
// - cititi mesajul de eroare
// - identificati linia din fisierul sursa unde a aparut eroarea
// - verificati sintaxa instructiunii(instructiunilor)
// - daca nu puteti rezolva trimiteti arhiva si discutam prin email



// IMPORTANT:
// Inainte de trimiterea arhivei:
// 1. stergeti fisierele binare: meniul Build\Clean Workspace
// 2. arhivati directorul cu tema in format zip
// 3. trimiteti arhiva pe adresa adonis@infoacademy.net
// 4. mentionati in subiect clasa din care faceti parte

#include <iostream>
#include "wordcollection.h"
#include "word.h"
#include "game.h"

using namespace std;

int main()
{
    // TODO: 03. se adauga apelurile de test pentru operatorul de indexare la WordCollection
    WordCollection collection;
    string item0 = collection[0];

    // TODO: 06. se adauga apelurile de test pentru operator bool() const clasa Word
    Word wt1 = {"m--e"};
    bool b1 = wt1; // false + mesaj de castig

    Word wt2 = {"mere"};
    bool b2 = wt2; // false + mesaj pierdere

    Word wt3 = {"mere", 5};
    bool b3 = wt3; // true fara mesaje

    // TODO: 09. se adauga apelurile de test pentru operatorul functie din clasa Game
    Game hangman;
    hangman();
    // TODO: 10. se analizeaza implementarea:
    // - metodele Fill, Info si Guess pentru clasa Word
    // - initializarea atributului _words pentru clasa WordCollection
    // - instantierea obiectelor Word in functia main
    // - distribuirea codului in clase
    // - se traseaza cu debuggerul si se verifica rezultatele

    return 0;
}
