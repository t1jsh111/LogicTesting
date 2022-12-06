project(AbstractProposition)

set(SOURCE_FILES
        src/PropositionVariable.cpp
        src/Proposition.cpp
        src/BinaryOperator.cpp
        src/Negation.cpp
        src/Conjunction.cpp
        src/Disjunction.cpp
        src/Implication.cpp
        )

set(HEADER_FILES
        inc/PropositionVariable.h
        inc/Proposition.h
        inc/Negation.h
        inc/Conjunction.h
        inc/Disjunction.h
        inc/Implication.h
        inc/BinaryOperator.h
        )


add_library(AbstractProposition ${SOURCE_FILES} ${HEADER_FILES})


target_include_directories(AbstractProposition PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
target_link_libraries(AbstractProposition gtest_main)


add_subdirectory(test)
