#include "CppUnitTest.h"
#include "..\Composant5\Bloc.h"
#include "..\Composant5\Composant5.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestComposant5
{
	TEST_CLASS(UnitTest1)
	{
	public:
		//Etant donn� que nous n'avons pas encore toutes les information de la constitution d'un bloc/d'une transaction
		// nos test sont limit�s aux cas non passants et pouront etres ajourn�s une fois que les composants d�fnissant les informations n�cessaires 
		//seront d�velopp�s.
		TEST_METHOD(TestVerifyBloc)
		{
			// TODO: Your test code here
			Bloc b;
			CComposant5 c;
			std::string hashBlocInit = "dfgsdfgdfsgdfsgsdfgshykjukjh";
			char hashBloc[HASH_SIZE];
			strncpy_s(hashBloc, HASH_SIZE, hashBlocInit.c_str(), HASH_SIZE);
			Assert::IsFalse(c.verify_bloc(b,hashBloc,0));
		}

		TEST_METHOD(TestVerifyTransaction)
		{
			// TODO: Your test code here
			CComposant5 c;
			TXI tx = TXI();
			Assert::IsFalse(c.verify_transaction(tx));
		}

	};
}