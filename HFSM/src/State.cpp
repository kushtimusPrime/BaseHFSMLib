#include "State.h"
#include "Root.h"
State::State() {

}

State::State(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root): name_(name), state_transitions_(state_transitions),root_(root) {

}

std::string State::getName() {
    return this->name_;
}

std::string State::execute() {
    return "ERROR: YOU ARE IN THE BASE STATE";
}
