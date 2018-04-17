#pragma once
#include "hash.h"
Signature{
	public String signatureStr;// taille 64 hexadecimal (0_F)
public : 
	Signature();
	//ds dll creer la paire de cl� grace aux deux fonctions
	//penser a stocker la cle publique et priv� dans un fichier 
	//la cl� publique peut etre donn�e a tous 
	String createPublicKey();
	String createPrivateKey(String public_key);

	//appeler le hasheur
	//crypter avec la cl� priv�
	//donner la cl� publique sur le canal
	
	//signe message avec la cl� priv�e les donn�es hash : data => hash => hash crypt� 
	//appeler hash dans la fonction
	Signature signMessage(String data, String private_key);
	//signature , on compare avec la signature en entr�e
	//appeler la fonction verifie ECDSA 
	boolean validateSignature(String data, String public_key,String signature);

}
