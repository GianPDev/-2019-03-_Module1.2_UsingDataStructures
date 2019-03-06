#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ifstream input("Colors.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> dataStack;

	cout << "Colors.txt Data\n=============" << endl;

	for (string line; getline(input, line);)
	{
		dataStack.push(line);
		cout << line << ", ";
	}

	cout << "\ndataStack Size: " << dataStack.size() << "\n" << endl;

	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	int stackSize = dataStack.size(); //Created stackSize variable as using dataStack.size() in for loop will reduce the size every time an item is popped.

	for (int i=0; i<stackSize; i++)
	{
		cout << i+1 << ". " << dataStack.top() << endl;
		dataStack.pop();
		//cout << "dataStack Size: " << dataStack.size() << endl;
	}

	/* while loop method for looping through stack
	int count = 1;
	while (!dataStack.empty())
	{
		cout << count << ". " << dataStack.top() << endl;
		dataStack.pop();
		count++;
	}
	cout << endl;
	*/

	system("pause");
}