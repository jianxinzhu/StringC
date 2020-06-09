/*   name: jianxin zhu
     date: june/08/2020
     
     author: Paul Deitel
     
*/


#include<iostream>
#include<string>
#include<random>
#include<ctime>

using namespace std;

void convertToLower(string::iterator i, string::iterator e)
{
	while (i != e)
	{
		*i = tolower(*i);
		++i;
	}
}

int main()
{
	string s;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string::iterator r1, r2, r3;

	srand(time(nullptr));
	cout << "Enter a string: ";
	getline(cin, s, '\n');

	r1 = s.begin();
	convertToLower(r1, s.end());
	string s2(s);

	r3 = s2.begin();

	do
	{
		r2 = r3;

		if (*r1 == ' ')
		{
			r1++;
			continue;
		}
		int x = rand() % alpha.length();
		char c = alpha.at(x);
		alpha.erase(x, 1);

		while (r2 != s2.end())
		{
			if (*r2 == *r1)
			{
				*r2 = c;
			}

			++r2;
		}
		++r3;
		++r1;
	} while (r1 != s.end());

	r3 = s2.begin();
	convertToLower(r3, s2.end());

	cout << "Original string: " << s << "\nCryptogram of string: " << s2 << endl;

	return 0;


}
