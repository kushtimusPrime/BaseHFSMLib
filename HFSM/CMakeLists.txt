include_directories(include)

add_library(HFSM
        src/Root.cpp
        src/State.cpp
        src/State_A.cpp
        src/State_B.cpp
        )

target_link_libraries(HFSM)
target_include_directories(HFSM PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)