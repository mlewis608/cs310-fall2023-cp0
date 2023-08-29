# Specifiy the target
all: movie

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
movie: Movie.o
	g++ Movie.o -o movie

# Specify how the object files should be created from source files
Movie.o: Movie.cpp
	g++ -c Movie.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o movie
