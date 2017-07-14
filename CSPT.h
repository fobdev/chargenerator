#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>


class CSPT
{

public:
	void err();
	void Procedure();
	void largeProcess();
	void fileOpen();
	void Options();
	void Initialize();
	void Welcome(int time);

public:
	enum time { primeiro, outro };

private:
	std::ofstream output;
	std::string spam;
	int amount;
};