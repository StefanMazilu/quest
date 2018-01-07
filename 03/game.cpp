#include "word.h"
#include "wordcollection.h"
#include "game.h"


using namespace std;


// TODO: 08. sa se defineasca operatorul:  void operator() (int incercari)
// - se instantieaza obiectul collection de tipul WordCollection
// - se apeleaza metoda Print pentru collection
//
// - se instantiaza obiectul sel de tipul Word cu: collection.Select() si incercari
//
// - intr-o bucla
//     se apeleaza metoda Guess pentru obiectul sel
//   cat timp sel (operatorul de conversie la bool)
void Game::operator() (int incercari)
{
    WordCollection collection;
    collection.Print();
    Word sel(collection.Select(), incercari);

    do
    {
        sel.Guess();
    } while(sel);
}

// cod de testare in functia main:
/*
    Game hangman;
    hangman();
*/

