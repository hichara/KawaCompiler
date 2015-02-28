
#include "KawaUtilitary.h"




Twine *KawaUtilitary::appendTwine(const Twine &str1,  Twine *str2) {
	if(str1 == NULL && str2 == NULL)
		return new Twine("");

	if(str1 == NULL)
		return new Twine(str2->str());

	if(str2 == NULL)
		return new Twine(str1->str());

	std::string res;

	res = str1->str() + str2->str();
	return new Twine(res);
}


void KawaUtilitary::stopGenerationIR(string err) {

	std::cerr << err << "\n";

	exit(0);
}
