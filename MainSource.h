#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <sstream>

int main();
enum time { first, other };

class CharSpammer
{
public :
	void Procedure();
	void fileOpen();
	void err();
	void Initialize();
	void Options();
	void Welcome(int time);


public:
	bool endswithtxt(std::string const& str, std::string const& suffix)
	{
		if (str.size() < suffix.size()) return false;

		return 0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix, 0, suffix.size());
	}

private:

	std::ofstream output;
	std::string spam;
	int amount;

};