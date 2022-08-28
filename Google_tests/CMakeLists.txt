project(Google_tests)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_library(BEANS_TEST STATIC beans/InvalidationListenerMock.cpp beans/InvalidationListenerMock.hpp beans/WeakInvalidationListenerMock.cpp beans/WeakInvalidationListenerMock.hpp)

add_executable(Google_Tests_run beans/WeakInvalidationListenerTest.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main EXCEPTIONS WRAPPING BEANS BEANS_VALUE BEANS_TEST)