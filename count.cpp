#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors; 
 *       (2) add code for painting histogram in console,
 *           cf. picture in https://en.wikipedia.org/wiki/Histogram
 * 
 */

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i = 0, 
		nwhite = 0, 
		nother = 0; //не были инициализированы переменные
	const int size = 10,
		letterSize = 'z' - 'a' + 1;
	int ndigit[size] = { 0 }; //это тоже не было инициализированно
	int nletter[letterSize] = { 0 };

	char c;
	
	int stringSize = src.size();

	for (int i = 0; i < stringSize; ++i) //исправил ненужное усложнение
	{
		c = src[i];
		if (c >= '0' && c <= '9') //меньше, а не больше
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t') //нужно OR а не AND
			++nwhite;
		else if (c >= 'a' && c <= 'z')
			++nletter[c - 'a'];
		else
			++nother;
	}
	
	cout << "source string: " << src << endl << "digits =";
	for (int i = 0; i < size; ++i)
		cout << " " << ndigit[i];
	
	cout << ", white space = " << nwhite 
		 << ", other = " << nother << endl;

	cout << "letter statistic diagram:" << endl;
	for (int i = 0; i < letterSize; ++i)
	{
		cout << char(i + 'a') << "    ";
		for (int j = 0; j < nletter[i]; ++j)
			cout << '-';
		cout << '(' << nletter[i] << ')' << endl;

	}
	


	system("pause");
}
