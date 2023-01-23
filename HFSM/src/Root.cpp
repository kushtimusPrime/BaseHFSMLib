#include "Root.h"
#include "State.h"

Root::Root():start_time_(0) {
    
}

void Root::addStates(State* the_state) {
    this->states_.insert(std::pair<std::string,State*>(the_state->getName(),the_state));
}

double Root::getCurrentTime() {
    return double(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count());
}