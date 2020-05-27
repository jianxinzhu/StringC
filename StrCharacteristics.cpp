/*  HOW TO PROGRAM C++ 10th Edition
    Authors : PAUL DEITEL, HARVEY DEITEL
*/
#include<iostream>
#include<string>
using namespace std;

void printStatistic(const string& str)
{
	cout << "Capacity: " << str.capacity() << "\nMax size:"
		<< str.max_size() << "\nSize: " << str.size()
		<< "\nLength: " << str.length() << "\nEmpty: " << str.empty() << endl;
}
int main()
{
	string str = "Hello World Welcome to C++ and Welcome to Visual World";
	int location;
	cout << "The string is: \n" << str << boolalpha;
	printStatistic(str);

	cout << endl;
	cout << "The \"to\" was found at: " << str.find("to") << endl;
	cout << "The \"to\"  was reverse found at: " << str.rfind("to") << endl;

	location = str.find_first_of("misop");
	cout << "\n(find_first_of) found " << "'" << str[location] << "'" << " from the group at "
		<< location << endl;
	location = str.find_last_of("misop");
	cout << "\n(find_last_of) found " << "'" << str[location] << "'" << " from the group at "
		<< location << endl;

	str.erase(11);
	cout << "After erase: " << str << endl;

	size_t position = str.find(" ");
	while (position != string::npos)
	{
		str.replace(position, 1, ".");
		position = str.find(" ", position + 1);
	}
	cout << str << endl;

}
