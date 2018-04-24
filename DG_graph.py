import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("advection.txt")
l1=0
l2=700/5 * 1
l3=700/5 * 2
l4=700/5 * 3
l5=700/5 * 4
plt.plot(data[:,0], data[:,1], label="t=0 s")
plt.plot(data[:,0], data[:,2], label="t=140 s")
plt.plot(data[:,0], data[:,3], label="t=280 s")
plt.plot(data[:,0], data[:,4], label="t=420 s")
plt.plot(data[:,0], data[:,5], label="t=560 s")
plt.legend()
plt.savefig("advection.pdf")
