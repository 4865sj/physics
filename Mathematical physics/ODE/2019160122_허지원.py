from numpy import linspace
from scipy.integrate import odeint
import matplotlib.pyplot as plt

m = float(input('Mass = '))
gamma = float(input('Drag coefficient = '))
q = float(input('Charge = '))

def boas(state, t, gamma, m, q):
    x, x_dot = state
    f = [x_dot, -gamma*x_dot - q*x/(m*(x**2 + 1)**(1.5))]
    return f

x_1 = float(input('Initial positon = '))
xdot_1 = float(input('Initial velocity = '))

cond = [x_1, xdot_1]

t_1 = float(input('Final t = '))
t_i = float(input('time inteval = '))

num_data = int(t_1/t_i)
t = linspace(0, t_1, num_data)
sol = odeint(boas, cond, t, args=(gamma, m, q))

plt.plot(t, sol[:, 0], 'b', label = 'x(t)')
plt.legend(loc='best')
plt.xlabel('t')
plt.ylabel('x')
plt.grid()
plt.show()