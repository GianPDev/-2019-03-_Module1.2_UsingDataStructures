#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <queue>
#include <deque>

using namespace std;

int main()
{
	
	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input01("Things.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> readStack01;

	/*
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

	*/

	int count01 = 0;
	int reverseCount01 = 0;

	while (!input01.eof())
	{
		string line;
		getline(input01, line);
		readStack01.push(line);
		cout << count01 + 1 << ". " << readStack01.top() << " -		readStack02 size: " << readStack01.size() << endl;
		count01++;
	}

	reverseCount01 = count01 + 1;

	while (!readStack01.empty())
	{
		cout << reverseCount01 - 1 << ". " << readStack01.top() << " -			readStack02 size: " << readStack01.size() << endl;
		readStack01.pop();
		reverseCount01--;
	}

	cout << "\n**END**\n" << endl;
	
	//===========================================================================

	cout << "2. Read the first 50 lines of input and then write them out in reverse order. Read the next 50 lines and then write them out in reverse order. Do this until there are no more lines left to read, at which point any remaining lines should be output in reverse order.In other words, your output will start with the 50th line, then the 49th, then the 48th, and so on down to the first line. This will be followed by the 100th line, followed by the 99th, and so on down to the 51st line. And so on.\n=============" << endl;
	
	cout << "**START**\n" << endl;

	//Notes: after using getline() on a ifstream, it goes to the next line.

	ifstream input02("Things.txt"); //need to recreate it, as there's some issues after iterating the same ifstream twice.
	stack<string> readStack02;

	int count02 = 0;
	const int linesToRead = 50;
	int reverseCount02 = linesToRead + 1;
	bool finished = false;

	while (!input02.eof() || !readStack02.empty())
	{
		if (count02 < linesToRead)
		{
			string line;
			getline(input02, line);
			readStack02.push(line);
			cout << count02 + 1 << ". " << readStack02.top() << " -		readStack02 size: " << readStack02.size() << endl;
			count02++;
		}
		else
		{
			cout << reverseCount02 - 1 << ". " << readStack02.top() << " -			readStack02 size: " << readStack02.size() << endl;
			readStack02.pop();
			count02++;
			reverseCount02--;
		}
		if (readStack02.empty())
		{
			count02 = 0;
			reverseCount02 = linesToRead + 1;
		}
		if (input02.eof() && !readStack02.empty())
		{
			cout << reverseCount02 - 1 << ". " << readStack02.top() << " -			readStack02 size: " << readStack02.size() << endl;
			readStack02.pop();
			count02++;
			reverseCount02--;
		}
	}

	cout << "\n**END**\n" << endl;

	/*
	//===========================================================================

	cout << "3. Read the input one line at a time. At any point after reading the first 42 lines, if some line is blank (i.e., a string of length 0), then output the line that occured 42 lines prior to that one. For example,if Line 242 is blank, then your program should output line 200.This program should be implemented so that it never stores more than 43 lines of the input at any given time.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input03("Things.txt");
	vector<string> dataVector01;

	cout << "Pushed:\n" << endl;
	for (string line; getline(input03, line);) //for loop for pushing every value into stack
	{
		dataVector01.push_back(line);
		cout << line << ", ";
	}
	cout << "\n\ninto dataVector01\n" << endl;
	cout << "dataVector01 Size: " << dataVector01.size() << "\n" << endl;

	for (int i = 0; i < dataVector01.size(); i++)
	{
		cout << i+1 << ". " << dataVector01[i] << endl;
		if (i == 42)
		{

		}
	}

	cout << "\n**END**\n" << endl;
	*/
	system("pause");
}