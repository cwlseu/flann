INC := -I /home/limin/Repo/flann/src/cpp -I /soft/caffelib/include
LIB := -L /home/limin/Repo/flann/build/lib -L /soft/caffelib/lib -lflann  -lhdf5

all: flann_example_c flann_example_cpp

flann_example_c: flann_example_c.o
	g++ flann_example_c.o ${LIB} -o flann_example_c

flann_example_c.o:
	g++ -c flann_example.c  ${INC} -o $@

flann_example_cpp: flann_example.o
	g++ flann_example.o ${LIB} -o flann_example_cpp

flann_example.o:
	g++ -c flann_example.cpp ${INC} -o $@
clean:
	rm *.o
