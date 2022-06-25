/**
 * Initializing input data
 * This function initializes our control objects number 
 * of iterations and seconds.
 * 
 * It accepts input from terminal
*/

#include <iostream>
#include "iterate.h"
#include <sstream> //for istringstream

//Program will accept 3 inputs
#define VALID 3

Control *initialize(int argc, char ** argv)
{
    //setting a control address to null
    Control *control = NULL;

    //If input amount is not valid    
    if(argc != VALID)
    {
        cerr << "Usage: " << argv[0] << " iterations seconds " << endl; 

        exit(0);//terminate prog
    }

    else
    {
        //Initialize a new control
        control = new Control;
        control ->iterations=0;
        control ->seconds=0;


        //Storing in control
        {
            //First argument goes into seconds
            istringstream stream(argv[1]);
            
            if(!(stream >> control->iterations)) return control;
        }
        {
            //Second argument goes into iterations
            istringstream stream(argv[2]);

            if(!(stream >> control->seconds)) return control; //fix
        }

    }//end else

    //return our created control
    return control;

}//end initialize
