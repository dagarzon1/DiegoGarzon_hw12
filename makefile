advection.pdf:advection.txt
	python DG_graph.py
	rm advection.txt
advection.txt:advection.x
	./advection.x > advection.txt
	rm advection.x
advection.x:
	c++ DG_advection.cpp -o advection.x
clean:
	rm *.pdf
