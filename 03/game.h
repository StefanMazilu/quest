#ifndef GAME_H
#define GAME_H

#include <string>
using namespace std;


// clasa Game implementeaza jocul hangman
class Game
{
public:
    // TODO: 07. sa se declare operatorul: void operator() (int incercari = 5)
    void operator() (int incercari = 5);
};

#endif // GAME_H
