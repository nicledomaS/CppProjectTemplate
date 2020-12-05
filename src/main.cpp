#include "pugixml.hpp"

#include <chrono>
#include <thread>
#include <iostream>

int main (int argc, char** argv)
{
    std::cout << "Start program" << std::endl;

    pugi::xml_document doc;

    while(true)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        
    }

    return 0;
}