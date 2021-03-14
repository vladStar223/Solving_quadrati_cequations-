
#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>
using namespace std;
// 1.61803       первый корень уравнения
//-0.618034      второй корень уравнения
//2      первый корень уравнения
//0     второй корень уравнения
int main()

{
	bool ur11 = 1;
	setlocale(LC_ALL, "ru");



	cout << "Здравствуйте пользователь" << endl;
	
	
		cout << "Какое хотите решить квадратное уравнение" << endl;
		cout << "Нажмите 0 если хотите решить не полное квадратное уравнение или" << endl;
		cout << "нажмите 1  если хотите решить полное квадратное уравнение" << endl;
		cin >> ur11;
		if (ur11 == 0)
		{
			int a1;
			int b1;
			int c1;
			int x4;
			int x4a;
			int x4b;
			int x5;
			int x5a;
			int x5b;
			int x6;
			int x6a;
			int x6b;
			cout << "Ведите значения a,b,c" << endl;
			cin >> a1;
			cin >> b1;
			cin >> c1;
			if (a1 == 0)
			{
				// x^2 -+ bx -+c = 0
				cout << "В разработке!!" << endl;
			}
			if (b1 == 0)
			{
				x4 = -c1 / a1;
				if (-c1 / a1 > 0)
				{
					x4a = -(c1 / a1);
					x4b = +(c1 / a1);
					cout << "x  = " << x4a << "В корне" << "и" << x4b << "В корне" << endl;
					cout << "Спасибо за использовани " << endl;
				}
				if (-c1 / a1 < 0)
				{
					cout << "Нету решений" << endl;
				}
			}
			if (c1 == 0)
			{
				x4a = 0;
				x4b = -b1 / a1;
				cout << "x  = " << x4a << "и" << x4b << endl;
				cout << "Спасибо за использовани " << endl;

			}

			//если два нету значения
			if (a1 == 0 && b1 == 0)
			{
				cout << "В разработке!!" << endl;
			}
			if (a1 == 0 && c1 == 0)
			{
				cout << "В разработке!!" << endl;
			}
			if (b1 == 0 && c1 == 0)
			{
				x4a = 0;
				x4b = 0;
				cout << "x  = " << x4a << "и" << x4b << endl;
				cout << "Спасибо за использовани " << endl;

			}

		}
		if (ur11 == 1)
		{
			// x^2 -+ bx -+c = 0
			cout << "Ведите значения a,b,c" << endl;
			int a;
			int b;
			int c;
			float x1;
			float x2;
			float x3;
			double D;
			cin >> a;
			cin >> b;
			cin >> c;
			D = (pow(b, 2)) - 4 * (a  * c);
			cout << D << "  дискрименант" << endl;
			if (D > 0)
			{
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);
				cout << x1 << "       первый корень уравнения" << endl;
				cout << x2 << "      второй корень уравнения" << endl;
			}
			if (D == 0)
			{
				x3 = -b / 2 * a;
				cout << x3 << "    корень уравнения если дискрименат = 0" << endl;

			}
			if (D < 0)
			{
				cout << "Не имеет корней" << endl;

			}
		}
		bool again;
		string yes = "да";
		string no = "нет";
		string again1;
		cout << "Хотите решить новое уравнение" << endl;
		cin >> again1;
		if (again1 == yes)
		{
			again = true;
			
		}
		if (again1 == no)
		{
			again = false;
			cout << "Нажмите  Enter чтобы закрыть приложение" << endl;
			cout << " Если хотете связятся со мной    " << "  электроная почта vlad32kolm@gmail/com" << endl;
		}


}

	
	
		


	
	


	
	















