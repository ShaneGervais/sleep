//Execution function

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif


#include "iterate.h"
#include <iostream>
#include <cstdlib>

void execute(Control *control)
{
    if(control)
    {
        for(int i = 0; i < control->iterations; i++)
        {
            sleep(control->seconds);

            std::cout << i
                      << " sleeping for "
                      << control->seconds
                      << " seconds "
                      << std::endl;
        }
    }

}