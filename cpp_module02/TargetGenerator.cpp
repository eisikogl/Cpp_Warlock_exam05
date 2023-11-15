#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void    TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        this->targets[target->getType()] = target;
}

void    TargetGenerator::forgetTargetType(const string &name)
{
    std::map<string, ATarget *>::iterator it = this->targets.find(name);
    if (it != this->targets.end())
        this->targets.erase(it);
}

ATarget *TargetGenerator::createTarget(const string &name)
{
    std::map<string, ATarget *>::iterator it = this->targets.find(name);
    if (it != this->targets.end())
        return it->second;
    return nullptr;
}