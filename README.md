# BaseHFSMLib

This is a library capable of implementing a very basic state machine. The way it works is that you have a series of states (which are represented as individual subclasses of the main state class). Then, you have a Root object that has a list of all of the states along with containing all of the state machine variables. Because of the way the includes are setup, each state can also access all of the state machine variables from the root.

Then, you can simply define your state machine as seen in the MainDriver folder. The current main.cpp will run the basic state machine shown in the below diagram. Essentially, you start in State A. Then after 10 seconds, you go to State B. Then after 15 seconds, you go back to State A. Then after 20 seconds, you exit the state machine.

[<img src="images/basic_state_machine.jpg" width="250" height="250"/>](basic_state_machine.jpg)

## Compiling and Running ##

```
mkdir build
cd build
cmake ..
make
cd MainDriver
./primeProject
```

## Adding a new State ##
Since each state is going to be formatted the same, a Python script called writestate.py can be used to automatically generate this boilerplate and add it to the CMakeLists.txt. Go into the main directory and run the following
```
python writestate.py -n <STATE_NAME>
```
