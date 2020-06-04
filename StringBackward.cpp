/*    name: jianxinzhu
      date: june/04/2020
 */
 
 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word, reverse;

	cout << "Enter the senstence, and print it in backward: ";
	getline(cin, word);

	string::reverse_iterator rb = word.rbegin();

	while (rb != word.rend())
	{
		*rb = (islower(*rb) ? toupper(*rb) : tolower(*rb));
		reverse += *(rb++);
	}
	cout << reverse;
	return 0;
}
