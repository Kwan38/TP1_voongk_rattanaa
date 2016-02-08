PROG = main
OBJS = Dvector.o
CXX = g++
CXXFLAGS = -Wall -Wextra -g

.PHONY : all clean

all : $(PROG)

$(PROG) : $(OBJS) $(PROG).o
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $@.o

%.o : %cpp %h
	$(CXX) $(CXXFLAGS) -c $<

clean : 
	-rm -f *.o $(PROG)
