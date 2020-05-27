/*  HOW TO PROGRAM C++ 10th Edition
    Authors : PAUL DEITEL, HARVEY DEITEL
*/
#include<string>
#include<iostream>

using namespace std;

int main()
{
	string string1 = "Hello World";
	string string2 = "Testing";
	string string3 = "stinger";
	string string4 = string2;

	cout << "String1: " << string1 << "\nString2: " << string2 << "\nString3: " << string3
		<< "\nString4: " << string4 << endl;

	int result = string1.compare(string2);
	cout << result << endl;

	if (result == 1)
	{
		cout << "String1 and String2 are same" << endl;
	}
	else
	{
		cout << "String1 and String2 are not same" << endl;
	}

	result = string2.compare(2, 6, string3, 0, 4);
	cout << result << endl;

	if (result == 1)
	{
		cout << "String are equal" << endl;
	}
	else
	{
		cout << "String are not equal" << endl;
	}

	result = string2.compare(0, 3, string4);
	cout << result;
}
