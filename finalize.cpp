//Cleaning  memory

#include <iostream>
#include "iterate.h"

void finalize(Control *control)
{
    delete control;
}