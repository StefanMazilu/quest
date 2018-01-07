#include <cstdlib>
#include <iostream>
#include "word.h"

using namespace std;


#if defined(_WIN32) || defined(_WIN64)
	#define CLS()  system("cls")
#else
	#define CLS() system("clear")
#endif


Word::Word(const string &target, int contor) :
    _target(target),
    _work(target),
    _contor(contor)
{
    int len = _work.size() - 2;
    _work.replace(1,len,len, '-');
}


void Word::Info() const
{
    CLS();

    cout << "incercari ramase: " << _contor << '\n';
    cout << _work << '\n';
}


void Word::Guess()
{
    Info();
    Fill();
}


void Word::Fill()
{
    char litera;
    cout << "Introduceti o litera: ";
    cin >> litera;

    size_t pos = _target.find(litera);

    // litera nu a fost ghicita
    if(pos == string::npos)
    {
        _contor--; // se decrementeaza contorul de incercari
        return;
    }

    // se copiaza litera in work
    for(; pos != string::npos; pos = _target.find(litera, pos + 1))
    {
        _work[pos] = litera;
    }
}



// TODO: 05. sa se defineasca operatorul: operator bool() const
// - daca _target == _work
//     se afiseaza pe ecran sirul _work si se muta cursorul pe linia urmatoare
//     se afiseaza pe ecran mesajul: "Ati castigat :)\n"
//     se returneaza false
//
// - daca 0 == _contor
//     se afiseaza pe ecran mesajul: "Ati pierdut :(\n"
//     se afiseaza pe ecram mesajul: "Cuvantul era: " urmat de valoarea lui _target
//     si se muta cursorul pe linia urmatoare
//     se returneaza false
//
//  - se returneaza true
Word::operator bool() const
{
    if(_target == _work)
    {
        cout<< _work << '\n';
        cout<< "Ati castigat :)\n";
        return false;
    }

    if(0 == _contor)
    {
        cout<< "Ati pierdut :(\n";
        cout<< "Cuvantul era: " << _target << '\n';
        return false;
    }

    return true;
}

// cod de testare in functia main:
/*
    Word wt1 = {"m--e"};
    bool b1 = wt1; // false + mesaj de castig

    Word wt2 = {"mere"};
    bool b2 = wt2; // false + mesaj pierdere

    Word wt3 = {"mere", 5};
    bool b3 = wt3; // true fara mesaje
*/
