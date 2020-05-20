#include "acutest.h"
#include "v03.h"
void Testukas(void)
{
	TEST_CHECK_(countWords("testavimas pirmas") == 2, "countWords('testavimas pirmas')==2");
	TEST_CHECK_(countWords("banditas") ==1 , "countWords('banditas')==1");
	TEST_CHECK_(countWords("") == 0, "countWords('')==0");
}
TEST_LIST = { {"int countWords(string );", Testukas },{0} };
