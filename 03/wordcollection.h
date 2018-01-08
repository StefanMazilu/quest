#ifndef WORDCOLLECTION_H
#define WORDCOLLECTION_H

#include <string>
using std::string;

// NOTA:
// - clasa WordCollection contine lista de cuvinte pentru joc
// - permite selectarea aleatoare a unui cuvant din lista
class WordCollection
{
    static const int SIZE = 10;
    string _words[SIZE];

public:
    WordCollection();

    int Size() const;

    // metoda de selectie aleatoare a unui cuvant
    string Select() const;

    // afiseaza lista de cuvinte
    void Print() const;

    // TODO: 01. sa se declare operatorul de indexare: string operator[] (int index) const
    string operator[] (int index) const;
};

#endif // WORDCOLLECTION_H
