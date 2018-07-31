#include <map>
#include <cmath>
#include <iostream>

float g = 9.8;


// Скорость движения нагрузки при посадке
float speed_landing(float time, std::map<std::string, float> &args) {
	if (time < args["tp"] / sqrt(args["H"] / g)) {
		return args["uup"] - args["mup"] * time;
	} else return 0;
}


// Подъемная сила крыла при посадке
float lift_force_landing(float time, std::map<std::string, float> &args) {
    return args["q0p"] - (args["rhoa"] * args["Sk"] * pow(speed_landing(time, args), 2) * args["alp"] *
        exp(args["blp"] * time * sqrt(args["H"] / g)) * g * args["H"]) / (args["rho2"] * g * args["Sc"]);
}
