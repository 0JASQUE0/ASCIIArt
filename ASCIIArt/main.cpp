#include <iostream>
#include "SFML/Graphics.hpp"
#include <conio.h>

using namespace sf;
using namespace std;
 
int main(int argc, char* argv[]) 
{
	if (argc > 1)// ���� �������� ���������, �� argc ����� ������ 1(� ����������� �� ���-�� ����������)
	{
		cout << argv[1] << endl;// ����� ������ ������ �� ������� ���������� �� ������(��������� � ������� ���������� � 0 )
	}
	
	_getch();
	return 0;
}