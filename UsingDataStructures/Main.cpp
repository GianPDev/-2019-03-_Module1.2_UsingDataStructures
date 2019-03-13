#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input01("Things.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> dataStack01;

	cout << "Pushed:\n" << endl;
	for (string line; getline(input01, line);) //for loop for pushing every value into staack
	{
		dataStack01.push(line);
		cout << line << ", ";
	}

	cout << "\n\ninto dataStack01\n" << endl;
	cout << "dataStack01 Size: " << dataStack01.size() << "\n" << endl;

	int stackSize = dataStack01.size(); //Created stackSize variable as using dataStack01.size() in for loop will reduce the size every time an item is popped, which prevents it from looping every value


	for (int i=0; i<stackSize; i++) //reads the top value then pops it
	{
		cout << i+1 << ". " << dataStack01.top() << endl;
		dataStack01.pop();
	}

	cout << "\n**END**\n" << endl;

	//===========================================================================

	cout << "2. Read the first 50 lines of input and then write them out in reverse order. Read the next 50 lines and then write them out in reverse order. Do this until there are no more lines left to read, at which point any remaining lines should be output in reverse order.In other words, your output will start with the 50th line, then the 49th, then the 48th, and so on down to the first line. This will be followed by the 100th line, followed by the 99th, and so on down to the 51st line. And so on.\n=============" << endl;
	
	cout << "**START**\n" << endl;

	ifstream input02("Things.txt"); //need to recreate it, as there's some issues after iterating the same ifstream twice.
	stack<string> dataStack02;

	cout << "Pushed:\n" << endl;
	for (string line; getline(input02, line);) //for loop for pushing every value into stack
	{
		dataStack02.push(line);
		cout << line << ", ";
	}

	cout << "\n\ninto dataStack02\n" << endl;
	cout << "dataStack02 Size: " << dataStack02.size() << "\n" << endl;

	int counter = 0; //value to count how many times the loop has run
	int linesToRead = 45; //How many items to read before resetting counter.

	while (!dataStack02.empty()) //while loop is used to pop every item out of the stack.
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

	//===========================================================================

	cout << "3. Read the input one line at a time. At any point after reading the first 42 lines, if some line is blank (i.e., a string of length 0), then output the line that occured 42 lines prior to that one. For example,if Line 242 is blank, then your program should output line 200.This program should be implemented so that it never stores more than 43 lines of the input at any given time.\n=============" << endl;

	cout << "**START**\n" << endl;



	cout << "\n**END**\n" << endl;

	system("pause");
}