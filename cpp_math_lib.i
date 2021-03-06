%module cpp_lib

%include "std_string.i"
%include "std_map.i"

namespace std {
    %template(StringfloatMap) map<string, float>;
}

%{
#define SWIG_FILE_WITH_INIT
#include <map>
%}

extern float example_function(std::map<std::string, float> args);
