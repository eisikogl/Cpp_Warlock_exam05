
#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;

class   Dummy : public ATarget
{
    public:
        Dummy();
        ~Dummy();

        virtual ATarget *clone(void) const;
};

#endif