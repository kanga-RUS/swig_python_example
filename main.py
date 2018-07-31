import matplotlib.pyplot as plt
import numpy as np
import cpp_lib as clib
from math import sqrt

g = 9.8

args = {'H': 100, 'rho2': 1000, 'tp': 30.345, 'uup': 58 / sqrt(g * 100), 'mup': 1.911 / g, 'rhoa': 1.2054, 'Sk': 300,
            'Sc': 4.5, 'alp': 1.22, 'blp': -0.212, 'q0p': 3.299e5 / (1000 * g)
            }


def plot_func(time):
    t = np.arange(0.0, time, 0.5)
    s = [clib.lift_force_landing(i, args) for i in t]
    # s = 1 + np.sin(2 * np.pi * t)
    plt.plot(t, s)

    plt.xlabel('time (s)')
    plt.ylabel('F_l (MH)')
    plt.title('Lift force')
    plt.grid(True)
    plt.show()

plot_func(50)