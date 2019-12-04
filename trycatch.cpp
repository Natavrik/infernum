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




_______________________________________________________________________




/*




			| ============================ | trycatch | ============================ |





*/

/*


#include<iostream>
#include<string>
using namespace std;
class students {
public:
	int number;
	string name;
	students(int number, string name) {
		this->number = number;
		this->name = name;
	}
};
string to_string(students k) { return to_string(k.number) + k.name; }
int main() {
	setlocale(LC_ALL, "rus");
	try {
		int i;
		cin >> i;
		if (i == 0) throw "деление на ноль";
		int* j = new int[i];
		if (i == 1) throw 100;
		if (i == 2) throw 200.0;
		if (i == 3) throw students(1, "Вася");
	}
	catch (const double k) { cout << k << endl; }
	catch (const int k) { cout << k << endl; }
	catch (const char* s) { cout << s << endl; }
	catch (const students & k) { cout <<  to_string(k) <<  endl;}
	catch (...) { cout << "Произошла ошибочка,мисье Гау\n"; }
	system("pause");
	return 0;
}


*/



/*




		  | ============================ |   trycatch  | ============================ |
		  | ============================ | Конструктор | ============================ |
		  | ============================ |  Деструктор | ============================ |






#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	A() { cout << "Конструктор А\n"; }
	~A() { cout << "Деструктор А\n"; }
};


class B
{
public:
	B() { cout << "Конструктор B\n"; }
	~B() { cout << "Деструктор B\n"; }
};


void C() { cout << "Мы в С\n"; A a; B b; throw("Исключение С \n"); }
void D() {
	cout << "мы в D\n"; try { A a; B b; C(); cout << "Возврат из D\n"; }
	catch (const char* s) {
		cout << s << endl; //throw; 
	}
}
int main()
{
	setlocale(0, "");
	cout << "Мы в MAIN \n";
	try { D();}
	catch (const char* s) { cout << s << endl; }
	cout << "Конец MAIN\n";
	return 0;
}
*/
