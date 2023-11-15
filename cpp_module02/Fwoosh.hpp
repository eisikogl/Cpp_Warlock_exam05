
#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::cout;
using std::endl;
using std::string;

class   Fwoosh : public ASpell
{
    public:
        Fwoosh();
        ~Fwoosh();

        virtual ASpell *clone(void) const;
};

#endif