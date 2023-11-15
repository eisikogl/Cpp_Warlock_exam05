
#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

using std::cout;
using std::endl;
using std::string;

class   BrickWall : public ATarget
{
    public:
        BrickWall();
        ~BrickWall();

        virtual ATarget *clone(void) const;
};

#endif