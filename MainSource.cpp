#include "MainSource.h"
#include "CSPT.h"
#include "Windows.h"


std::string filename = "result.txt"; // default file name.

void CharSpammer::err()
{
	std::cout << "Invalid input." << std::endl;
	system("pause");
	system("cls");
	main();
}

void CharSpammer::Welcome(int time)
{
	std::cout << "======= WORD SPAMMER =======" << std::endl;
	std::cout << "\nWrite a SINGLE WORD to spam and select the amount of times.\n"
		"The file will be located in the current program directory\n"
		"named as " << filename << " (You can change this in the options)\n\n";

	if (time == first)
		std::cout << "(1)> Initialize the program\n(2)> Options\n\n$-";
	else if (time == other) {}
}

void CharSpammer::Procedure()
{
	std::cout << "\nInline the words? (Y/N) $-";

	char inlineall = _getch();
	std::cout << inlineall;

	output << "Key spammed " << amount << " times: " << spam;
	output << "\n\nRESULT --------------------------------------------\n\n";

	if (inlineall == 'n' || inlineall == 'N')
	{
		std::cout << "\n\nWorking on it..." << std::endl;
		for (int i = 0; i < amount; i++)
		{
			output << spam << "\n";
		}
	}
	else if (inlineall == 'Y' || inlineall == 'y')
	{
		std::cout << "\nSpace the keys? (Y/N) $-";
		char spaceall = _getch();

		std::cout << spaceall;

		if (spaceall == 'y' || spaceall == 'Y')
		{
			std::cout << "\n\nWorking on it..." << std::endl;
			for (int i = 0; i < amount; i++)
			{
				output << spam << " ";
			}
		}
		else if (spaceall == 'n' || spaceall == 'N')
		{
			std::cout << "\n\nWorking on it..." << std::endl;
			for (int i = 0; i < amount; i++)
			{
				output << spam;
			}
		}
		else
			err();
	}
	else
		err();

	output << "\n\nRESULT --------------------------------------------\n";
	std::cout << "\nDone! Go to the file location to see\nthe "
		"result in the file named " << filename << "\n\n";
	output.close();
}

void CharSpammer::fileOpen()
{
	output.open(filename);

	Welcome(other);
	std::cout << "Word / char to spam: ";
	std::getline(std::cin, spam);

	std::cout << "Amount of times: ";
	std::cin >> amount;

	if (amount > 0 && amount <= 99999)
		Procedure();
	else if (amount > 99999)
	{
		std::cout << "\nThe amount of spammed keys will be too much for "
			"the system to handle normally.\n"
			"The file will be too large and it may have some erros, do you really "
			"want that \nvalue to be the amount of spammed keys? (Y/N)\n\n$-";
		char accept = _getch();

		std::cout << accept << std::endl;

		if (accept == 'y' || accept == 'Y')
		{
			Procedure();
		}
		else if (accept == 'n' || accept == 'N')
		{
			system("cls");
			Initialize();
		}
		else
			err();
	}
	else
	{
		std::cout << "\nError, please restart the program.\n" << std::endl;
		system("pause");
		exit(1);
	}
}

void CharSpammer::Options()
{
	system("cls");
	std::cout << "======= OPTIONS ======= " << std::endl;

	// Responsable for language of the program
	class langselector
	{
	public:
		void ChooseLang()
		{
			std::cout << "\n\n(1)> English\n(2)> Portuguese\n\n$-";
			char lang = _getch();
			if (lang == '1')
			{
				std::cout << "Language saved!\n" << std::endl;
				system("pause");
				cs.Initialize();
			}
			else if (lang == '2')
			{
				std::cout << "Idioma salvo!\n" << std::endl;
				system("pause");
				cspt.Initialize();
			}
			else
			{
				std::cout << "Invalid input." << std::endl;
				system("pause");
				system("cls");
				cs.Initialize();
			}
		}
	private:
		CharSpammer cs;
		CSPT cspt;
	};

	// Responsable for the color of the program
	class colorselector
	{
	public:
		void ChooseFColor()
		{
			system("cls");
			std::cout << "====== Color Selector ====== \n\n";
			std::cout << "Input the value of the color that you want and it will change the program color: \n\n(Q)> Back to menu\n\n"
				"(0)> Black\n(1)> Blue\n(2)> Green\n(3)> Aqua\n(4)> Red\n(5)> Purple\n(6)> Yellow\n(7)> White\n(8)> Gray\n"
				"(9)> Light Blue\n(A)> Light Green\n(B)> Light Aqua\n(C)> Light Red\n(D)> Light Purple\n(E)> Light Yellow\n"
				"(F)> Bright White\n\n$-";

			char clr_s = _getch();
			switch (clr_s)
			{
				case '0':
					system("color 0");
					ChooseFColor();
					break;
				case '1':
					system("color 1");
					ChooseFColor();
					break;
				case '2':
					system("color 2");
					ChooseFColor();
					break;
				case '3':
					system("color 3");
					ChooseFColor();
					break;
				case '4':
					system("color 4");
					ChooseFColor();
					break;
				case '5':
					system("color 5");
					ChooseFColor();
					break;
				case '6':
					system("color 6");
					ChooseFColor();
					break;
				case '7':
					system("color 7");
					ChooseFColor();
					break;
				case '8':
					system("color 8");
					ChooseFColor();
					break;
				case '9':
					system("color 9");
					ChooseFColor();
					break;
				case 'a':
				case 'A':
					system("color a");
					ChooseFColor();
					break;
				case 'b':
				case 'B':
					system("color b");
					ChooseFColor();
					break;
				case 'c':
				case 'C':
					system("color c");
					ChooseFColor();
					break;
				case 'd':
				case 'D':
					system("color d");
					ChooseFColor();
					break;
				case 'e':
				case 'E':
					system("color e");
					ChooseFColor();
					break;
				case 'f':
				case 'F':
					system("color f");
					ChooseFColor();
					break;
				case 'q':
				case 'Q':
					cs.Initialize();
					break;
				default:
				{
					std::cerr << "Invalid input.\n\n";
					system("pause");
					system("cls");
					ChooseFColor();
				}
				break;
			}
		}

	private:
		CharSpammer cs;
	};

	// Responsable for changing the name of the file
	class filenamer
	{
	public:
		void NameFile()
		{
			std::cout << "Current file name: " << filename << std::endl;

			std::string newfilename;
			std::cout << "New file name (input a single Q to back to menu): ";
			std::getline(std::cin, newfilename);

			if (newfilename == "q" || newfilename == "Q")
			{
				cs.Initialize();
			}
			else if ((newfilename != "q" || newfilename != "Q") && newfilename.size() < 40 - 4)
			{

				if (!cs.endswithtxt(newfilename, ".txt"))
				{
					newfilename += ".txt";
				}
				filename.replace(filename.begin(), filename.end(), newfilename);

				std::cout << "\nName changed!\n" << std::endl;
				system("pause");
				cs.Initialize();
			}
			else
			{
				if (newfilename.size() > 40 - 4)
				{
					std::cerr << "\nThe name of the file is too long.\n" << std::endl;
					system("pause");
					system("cls");
					cs.Options();
				}
				else
				{
					std::cout << "Invalid input." << std::endl;
					system("pause");
					cs.Initialize();
				}
			}

		}

	private:
		CharSpammer cs;
	};

	std::cout << "\n(1)> Program Language\n(2)> Window Color\n(3)> File name\n\n(0)> Back to Menu\n\n$-";
	int selct = _getch();

	colorselector colors;
	langselector lang;
	filenamer fn;
	CharSpammer cs;

	switch (selct)
	{
		case '1':
			std::cout << "Change language";
			lang.ChooseLang();
			break;
		case '2':
			colors.ChooseFColor();
			break;
		case '3':
			std::cout << "Change file name\n\n";
			fn.NameFile();
			break;
		case '0':
			cs.Initialize();
			break;
		default:
			std::cout << "Invalid input." << std::endl; 
			system("pause");
			system("cls");
			Options();
			break;
	}
}

void CharSpammer::Initialize()
{
	CharSpammer cs;

	system("cls");
	Welcome(first);
	int selct = _getch();

	if (selct == '1')
	{
		system("cls");
		cs.fileOpen();
	}
	else if (selct == '2')
	{
		cs.Options();
	}
	else
	{
		std::cerr << "Invalid Input." << std::endl;
		system("pause");
		system("cls");
		main();
	}
}

int main()
{
	HWND console = GetConsoleWindow();
	RECT r;

	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, 720, 445, TRUE);

	system("color f");

	CharSpammer cs;
	cs.Initialize();

	system("pause");
	exit(1);

	return 0;
}