#include <iostream>
#include "constants.h"
#include "exception.h"

Exception::Exception() { }
Exception::~Exception() { }

void Exception::parse_error(const char* msg) {
    std::cout << "Parser Error : " << msg << std::endl;
    EXIT
}

void Exception::range_error(const char* kwd, const char* msg) {
    std::cout << "Range Error : " << kwd << msg << std::endl;
    EXIT
}