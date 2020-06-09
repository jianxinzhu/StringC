/*    name: jianxin zhu
      date: june/08/2020
 */ 
 
 #include<string>
#include<iostream>

using namespace std;

void recursiveBackward( string::reverse_iterator& rb, string::reverse_iterator& re)
{
	if (rb == re)
	{
		return;
	}

	cout << *(rb++);
	recursiveBackward(rb, re);
}
int main()
{
	string s;
	cout << "Enter Your sentence: ";
	getline(cin, s);
	string::reverse_iterator rb = s.rbegin();
	string::reverse_iterator re = s.rend();

	recursiveBackward(rb, re);
	cout << endl;
}
