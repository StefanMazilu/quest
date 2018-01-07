#ifndef GENERATOR_H
#define GENERATOR_H


// clasa singleton care genereaza valori aleatorii
class Generator
{
    static Generator _gen;

    Generator();

    Generator(const Generator &src);

public:

    static Generator& Instance();

    int Next(int max = 100);
};

#endif // GENERATOR_H
