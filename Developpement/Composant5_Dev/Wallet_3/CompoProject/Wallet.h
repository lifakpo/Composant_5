#pragma once
#include <vector>
#include <iostream>
#include <time.h>
#include <string>
#include <sstream>

#include "Bloc.h"
#include "json.hpp"
#include "Signature.h"
#include "Hacheur.h"
#include "Composant5.h"
#include "FileInterface.h"
#include "Mineur.h"


using json = nlohmann::json;

using namespace std;

class Wallet {

public:
	FileInterface bc_file;
	CComposant5 verificateur;
	std::string filePath;
	Mineur mineur;
	vector <std::string> publicKeys;
	vector <std::string> privateKeys;
	Signature signature;
	Hacheur hasheur;

	Wallet(std::string pathFile);
	vector<Bloc> blocs;
	int solde(std::string publicKey);
	std::string solde();
	void depenser(std::string publicDestinatire, std::string publicEmetteur, int montant);

};