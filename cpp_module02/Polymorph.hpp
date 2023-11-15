
#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::cout;
using std::endl;
using std::string;

class   Polymorph : public ASpell
{
    public:
        Polymorph();
        ~Polymorph();

        virtual ASpell *clone(void) const;
};

#endif