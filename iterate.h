#ifndef ITERATE_H
#define ITERATE_H

struct Control
{
    int iterations;
    int seconds;
};

//Parsing the command line
Control *initialize(int argc, char ** argv);

//Execute the iteration loop
void execute(Control *control);

//Clean up memory
void finalize(Control *control);

#endif