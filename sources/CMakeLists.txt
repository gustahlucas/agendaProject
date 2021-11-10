add_library(agenda
        agenda/agenda.h
        agenda/agenda.cpp
        ../tests/unit_tests/ut_agenda.cpp)
target_include_directories(agenda PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})