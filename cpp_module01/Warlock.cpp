
#include "Warlock.hpp"

Warlock::Warlock(const string &name, const string &title)
{
    this->name = name;
    this->title = title;
    cout << this->name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
    cout << this->name << ": My job here is done!" << endl;
}

const string &Warlock::getName(void) const { return this->name; }

const string &Warlock::getTitle(void) const { return this->title; }

void    Warlock::setTitle(const string &title) { this->title = title; }

void    Warlock::introduce(void) const
{
    cout << this->name << ": I am " << this->name << ", " << this->title << "!" << endl;
}

void    Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        this->spells[spell->getName()] = spell;
}

void    Warlock::forgetSpell(const string name)
{
    std::map<string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end())
        this->spells.erase(it);
}

void    Warlock::launchSpell(const string name, const ATarget &target)
{
    std::map<string, ASpell *>::iterator it = this->spells.find(name);
    if (it != this->spells.end())
        it->second->launch(target);
}