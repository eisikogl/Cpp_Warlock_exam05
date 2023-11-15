#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::cout;
using std::endl;
using std::string;

class ASpell;

class ATarget
{
    private:
        string type;
    public:
        const string &getType(void) const;

        virtual ATarget *clone(void) const = 0;

        ATarget(const string &target);
        virtual ~ATarget();

        void    getHitBySpell(const ASpell &spell) const;
};

#endif