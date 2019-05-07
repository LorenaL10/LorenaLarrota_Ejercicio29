plot.png: cuerda.txt grafica.py
	python grafica.py

%.txt : a.out
	./a.out 

a.out: ecuacion.cpp
	g++ ecuacion.cpp
