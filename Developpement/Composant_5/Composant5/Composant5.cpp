// Composant5.cpp : Defines the exported functions for the DLL application.
//

#include "Composant5.h"


// This is an example of an exported variable
COMPOSANT5_API int nComposant5 = 0;

// This is an example of an exported function.
COMPOSANT5_API int fnComposant5(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Composant5.h for the class definition
COMPOSANT5_API CComposant5::CComposant5()
{
	return;
}
//méthode permettant de la vérification d'un bloc.
//elle retourne true si le bloc répond aux caractéristique définies de false dans le cas contraire.
COMPOSANT5_API bool CComposant5::verify_bloc(Bloc b) {
	return true;
}

//méthode permettant de la vérification d'une transaction.
//elle retourne true si la transactio répond aux caractéristique définies de false dans le cas contraire.
COMPOSANT5_API bool CComposant5::verify_transaction(TXI tx) {
	return true;
}

