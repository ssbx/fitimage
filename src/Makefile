.PHONY: clean

OBJECTS = main.o

fitimage: $(OBJECTS)
	$(CXX) $(OBJECTS) $(LDFLAGS) -o fitimage

clean:
	$(RM) fitimage $(OBJECTS)

# cc -MM *.cpp
main.o: main.cpp
