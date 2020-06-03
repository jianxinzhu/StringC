/*    name: jianxin zhu
      date: june/03/202
 */
 
 
 #include<iostream>
#include<string>
using namespace std;

const string getName(string&, const string&);

int main()
{
	string lastname, firstname, fullname;

	cout << "Enter your lastname: ";
	cin >> lastname;
	cout << "\nEnter your firstname: ";
	cin >> firstname;

	fullname = firstname + "." + lastname;

	cout << "\nYour name is: " << fullname;

	cout << "\nYour name is: " << getName(firstname, lastname);



}
const string getName( string& fname, const string&lname)
{
	return fname.append( lname);
}
