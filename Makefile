## CFLAGS = -I /home/lib2720/allegro5/include/ -Wall
## LIBDIR = /home/lib2720/allegro5/lib/
CFLAGS = -I /usr/include/allegro5 -std=c++0x
LIBDIR = /usr/lib
LNFLAGS = -lallegro -lallegro_primitives
OBJECTS = Display.o main.o Simulator.o ShapeSimulator.o Shape.o Triangle.o Square.o Circle.o
CC = g++

animate: $(OBJECTS)
	g++ -L $(LIBDIR) -o $@ $^ $(LNFLAGS) 

%.o : %.cc
	g++ $(CFLAGS) -c $< -o $@
	$(CC) $(CCFLAGS) -MM -MP -MT $@ $< > $(basename $@).d

.PHONY : clean
clean :
	rm -f *.o *~ *.d

## include the generated dependency files
-include $(addsuffix .d,$(basename $(OBJECTS)))
