


class KawaUtilitary {
public:
	static Twine *append(const Twine *str1, const Twine *str2);
};


Twine *KawaUtilitary::appendTwine(const Twine &str1,  Twine *str2) {
	if(str1 == NULL && str2 == NULL)
		return new Twine("");

	if(str1 == NULL)
		return new Twine(str2->toStr());

	if(str2 == NULL)
		return new Twine(str1->toStr());

	return new Twine(str1->toStr() + str1->toStr());
}
