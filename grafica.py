import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("cuerda.txt")
n_points = int(np.sqrt(len(data)))
grid = np.reshape(data, (n_points, n_points))
print(n_points)


plt.figure()
plt.imshow(grid)
plt.xlabel("X")
plt.ylabel("tiempo")
plt.colorbar(label="Desplazamiento")
plt.savefig("plot.png")
