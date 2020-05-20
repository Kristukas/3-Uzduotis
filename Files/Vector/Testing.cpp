#include "acutest.h"
#include "v03.h"
void Testukas(void)
{
	TEST_CHECK_(countWords("testavimas pirmas") == 17, "countWords('testavimas pirmas')==17");
	TEST_CHECK_(countWords("banditas") ==8 , "countWords('banditas')==8");
	TEST_CHECK_(countWords("nusikaltelis") == 12, "countWords('nusikaltelis')==12");
}
TEST_LIST = { {"int countWords(string );", Testukas },{0} };