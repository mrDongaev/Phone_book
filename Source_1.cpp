#include <iostream>
#include <conio.h>

using namespace std;



bool quest(int j) {

	return(j = 1);
};

bool check(quest);

int main()
{

	setlocale(LC_ALL, "RU");

	char ch = 0;

	/*phone code_enter;*/

	int count = 0;

	do
	{
		cout << "������� ���������� : " << '\n';

		while (true)
		{


			ch = getchar();

			if (ch == '\n')
			{
				break;
			}

			count++;

			cout << ch;

		}

		cout << "������ �� ����������� ���?(Y/N)\n";

		quest(true);

	} while (quest(true));

}










