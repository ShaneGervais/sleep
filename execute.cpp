/**
 * Execution function
 * 
 * Here we try to be OS variable.
 * Check if were in windows or linux.
 * We need the <Windows.h>/<unistd.h>
 * for the sleep function at line 27.
 * 
 * This program was written on linux (ubuntu).
 * 
 * When we have a control for its number of 
 * iterations we sleep for the ith seconds in 
 * control and output the results.
 */

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
    //If we have a control
    if(control)
    {
        for(int i = 0; i < control->iterations; i++)
        {
            //Sleep for ith seconds in control
            sleep(control->seconds);

            //print
            std::cout << i
                      << " sleeping for "
                      << control->seconds
                      << " seconds "
                      << std::endl;
        }

    }//end if

}//end execute
