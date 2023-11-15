
#include "ATarget.hpp"

ATarget::ATarget(const string &type) : type(type) {}

ATarget::~ATarget() {}

const string &ATarget::getType(void) const { return this->type; }

void    ATarget::getHitBySpell(const ASpell &spell) const
{
    cout << this->type << " has been " << spell.getEffects() << "!" << endl;
}
