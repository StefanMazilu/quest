#include <iostream>
#include "wordcollection.h"
#include "generator.h"

using namespace std;

WordCollection::WordCollection() :
    _words({
    "grizzly",
    "acordeon",
    "maracine",
    "canar",
    "camila",
    "margaritar",
    "girafa",
    "albatros",
    "pescarus",
    "papagal"
    })
{
}


int WordCollection::Size() const
{
    return SIZE;
}


string WordCollection::Select() const
{
    return _words[Generator::Instance().Next(SIZE)];
}


void WordCollection::Print() const
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << _words[i] << '\n';
    }

    cout << "apasati o tasta pentru a continua: ";
    cin.get();
}



// TODO: 02. sa se defineasca operatorul: string operator[] (int index) const
string WordCollection::operator[] (int index) const
{
    return _words[index];
}

// cod de testare in functia main:
/*
    WordCollection collection;
    string item0 = collection[0];
*/



