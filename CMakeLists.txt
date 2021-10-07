cmake_minimum_required(VERSION 3.20)
project(agendaProject
        VERSION 0.1
        DESCRIPTION "Agenda compromissos"
        HOMEPAGE_URL "https://github.com/gustahlucas/agendaProject")

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(sources)
add_subdirectory(standalone)

