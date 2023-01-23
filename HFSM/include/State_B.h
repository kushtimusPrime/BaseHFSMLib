#ifndef STATE_B_H
#define STATE_B_H

#include <iostream>
#include <map>
#include "State.h"

class Root;
class State_B : public State {
    public:
        State_B();
        State_B(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root);
        std::string execute() override;
    private:
};
#endif