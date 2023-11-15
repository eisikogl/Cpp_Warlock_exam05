

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::cout;
using std::endl;
using std::string;

class   Fireball : public ASpell
{
    public:
        Fireball();
        ~Fireball();

        virtual ASpell *clone(void) const;
};

#endif