#include <iostream>
#include "Root.h"
#include "State.h"
#include "State_A.h"
#include "State_B.h"
#include <map>
int main() {
    Root root;

    //State Definitions and Declarations

    //State A
    std::string a_name = "state_a";
    std::map<std::string,std::string> a_transitions;
    a_transitions.insert(std::pair<std::string,std::string>("time_10","state_b"));
    a_transitions.insert(std::pair<std::string,std::string>("time_20","end_state"));
    State_A a(a_name,a_transitions,&root);
   

    //State B
    std::string b_name = "state_b";
    std::map<std::string,std::string> b_transitions;
    b_transitions.insert(std::pair<std::string,std::string>("time_15","state_a"));
    State_B b(b_name,b_transitions,&root);

    
    //Add States to Machine
    root.addStates(&a);
    root.addStates(&b);
    State* current_state = &a;

    root.start_time_ = root.getCurrentTime();
    std::cout << "Start machine" << std::endl;
    std::string next_state_str = current_state->execute();
    std::cout << "Next state: " << next_state_str << std::endl;
    while(next_state_str != "end_state") {
        current_state = root.states_[next_state_str];
        next_state_str = current_state->execute();
        std::cout << "Next state: " << next_state_str << std::endl;
    }

    std::cout << "State Machine Completed" << std::endl;

    return 0;
}