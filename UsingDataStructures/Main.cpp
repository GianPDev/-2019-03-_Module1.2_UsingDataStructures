#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ifstream input("Colors.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> dataStack;

	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	for (string line; getline(input, line);)
	{
		dataStack.push(line);
		cout << line << endl;
	}


	for (int i=0; i<dataStack.size(); i++)
	{
		cout << i+1 << ". " << dataStack.top() << endl;
		dataStack.pop();
	}

	system("pause");
}