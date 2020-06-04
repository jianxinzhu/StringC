/*    name: jianxin.zhu
      date: june/04/2020
*/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<random>
#include<ctime>

using namespace std;

void hangeMan(unsigned int);
void printLetter(string, char, char);
void printAvailableLetter(string taken)
{
	cout << "+--------------------------+" << endl;
	cout << "      AVAILABLE LETTERS     " << endl;
	cout << "+--------------------------+" << endl;
	printLetter(taken, 'A', 'M');
	cout << endl;
	printLetter(taken, 'N', 'Z');
	cout << endl;
}
string loadword(string path)
{
	vector<string>list;
	string word;
	ifstream inFile(path);
	if (!inFile)
	{
		cerr << "Unable to open The GuessList.file" << endl;
		exit(EXIT_FAILURE);
	}
	if (inFile.is_open())
	{
		while (getline(inFile, word))
		{
			list.push_back(word);
		}
		uniform_int_distribution<int> randInt(0, list.size()-1);
		default_random_engine engine{ static_cast<unsigned int>(time(nullptr)) };
		int randomLine = randInt(engine);
		word = list.at(randomLine);
	}

	return word;

}
bool checkGame(string, string);


int main()
{
	string word = loadword("guessList.txt");
	
	string guess;
	unsigned int count = 0;
	

	cout << "------WELCOME TO HANGMAN GAME--------" << endl;
	cout << "-------YOUR WORD : ";
	for (int i = 0; i < word.length(); i++)
	{
		cout << "*" << " ";
	}
	cout << endl;

	do
	{
		string letter;
		bool gameStatue;

		cout << "Enter Your Letter: ";

		cin >> letter;
		guess = guess + letter;
		printAvailableLetter(guess);
		gameStatue = checkGame(word, guess);
		count += 1;
		hangeMan(count);

		if (count == 7)
		{
			cout << "YOU LOSE THE GAME" << endl;
			return 0;
		}
		if (gameStatue == true)
		{
			cout << "YOU WIN!!" << endl;
			return 0;
		}

	} while (cin);
}

void hangeMan(unsigned int count)
{
	switch (count)
	{
	case 1:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;
		break;
	case 2:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;
		cout << "\t/" << endl;
		break;
	case 3:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;
		cout << "\t/|"<<endl;
		break;
	case 4:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;;
		cout << "\t/|\\" << endl;
		break;
	case 5:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;
		cout << "\t/|\\"<<endl;
		cout << "\t |" << endl;
		break;
	case 6:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0" << endl;
		cout << "\t/|\""<<endl;
		cout << "\t |" << endl;
		cout << "\t/" << endl;
		break;
	case 7:
		cout << "\t |" << endl;
		cout << "\t |" << endl;
		cout << "\t 0"<<endl;
		cout << "\t/|\\"<<endl;
		cout << "\t |"<<endl;
		cout << "\t/ \\"<<endl;
		break;
	default:
		break;
	}
}
void printLetter(string input, char begin, char end)
{
	string exist;
	for (char i = begin; i <= end; i++)
	{
		if (input.find(i) == string::npos)
		{
			exist += i;
			exist += " ";

		}
		else
		{
			exist += "  ";
		}
	}
	cout << exist;

}
bool checkGame(string word, string guess)
{
	bool won = true;
	string letter;
	for (int i = 0; i < word.length(); i++)
	{
		if (guess.find(word[i]) == string::npos)
		{
			won = false;
			letter += "* ";
		}
		else
		{
			letter += word[i];
			letter += " ";
		}
	}
	cout << "+--------------------------+" << endl;
	cout << "         YOUR GUESS:        " << endl;
	cout << "+--------------------------+" << endl;
	cout << "The word: "<<letter;
	cout << endl;
	return won;

}
