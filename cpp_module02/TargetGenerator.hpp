
#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
#include <map>

using std::cout;
using std::endl;
using std::string;

class   ATarget;

class   TargetGenerator
{
    private:
        std::map<string, ATarget *> targets;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void    learnTargetType(ATarget *target);
        void    forgetTargetType(const string &name);
        ATarget *createTarget(const string &name);
};

#endif