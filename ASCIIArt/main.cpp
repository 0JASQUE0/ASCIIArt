#include <iostream>
#include "SFML/Graphics.hpp"
#include <conio.h>

using namespace sf;
using namespace std;
 
int main(int argc, char* argv[]) 
{
	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	{
		cout << argv[1] << endl;// вывод второй строки из массива указателей на строки(нумерация в строках начинается с 0 )
	}
	
	_getch();
	return 0;
}