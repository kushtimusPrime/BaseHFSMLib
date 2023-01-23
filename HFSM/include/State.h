#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <map>

class Root;

class State {
    public:
        State();
        State(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root);
        virtual std::string execute();
        std::string getName();

    // Subclasses cannot access these variables unless they protected, not private 
    protected:
        Root* root_;
        std::string name_;
        std::map<std::string,std::string> state_transitions_;
};

#endif