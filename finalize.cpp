/**
 * Finalize is a function that clean up
 * memory in our control that was created.
 */
#include <iostream>
#include "iterate.h"

void finalize(Control *control)
{
    delete control;
}
