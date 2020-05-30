/*    name: jianxin zhu
      date: may/30/2020
 */
 
 #include<iostream>
#include<string>
using namespace std;

int main()
{
	string word, reverse;

	cout << "Enter Your Sentence and reverse: ";
	cin >> word;

	string::reverse_iterator re = word.rbegin();

	while (re != word.rend())
	{
		reverse += *(re++);
	}
	cout << "The reverse is: " << reverse << endl;

}
