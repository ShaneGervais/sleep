//Main function

#include "iterate.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char ** argv)
{
    Control *control = initialize(argc, argv);
    execute(control);
    finalize(control);

    return EXIT_SUCCESS;
}