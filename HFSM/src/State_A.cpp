#include "State_A.h"
#include "Root.h"

State_A::State_A(): State() {

}

State_A::State_A(std::string &name,std::map<std::string,std::string> &state_transitions,Root* root): State(name,state_transitions,root) {

}

std::string State_A::execute() {
    std::cout << "Started State A" << std::endl;
    while(true) {
        auto current_time = this->root_->getCurrentTime();
        if(current_time - this->root_->start_time_ > 20000) {
            std::cout << "About to End" << std::endl;
            return "end_state";
        } else if(current_time - this->root_->start_time_ > 10000 && current_time - this->root_->start_time_ < 10010) {
            std::cout << "About to Start State B" << std::endl;
            return "state_b";
        }
    }
}