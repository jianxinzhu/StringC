/*   name: jianxin zhu
     date: june/08/2020
 */
 
 
 #include<string>
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;



int main()
{
	int flag = 0;
	vector<char>vowel{ 'A','I','O','E','U','a','i','o','e','u' };
	string s1;


	cout << "Enter a sentence: ";
	getline(cin, s1);


	for (auto c : s1)
	{
		for (int i = 0; i <10; i++)
		{
			if (c == vowel[i])
			{
				flag++;
			}
		}
	}

	cout << "The sentence you enter is: " << s1 << endl;
	cout << "The vowel in this sentence is: " << flag << endl;

}
