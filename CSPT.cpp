#include "CSPT.h"
#include "MainSource.h"

std::string ptfilename = "resultado.txt";
void CSPT::Welcome(int time)
{
	system("color f");
	std::cout << "======= WORD SPAMMER =======" << std::endl;
	std::cout << "\nEscreva uma UNICA PALAVRA ou CARACTERE para spammar e depois escolha a quantidade de vezes.\n"
		"O arquivo estara localizado no diretorio atual do programa \n"
		"com o nome padrao de "<< ptfilename <<" (Voce pode alterar isto nas opcoes).\n\n";

	if (time == primeiro)
		std::cout << "(1)> Inicializar programa\n(2)> Opcoes\n\n$-";
	else if (time == outro) {}
}


void CSPT::err()
{
	std::cout << "Entrada Invalida." << std::endl;
	system("pause");
	system("cls");
	// main();
}

void CSPT::Procedure()
{
	std::cout << "\nAlinhar? (Y/N) $-";

	char inlineall = _getch();
	std::cout << inlineall;

	output << "Palavra / Caractere spammado " << amount << " vezes: " << spam;
	output << "\n\nRESULTADO --------------------------------------------\n\n";

	if (inlineall == 'n' || inlineall == 'N')
	{
		std::cout << "\n\nTrabalhando..." << std::endl;
		for (int i = 0; i < amount; i++)
		{
			output << spam << "\n";
		}
	}
	else if (inlineall == 'Y' || inlineall == 'y')
	{
		std::cout << "\nEspacar os caracteres / palavras? (Y/N) $-";
		char spaceall = _getch();

		std::cout << spaceall;

		if (spaceall == 'y' || spaceall == 'Y')
		{
			std::cout << "\n\nTrabalhando..." << std::endl;
			for (int i = 0; i < amount; i++)
			{
				output << spam << " ";
			}
		}
		else if (spaceall == 'n' || spaceall == 'N')
		{
			std::cout << "\n\nTrabalhando..." << std::endl;
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

	output << "\nRESULTADO --------------------------------------------\n";
	std::cout << "\nPronto! Va para o diretorio do programa para \nthe "
	 	"ver o resultado no arquivo chamado " << ptfilename << "\n\n";
	 output.close();
}

void CSPT::largeProcess()
{


}

void CSPT::fileOpen()
{
	output.open(ptfilename);

	Welcome(outro);
	std::cout << "Palavra / caractere para spammar: ";
	std::cin >> spam;

	std::cout << "Quantidade de vezes: ";
	std::cin >> amount;

	if (amount > 0 && amount <= 99999)
		Procedure();
	else if (amount > 99999)
	{
		std::cout << "\nA quantidade de letras spammadas sera muito para o sistema "
			"lidar normalmente.\n"
			"O arquivo sera grande demais e talvez possa ocorrer erros, voce realmente "
			"quer\nesta quantidade de letras spammadas? (Y/N)\n\n$-";
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
		std::cout << "\nErro, favor reiniciar o programa.\n" << std::endl;
		system("pause");
		exit(1);
	}
}

void CSPT::Options()
{
	// Options Menu
	system("cls");
	std::cout << "======= OPCOES ======= " << std::endl;

	class langselector
	{
	public:
		void ChooseLang()
		{
			std::cout << "Escolha de idioma -------------\n\n"
				"(1)> Ingles\n(2)> Portugues\n\n$-";
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
				std::cout << "Entrada Invalida." << std::endl;
				system("pause");
				system("cls");
				cspt.Initialize();
			}
		}
	private:
		CSPT cspt;
		CharSpammer cs;
	};

	class colorselector
	{
	public:
		void ChooseFColor()
		{
			system("cls");
			std::cout << "====== Selecionar Cor ====== \n\n";
			std::cout << "Escolha a cor que voce quer e os caracteres do programa serao mudados: \n\n(Q)> Voltar ao menu\n\n"
				"(0)> Preto\n(1)> Azul\n(2)> Verde\n(3)> Azul Agua\n(4)> Vermelho\n(5)> Roxo\n(6)> Amarelo\n(7)> Branco\n(8)> Cinza\n"
				"(9)> Azul Claro\n(A)> Verde Claro\n(B)> Azul Agua Claro\n(C)> Vermelho Claro\n(D)> Roxo Claro\n(E)> Amarelo Claro\n"
				"(F)> Branco Brilhante\n\n$-";

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
					cspt.Initialize();
					break;
				default:
				{
					std::cerr << "Entrada invalida.\n\n";
					system("pause");
					system("cls");
					ChooseFColor();
				}
				break;
			}
		}

	private:
		CSPT cspt;
	};

	class filenamer
	{
	public:
		void NameFile()
		{
			std::cout << "Nome atual do arquivo: " << ptfilename << std::endl;

			std::string newfilename;
			std::cout << "Novo nome (escreva um unico Q para voltar ao menu): ";
			std::cin >> newfilename;

			if (newfilename == "q" || newfilename == "Q")
			{
				cspt.Initialize();
			}
			else if (newfilename != "q" || newfilename != "Q")
			{

				if (!cs.endswithtxt(newfilename, ".txt"))
				{
					newfilename += ".txt";
				}
				ptfilename.replace(ptfilename.begin(), ptfilename.end(), newfilename);

				std::cout << "\nNome alterado!\n" << std::endl;
				system("pause");
				cspt.Initialize();
			}
			else
			{
				std::cout << "Entrada Invalida." << std::endl;
				system("pause");
				cspt.Initialize();
			}

		}

	private:
		CharSpammer cs;
		CSPT cspt;
	};


	std::cout << "\n(1)> Idioma do programa\n(2)> Cor das letras\n(3)> Nome do arquivo\n\n(0)> Voltar ao menu inicial\n\n$-";
	int selct = _getch();

	langselector lang;
	colorselector colorsel;
	filenamer fnamer;
	switch (selct)
	{
		case '1':
			lang.ChooseLang();
			break;
		case '2':
			colorsel.ChooseFColor();
			break;
		case '3':
			fnamer.NameFile();
			break;
		case '0':
			Initialize();
			break;
		default:
			std::cout << "Entrada Invalida.";
			system("pause");
			system("cls");
			Options();
			break;
	}
}

void CSPT::Initialize()
{
	system("cls");
	CSPT cspt;
	Welcome(primeiro);
	int selct = _getch();

	if (selct == '1')
	{
		system("cls");
		cspt.fileOpen();
	}
	else if (selct == '2')
	{
		cspt.Options();
	}
	else
	{
		std::cerr << "Entrada invalida." << std::endl;
		system("pause");
		system("cls");
		Initialize();
	}
}