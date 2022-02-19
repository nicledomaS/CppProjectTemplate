#include "pugixml.hpp"
#include "zlib.h"

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
    
    int ret, flush;
    unsigned have;
    z_stream strm;
    unsigned char in[100];
    unsigned char out[100];

     /* allocate deflate state */
    strm.zalloc = Z_NULL;
    strm.zfree = Z_NULL;
    strm.opaque = Z_NULL;
    ret = deflateInit(&strm, 5);
    if (ret != Z_OK)
        return ret;

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