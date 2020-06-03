/*    name: jianxin zhu
      date: june/3/2020
*/

#include<iostream>
#include<string>
using namespace std;

bool wordCheck(const string& data)
{
	return (data.substr(data.length() - 1) == "y" || data.substr(data.length() - 2 )== "ay");
}

int main()
{
	string s1;
	cout << "Enter the word with 'ay' or 'y' in the end: ";
	cin >> s1;

	cout << ((wordCheck(s1) ? s1 : "This won't print")) << endl;

}
