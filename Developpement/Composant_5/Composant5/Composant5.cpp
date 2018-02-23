// Composant5.cpp : Defines the exported functions for the DLL application.
//

#include "Composant5.h"


// This is an example of an exported variable
COMPOSANT5_API int nComposant5=0;

// This is an example of an exported function.
COMPOSANT5_API int fnComposant5(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Composant5.h for the class definition
CComposant5::CComposant5()
{
    return;
}
