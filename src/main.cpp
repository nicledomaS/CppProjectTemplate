#include "pugixml.hpp"

#include <gsl/gsl>

#include <chrono>
#include <thread>
#include <iostream>

void print(gsl::not_null<int*> value);

int main (int argc, char** argv)
{
    std::cout << "Start program" << std::endl;

    pugi::xml_document doc;

    int* first = new int(5);
    int* second = nullptr;
    

    while(true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        print(first);
        print(second);
    }

    delete first;

    return 0;
}

void print(gsl::not_null<int*> value)
{
    std::cout << *value << std::endl;
}