import numpy as np
import matplotlib.pyplot as plt
#Toma de datos
data=np.loadtxt("advection.txt")

#Grafica de datos
plt.plot(data[:,0], data[:,1], label="t=0 s")
plt.plot(data[:,0], data[:,2], label="t=140 s")
plt.plot(data[:,0], data[:,3], label="t=280 s")
plt.plot(data[:,0], data[:,4], label="t=420 s")
plt.plot(data[:,0], data[:,5], label="t=560 s")

#Manejo de detalles del grafico
plt.xlabel("Position")
plt.ylabel("U(x,t)")
plt.title("Advection")
plt.legend()

#Guardar la grafica
plt.savefig("advection.pdf")
