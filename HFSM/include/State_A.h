#ifndef STATE_A_H
#define STATE_A_H

#include <iostream>
#include <map>
#include "State.h"

class Root;
class State_A : public State {
    public:
        State_A();
        State_A(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root);
        std::string execute() override;
    private:
};
#endif