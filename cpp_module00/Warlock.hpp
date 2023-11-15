
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class   Warlock
{
    private:
        string name;
        string title;
    public:
        const string &getName(void) const;
        const string &getTitle(void) const;
        void    setTitle(const string &title);

        Warlock(const string &name, const string &title);
        ~Warlock();

        void    introduce(void) const;
};

#endif