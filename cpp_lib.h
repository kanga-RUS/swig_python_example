#ifndef CPP_LIB_H
#define CPP_LIB_H

#include <map>

extern float speed_landing(float time, std::map<std::string, float> &args);
extern float lift_force_landing(float time, std::map<std::string, float> &args);
#endif //CPP_LIB_H
