
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
    this->spellBook.learnSpell(spell);
}

void    Warlock::forgetSpell(const string name)
{
    this->spellBook.forgetSpell(name);
}

void    Warlock::launchSpell(const string name, const ATarget &target)
{
    ASpell *spell = this->spellBook.createSpell(name);
    if (spell)
        spell->launch(target);
}