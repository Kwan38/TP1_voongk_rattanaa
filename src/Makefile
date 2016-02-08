TESTS = test_constructeur_parametre.t testConstructorCopy.t test_constructor_defaut.t test_fillRandomly.t test_lecture_fichier.t
OBJS = Dvector.o
CXX = g++
CXXFLAGS = -Wall -Wextra -g


.PHONY : all clean

all : $(TESTS)

%.o : %cpp %h
	$(CXX) $(CXXFLAGS) -c $<

%.t : %.o $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $<

clean : 
	-rm -f *.o $(TESTS)
