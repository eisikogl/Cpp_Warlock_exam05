

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void    SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        this->spells[spell->getName()] = spell;
}

void    SpellBook::forgetSpell(const string &name)
{
    std::map<string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end())
        this->spells.erase(it);
}

ASpell  *SpellBook::createSpell(const string &name)
{
    std::map<string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end())
        return it->second;
    return nullptr;
}
