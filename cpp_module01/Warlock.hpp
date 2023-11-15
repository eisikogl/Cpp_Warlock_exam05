
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

using std::cout;
using std::endl;
using std::string;

class   ASpell;

class   Warlock
{
    private:
        string name;
        string title;

        std::map<string, ASpell *> spells;
    public:
        const string &getName(void) const;
        const string &getTitle(void) const;
        void    setTitle(const string &title);

        Warlock(const string &name, const string &title);
        ~Warlock();

        void    introduce(void) const;

        void    learnSpell(ASpell *spell);
        void    forgetSpell(const string name);
        void    launchSpell(const string name, const ATarget &target);
};

#endif