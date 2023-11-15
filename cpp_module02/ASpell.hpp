
#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;

class ATarget;

class ASpell
{
    private:
        string name;
        string effects;
    public:
        const string &getName(void) const;
        const string &getEffects(void) const;

        virtual ASpell *clone(void) const = 0;

        ASpell(const string &name, const string &effects);
        virtual ~ASpell();

        void    launch(const ATarget &target) const;
};


#endif