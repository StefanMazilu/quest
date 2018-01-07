#include <cstdlib>
#include <ctime>
#include "generator.h"


Generator::Generator()
{
    srand(time(0));
}

Generator Generator::_gen;



Generator& Generator::Instance()
{
    return _gen;
}


int Generator::Next(int max)
{
    return rand() % max + 1;
}



