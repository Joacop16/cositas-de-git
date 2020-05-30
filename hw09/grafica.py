import matplotlib.pyplot as plt;
import numpy as np

data = np.loadtxt("datos.txt")
plt.plot(data[:,0],data[:,1])
plt.xlabel("Tiempo (s)")
plt.ylabel("Altura (m)")
plt.title("Trayectoria")
plt.savefig('Trayectoria.pdf')
