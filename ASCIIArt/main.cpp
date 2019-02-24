#include <iostream>
#include "SFML/Graphics.hpp"
#include <conio.h>
#include <fstream>

using namespace sf;
using namespace std;
 
int main(int argc, char* argv[]) 
{
	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	{
		ofstream fout;
		fout.open("art.txt");

		Image image;
		image.loadFromFile(argv[1]);
		float dy = image.getSize().y / 150;
		for (float y(0); y < image.getSize().y; y += dy)
		{
			for (int x(0); x < image.getSize().x; x++)
			{
				int deph = (image.getPixel(x, y).r + image.getPixel(x, y).g + image.getPixel(x, y).b) / 3;

				if (deph < 25.5) fout << "@";
				if (deph < 51 && deph >= 25.5) fout << "&";
				if (deph < 76.5 && deph >= 51) fout << "%";
				if (deph < 102 && deph >= 76.5) fout << "#";
				if (deph < 127.5 && deph >= 102) fout << "(";
				if (deph < 153 && deph >= 127.5) fout << "/";
				if (deph < 178.5 && deph >= 153) fout << "*";
				if (deph < 204 && deph >= 178.5) fout << ",";
				if (deph < 229.5 && deph >= 204) fout << ".";
				if (deph < 255 && deph >= 229.5) fout << " ";
			}

			fout << "\n";
		}
		
	}
	
	_getch();
	return 0;
}