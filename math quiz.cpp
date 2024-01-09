#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
	int nques;
	int correct = 0;
	int diff=0,p=0;
	srand(time(0));
	cout << "*" << setfill('*') << setw(40) << "*" << endl;
	cout << "*        *WELLCOME TO MATHs QUIZ*       *\n";
	cout << "*" << setfill('*') << setw(40) << "*" << endl;
	while (diff != 1 || diff != 2 || diff != 3)
	{
		cout << " SELECT difficult level \n";
		cout << " For Easy mode press 1\n";
		cout << " For medium mode press 2\n";
		cout << " For difficult mode press 3\n";
		cout << "*" << setfill('*') << setw(40) << "*" << endl;
		cin >> diff;
		if (diff == 1 || diff == 2 || diff == 3)
		{
			break;
		}
		cout << "please select number 1 or 2 or 3\n";
		p++;
	}
	cout << "HOW MANY QUESTION YOU WANT TO SOLVE :  \n";
	cin >> nques;
	cout << endl;
	system("cls");
	for (int i = 1; i <= nques; i++)
	{
		int x, y, s, add1, add2, add3;
		char ans;
		char A = '+', B = '-', C = '*', D = '/';
		if (diff == 1)
		{
			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			
		}
		else if (diff == 2)
		{
			x = rand() % 150 + 1;
			y = rand() % 50 + 1;
		}
		else if (diff == 3)
		{
			x = rand() % 250 + 1;
			y = rand() % 100 + 1;
		}
		s = rand() % 4 + 65;
		add1 = rand() % 4 + 1;
		add2 = rand() % 4 + 1;
		add3 = rand() % 4 + 1;
		if (s == 'A')
		{
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "Q#" << i << ")";
			cout << "   " << x << " " << "+" << " " << y << " = " << "?" << endl;
			cout << endl;
			cout << "OPTION:" << endl;
			cout << "a):" << x + y + add1 << endl;
			cout << "b):" << x + y + add2 << endl;
			cout << "c):" << x + y << endl;
			cout << "d):" << x + y - add3 << endl;
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "SELECT CORRECT OPTION :\n";
			cin >> ans;
			if (ans == 'c')
			{
				cout << "Correct Answer!\n";
				correct++;
			}
			else
			{
				cout << "WRONG ANSWER!\n";
			}
		}
		else if (s == 'B')
		{
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "Q#" << i << endl;
			cout << "   " << x << " " << "-" << " " << y << " = " << "?" << endl;
			cout << endl;
			cout << "OPTION:" << endl;
			cout << "a):" << x - y << endl;
			cout << "b):" << x - y - add1 << endl;
			cout << "c):" << x - y + add2 << endl;
			cout << "d):" << x - y + add3 << endl;
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "SELECT CORRECT OPTION :\n";
			cin >> ans;
			if (ans == 'a')
			{
				cout << "Correct Answer!\n";
				correct++;
			}
			else
			{
				cout << "WRONG ANSWER!\n";
			}
		}
		else if (s == 'C')
		{
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "Q#" << i << endl;
			cout << "   " << x << " " << "*" << " " << y << " = " << "?" << endl;
			cout << endl;
			cout << "OPTION:" << endl;
			cout << "a):" << x  * y + add3 << endl;
			cout << "b):" << x  * y - add1 << endl;
			cout << "c):" << x  * y + add2 << endl;
			cout << "d):" << x * y << endl;
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "SELECT CORRECT OPTION :\n";
			cin >> ans;
			if (ans == 'd')
			{
				cout << "Correct Answer!\n";
				correct++;
			}
			else
			{
				cout << "WRONG ANSWER!\n";
			}

		}
		else if (s == 'D')
		{
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "Q#" << i << endl;
			cout << "   " << x << " " << "/" << " " << y << " = " << "?" << endl;
			cout << endl;
			cout << "OPTION:" << endl;
			double answ;
			cout << fixed << setprecision(2);
			answ = x / y - add1;
			cout << "a):" << answ << endl;
			answ = x / y;
			cout << "b):" << answ << endl;
			answ = x / y + add3;
			cout << "c):" << answ << endl;
			answ = x / y + add2;
			cout << "d):" << answ << endl;
			cout << "*" << setfill('*') << setw(40) << "*" << endl;
			cout << "SELECT CORRECT OPTION :\n";
			cin >> ans;
			if (ans == 'b')
			{

				cout << "Correct Answer!\n";
				correct++;
			}
			else
			{
				cout << "WRONG ANSWER!\n";
			}
		}
	}
	system("cls");
	cout << "*" << setfill('*') << setw(40) << "*" << endl;
	cout << "Your correct Answer is " << correct << " out of " << nques << endl;
	cout << "THANKS FOR PLAYING GAME!\n";
	cout << "*" << setfill('*') << setw(40) << "*" << endl;
	system("pause");
	return 0;
}