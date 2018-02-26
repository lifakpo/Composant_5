#include "CppUnitTest.h"
#include "..\Composant5\Bloc.h"
#include "..\Composant5\Composant5.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestComposant5
{
	TEST_CLASS(UnitTest1)
	{
	public:
		//Etant donné que nous n'avons pas encore toutes les information de la constitution d'un bloc/d'une transaction
		// nos test sont limités aux cas non passants et pouront etres ajournés une fois que les composants défnissant les informations nécessaires 
		//seront développés.
		TEST_METHOD(TestVerifyBloc)
		{
			// TODO: Your test code here
			Bloc b;
			CComposant5 c;
			Assert::IsFalse(c.verify_bloc(b));
		}

		TEST_METHOD(TestVerifyTransaction)
		{
			// TODO: Your test code here
			CComposant5 c = CComposant5();
			TXI tx = TXI();
			Assert::IsFalse(c.verify_transaction(tx));
		}

	};
}