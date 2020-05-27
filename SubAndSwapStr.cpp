/*  HOW TO PROGRAM C++ 10th Edition
    Authors : PAUL DEITEL, HARVEY DEITEL
*/

#include<string>
#include<iostream>

using namespace std;

int main()
{
	string string1 = "Hello World";
	string string2 = "Welcome to C++";


	cout << string1.substr(6, 5) << endl;

	cout << "The String1 is: " << string1 << "\nThe String2 is: " << string2 << endl;

	string1.swap(string2);
	cout<<"After Swapping: "<< "\nThe String1 is: " << string1 
		<< "\nThe String2 is: " << string2 << endl;


}
