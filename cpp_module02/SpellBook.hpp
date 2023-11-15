
#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class ASpell;

class   SpellBook
{
    private:
        std::map<string, ASpell *> spells;
    public:
        SpellBook();
        ~SpellBook();

        void    learnSpell(ASpell *spell);
        void    forgetSpell(const string &name);
        ASpell  *createSpell(const string &name);
};

#endif