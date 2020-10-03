include_directories(${GTEST_INCLUDE_DIRS})

executable(simpleTest 
            SOURCES ./
            MODULES gtest gtest_main)

add_test(AllTests simpleTest)
