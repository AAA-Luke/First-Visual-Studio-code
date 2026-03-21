#include <iostream>
using namespace std;
int main()
{
	double n, guess1, r, guess2;
	int count = 0;
	cin >> n;
	cin >> guess1;
	if (guess1 < n)
	{
		while (count < 101)
		{
			r = n / guess1;
			guess2 = (guess1 + r) / 2;
			count++;
			if ((guess1 - guess2) / guess1<0.01 && (guess1 - guess2) / guess1>-0.01)
			{
				cout << guess2 << "  " << count << endl;
				break;
			}
			else
				guess1 = guess2;
		}
	}
	else
		cout << "Your guess is too high." << endl;
	return 0;
}