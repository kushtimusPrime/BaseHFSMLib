#include "State_B.h"
#include "Root.h"

State_B::State_B(): State() {

}

State_B::State_B(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root): State(name,state_transitions,root) {

}

std::string State_B::execute() {
    std::cout << "Start State B" << std::endl;
    while(true) {
        auto current_time = this->root_->getCurrentTime();
        if(current_time - this->root_->start_time_ > 15000) {
            std::cout << "About to go to State A" << std::endl;
            return "state_a";
        }
    }
}