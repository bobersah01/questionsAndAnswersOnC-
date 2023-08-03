#include <iostream>
#include <string>
using namespace std;
//This c++ file is focused on strings and characters.
//LAB4: STRINGS: PALINDROME WORD
/*
//I created a program for controlling a word that is palindrome or not.  
//We are returning a new word. 
string returnNewWord(string word)
{
	string newWord = "";
	int lengthOfArray = word.length();
	//int lengthOfArray = sizeof(word) / sizeof(word[0]);
	//We can not take index as negative number. Therefore, you have to  take index as length of array -1.
	//After this operation, you have to decrease index one by one.
	//for (int i = -1; i > (word.length()*-1)-1; i--) 
	for (int i = lengthOfArray-1; i >= 0; i--)
	{
		newWord += word[i];
	}
	
	return newWord;
}

//We are created a new function that controls a new word for a palindrome word.
bool isPalindrome(string word, string newWord)
{
	int counter = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if ((word[i] == newWord[i]) || (islower(word[i]) == isupper(newWord[i]) || isupper(word[i]) == islower(newWord[i])))
			counter += 1;
	}

	if (counter == word.length())
		return true;
	else
		return false;
}

int main()
{
	string word;
	bool result;

	do {
		cout << "Enter a word that you control whether is palindrome or not: " << endl;
		cin >> word;
	} while (word.length() <0 || word.length() > (2*100000));

	//cout << "Enter a word that you control whether is palindrome or not: " << endl;
	//cin >> word;

	cout << "******************" << endl;

	string element = returnNewWord(word);
	cout << "The reverse of the word: " << element << endl;

	//if (word == element)
		//cout << 

	cout << "The word that you enter: " << word << ": ";
	result = isPalindrome(word, element);

	if (result)
		cout << "is Palindrome." << endl;
	else
		cout << "is not Palindrome." << endl;

	//string deneme = "Hello";
	//cout << deneme[-1] << endl; we can not initialize a negative index for the array.
}*/

//TASK3: NON-REPEATING CHARACTERS: WE HAVE TO IMPROVE THIS QUESTION.
/*
string returnAlphaString(string sentence)
{
	string newWord = "";
	for (int i = 0; i < sentence.length(); i++)
	{
		if (isalpha(sentence[i]))
		{
			newWord += sentence[i];
		}
	}
	return newWord;
}

string returnUpdatedString(string newWord) //alphastring fonksiyonundan return edilen değişkeni almak zorundadır.
{
	string repeatedCharacters = "";
	for (int i = 0; i < newWord.length() - 1; i++)
	{
		for (int j = i + 1; j < newWord.length(); j++)
		{
			if (newWord[i] == newWord[j])
			{
				repeatedCharacters += newWord[i];
			}
		}
	}
	return repeatedCharacters;
}

int main()
{
	string userSentence;
	cout << "Please enter a sentence: " << endl;
	getline(cin, userSentence);

	string alphaSentence = returnAlphaString(userSentence);

	cout << "User sentence with alphabetic characters: " << alphaSentence << endl;
	cout << "Alphabetic characters that repeated in the user sentence: " << returnUpdatedString(alphaSentence) << endl;
}*/

/*
int main()
{
	char c = 'C';
	cout << "Constant number: " << 'a' - 'A' << endl;
	cout << "Constant number 2: " << 'b' - 'B' << endl;
	cout << "Constant number 3: " << 'd' - 'E' << endl;
	cout << "Small character: " << c + ('a' - 'A') << endl;
}*/

