#include <iostream>
#include <string>
#include <utility>

void sortArray(std::string *array, int length)
{
	for (int a = 0; a < length - 1; a++)
	{
		int s = a;
		for (int c = a + 1; c < length; c++)
		{
			if (array[c] < array[s])
				s = c;
		}
		std::swap(array[a], array[s]);
	}
}

int main()
{
	std::cout << "Wieviele Namen willst du eintragen? ";
	int length;
	std::cin >> length;
	std::string *namen = new std::string[length];

	for (int i = 0; i < length; i++)
	{
		std::cout << "Gebe den " << i+1 << ". Namen ein: ";
		std::cin>>namen[i];
	}

	sortArray(namen, length);

	std::cout << "Hier ist deine Liste: \n";

	for (int liste = 0; liste < length; liste++)
	{
		std::cout << "Der "<<liste + 1<< ". war " << namen[liste]<<"\n";
	}

	return 0;
}

