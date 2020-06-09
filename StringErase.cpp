/*    name: jianxin zhu
      date: june/08/2020
      
      author: iidney Watson - siidney.watson.work@gmail.com
 */
 
 #include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1;
	const string s2 = "by", s3 = "BY";
	cout << "Enter Your sentence, and it will erases \"by\" and \"BY\" : ";
	getline(cin, s1);



	int x = s1.find(s2, 0);
	while (x != string::npos)
	{
		s1.erase(x, 2);
		x = s1.find(s2, x + 1);
	}

	x = s1.find(s3, 0);
	while (x != string::npos)
	{
		s1.erase(x, 2);
		x = s1.find(s3, x + 1);
	}
	

	cout << "Result: " << s1 << endl;

}
