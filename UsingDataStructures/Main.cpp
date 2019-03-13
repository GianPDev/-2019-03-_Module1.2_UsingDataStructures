#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ifstream input("Colors.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> dataStack01;
	stack<string> dataStack02;
	int stackSize; //Created stackSize variable as using dataStack01.size() in for loop will reduce the size every time an item is popped.

	cout << "Colors.txt Data\n=============" << endl;

	for (string line; getline(input, line);)
	{
		dataStack01.push(line);
		dataStack02.push(line);
		cout << line << ", ";
	}
	cout << endl;
	cout << "Pushed each line from Colors.txt into dataStack01 and dataStack02." << endl;
	cout << "dataStack01 Size: " << dataStack01.size() << endl;
	cout << "dataStack02 Size: " << dataStack02.size() << endl;

	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	stackSize = dataStack01.size();

	cout << "**START**\n" << endl;

	for (int i=0; i<stackSize; i++)
	{
		cout << i+1 << ". " << dataStack01.top() << endl;
		dataStack01.pop();
		//cout << "dataStack01 Size: " << dataStack01.size() << endl;
	}

	cout << "\n**END**\n" << endl;

	/* while loop method for looping through stack
	int count = 1;
	while (!dataStack01.empty())
	{
		cout << count << ". " << dataStack01.top() << endl;
		dataStack01.pop();
		count++;
	}
	cout << endl;
	*/
	cout << "2. Read the first 50 lines of input and then write them out in reverse order. Read the next 50 lines and then write them out in reverse order. Do this until there are no more lines left to read, at which point any remaining lines should be output in reverse order.In other words, your output will start with the 50th line, then the 49th, then the 48th, and so on down to the first line. This will be followed by the 100th line, followed by the 99th, and so on down to the 51st line. And so on.\n=============" << endl;
	
	cout << "**START**\n" << endl;

	int counter = 0;
	int linesToRead = 45;
	while (!dataStack02.empty())
	{
		if (counter < linesToRead)
		{
			cout << counter + 1 << ". " << dataStack02.top() << endl;
			dataStack02.pop();
			counter++;
		}
		else
		{
			counter = 0;
		}
	}

	cout << "\n**END**\n" << endl;

	cout << "3. Read the input one line at a time. At any point after reading the first 42 lines, if some line is blank (i.e., a string of length 0), then output the line that occured 42 lines prior to that one. For example,if Line 242 is blank, then your program should output line 200.This program should be implemented so that it never stores more than 43 lines of the input at any given time.\n=============" << endl;

	cout << "**START**\n" << endl;
	cout << "\n**END**\n" << endl;

	system("pause");
}