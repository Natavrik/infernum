/*




			| ============================ | trycatch | ============================ | 





*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	try
	{
		int i;
		cin >> i;
		if (i == 0)	throw "деление на ноль";
		//i = 10 / i;
		if (i == 10) throw 100;
		if (i == 2) throw 100.0;
		int* j = new int[i];
	}
	catch (const int) { cout << "***\n\n"; }
	catch (const double) { cout << "_______ \n\n"; }
	catch (const char* s) { cout << s << endl; }
	catch(...) { cout << "упс, ошибка!\n\n"; }
	return 0;
}

