#ifndef WORD_H
#define WORD_H

#include <string>
using namespace std;


// clasa Word este folosita in hangman
// - are doua atribute:
//   _target care reprezinta cuvantul ce trebuie ghicit
//   _work  cuvantul care are aceeasi lungim ca si _target
//   este initializat cu primul si ultimul caracter din _target
//   celelalte caractere sunt inlocuite cu '-' si trebuiesc ghicite de jucator
class Word
{
    const string _target;
    string _work;
    int _contor = 0;

public:
    Word(const string &target, int contor = 0);

    // TODO: 04. sa se declare operatorul de conversie: operator bool() const
    operator bool() const;

    void Guess();

private:
    void Info() const;

    void Fill();
};

#endif // WORD_H
