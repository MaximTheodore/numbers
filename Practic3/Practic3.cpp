#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
static int p;
int main()
{
	SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
	bool f = true;
	string end;
	int u=0;
	int a ;
	do
	{
		unsigned long long t=1;
		cout << "\nВведите число: ";
		cin >> a;
		if (a < 0) 
		{
			cout << "Число отрицательное\n";
		}
		else {
			if (a == 0 || a == 1) {
				f = true;
			}
			else {
				for (int i = 2; i <= a / 2; ++i) {
					if (a % i == 0) {
						f = false;
						break;
					}
				}
			}
			if (f)
			{
				cout << "Число " << a << " простое\n";
				u += a;
			}
			for (int i = 1; i <=a; i++)
			{
				t =t* i;
			}
			cout << "Факториал числа " << a << " это " << t;
			cout << "\nВведите 'End' для выхода: ";
			cin.sync();
			cin.get();
			getline(cin, end);
		}
		cout << "\n------------------------";
		
	} while (end != "End");
	cout << "\nСумма всех простых введённых чисел: "<<u;
}


