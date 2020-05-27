/*  HOW TO PROGRAM C++ 10th Edition
    Authors : PAUL DEITEL, HARVEY DEITEL
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string string1 = "cat";
	string string2;
	string string3;

	string2 = string1;
	string3.assign(string1);

	cout << "string1: " << string1 << "\nstring2: " << string2
		<< "\nstring3: " << string3 << endl;

	string2[0] = string3[2] = 'r';
	cout << "After modification of string2 and string3: \n" << "string1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: ";
	for (int i = 0; i < string3.size(); i++)
	{
		cout << string3.at(i);
	}
	string string4{ string1 + "apult" };
	string string5;

	string3 += "pet";
	string1.append("acomb");

	string5.append(string1, 4, string1.size() - 4);

	cout << "\nAfter concatenation: " << "\nstring1: " << string1
		<< "\nstring2: " << string2 << "\nstring3: " << string3
		<< "\nstring4: " << string4 << "\nstring5: ";

	for (char c : string5)
	{
		cout << c;
	}

}
