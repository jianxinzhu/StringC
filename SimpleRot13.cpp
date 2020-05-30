/*     name: jianxin zhu
       date: may/30/2020
*/

#include<iostream>
#include<string>

using namespace std;
const int key = 13;

const string encryptRot13(const string& data)
{
	string keyword;

	string::const_iterator sentence = data.begin();

	while (sentence != data.end())
	{
		int ascii = *(sentence++);
		ascii = ascii + key;

		keyword += ascii;
	}

	return keyword;
	
}
const string decryptRot13(const string& data)
{
	string keyword;
	string::const_iterator sentence = data.begin();

	while (sentence != data.end())
	{
		int ascii = *(sentence++);
		ascii = ascii - key;

		keyword += ascii;
	}
	return keyword;
}

int main()
{
	int choice = 0;
	string sentence;

	do
	{
		cout << "1. Encrypt: "
			<< "\n2. Decrypt: "
			<< "\n3. exit(-1)" << endl;

		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter your sentence to ENCRYPT: " << endl;
			cin >> sentence;
			cout << "ROT13 ENCRYPTION: " << encryptRot13(sentence) << endl;
			cout << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter your sentence to DECRYPT: " << endl;
			cin >> sentence;
			cout << "ROT13 DECRYPTION: " << decryptRot13(sentence) << endl;
			cout << endl;
		}
	} while (choice != -1);




}
