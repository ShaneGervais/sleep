#Our make file

CC = g++
#-g : adds debugging information to the executable
#-Wall : turn on most compiler warnings
CFLAG = -g -Wall -L. -lIterate

OBJ = initialize.o  execute.o finalize.o

iterate:iterate.o libIterate.a
	$(CC) -o $@ $< $(CFLAG)

libIterate.a:$(OBJ)
	ar rc $@ $?
	
clean:
	rm -f *.a *.o iterate

#Other ways of writing our makefile
#iterate: iterate.h initialize.cpp execute.cpp finalize.cpp iterate.cpp
#	g++ -o iterate iterate.h initialize.cpp execute.cpp finalize.cpp iterate.cpp -I.

#To create more .o files to be more efficient, ignores header file
#iterate: iterate.h initialize.o execute.o finalize.o iterate.o
#	$(C++) -o iterate iterate.h initialize.o execute.o finalize.o iterate.o



#%.o: %.cpp $(DEPS)
#	$(C++) -c -o $@ $< $(CFLAG)

#iterate: $(OBJ)
#	$(C++) -o $@ $^ $(CFLAG)
