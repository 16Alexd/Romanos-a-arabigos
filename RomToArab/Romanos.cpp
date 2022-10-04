#include "Romanos.h"

int Romanos::romToDec(char romano[])
{
	this->romano[20] = romano[20];
	int number = 0, value{};

	for (int i = 0; i < strlen(romano); i++)
	{
		if (romano[i] == 'I' && romano[i + 1] == 'V' && strlen(romano) == 2) {
			number = 4;
			break;
		}
		else if (romano[i] == 'V' && romano[i + 1] == 'I' && strlen(romano) == 2) {
			number = 6;
			break;
		}
		else if(romano[i] == 'I' && romano[i + 1] == 'X' && strlen(romano) == 2)
		{
			number = 9;
			break;
		}
		else if (romano[i] == 'X' && romano[i + 1] == 'I' && strlen(romano) == 2)
		{
			number = 11;
			break;
		}

		switch (romano[i]) {
		case 'I':
			value = 1;
			break;
		case 'V':
			value = 5;
			break;
		case 'X':
			value = 10;
			break;
		case 'L':
			value = 50;
			break;
		case 'C':
			value = 100;
			break;
		case 'D':
			value = 500;
			break;
		case 'M':
			value = 1000;
			break;
		default:
			break;
		}
		number += value;
	}
	return number;
}
