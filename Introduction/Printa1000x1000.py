import time
import timeit

inicio = timeit.default_timer()

for i in range(1000):
    for a in range(1000):
        print ("Linux e foda.. A: %i I: %i"%(a,i))

final = timeit.default_timer()
print ("\n\nDuracao: %f Segundos"%(final-inicio))
