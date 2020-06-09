/*    name:  jianxin zhu
      date: june/08/2020
*/


#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1;
	

	cout << "Enter Your Sentence, and insert \"********\" in middle: ";
	getline(cin, s1);

	string::const_iterator be = s1.begin();

	s1.insert(be + s1.size()/2, 6, '*' );

	cout << "The Sentence is: " << s1 << endl;

}
