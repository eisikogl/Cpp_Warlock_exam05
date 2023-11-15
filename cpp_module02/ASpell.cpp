
#include "ASpell.hpp"

ASpell::ASpell(const string &name, const string &effects) : name(name), effects(effects) {}

ASpell::~ASpell() {}

const string &ASpell::getName(void) const { return this->name; }

const string &ASpell::getEffects(void) const { return this->effects; }

void    ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}