if (AGENDA_BUILD_UNIT_TESTS)
    add_subdirectory(unit_tests)
endif ()
if (AGENDA_BUILD_BENCHMARKS)
    add_subdirectory(benchmark)
endif ()

add_subdirectory(scratch)