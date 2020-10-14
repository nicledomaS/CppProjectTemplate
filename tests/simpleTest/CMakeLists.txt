include_directories(${GTEST_INCLUDE_DIRS})

executable_test(simpleTest 
            SOURCES ./
            MODULES gtest gtest_main)
