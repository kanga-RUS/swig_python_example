#include <map>
#include <iostream>

float some_function(std::map<std::string, float> &args) {
    return args["some_argument"];
}
