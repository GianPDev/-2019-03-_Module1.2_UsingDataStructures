#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <queue>
//#include <deque>
//#include <list>

using namespace std;

int main()
{
	
	cout << "Excercise 1.1" << endl;
	cout << "1. Read the input one line at a time and then write the lines out in reverse order, so that the last input line is printed first, then thesecond last input line, and so on.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input01("Things.txt"); //initializes variable with the txt contents, can use input.open("Colors.txt") to open it in another place instead of initialization
	stack<string> readStack01;

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
	const int linesToRead = 43;
	int reverseCount02 = linesToRead + 1;

	while (!input02.eof() || !readStack02.empty()) //.eof == end of file
	{
		//reverseCount is used because if count02 is less than linesToRead, it'll use the first if statement
		//probably a better way to do this, but my brain is fried atm.
		//Maybe using a boolean whether to reverse it or not.

		if (!input02.eof() && count02 < linesToRead) //runs until count gets to linesToRead
		{
			string line;
			getline(input02, line);
			readStack02.push(line);
			cout << count02 + 1 << ". " << readStack02.top() << " -			readStack02 size: " << readStack02.size() << endl;
			count02++;
		}
		else if(!input02.eof())
		{
			cout << reverseCount02 - 1 << ". " << readStack02.top() << " -			readStack02 size: " << readStack02.size() << endl;
			readStack02.pop();
			reverseCount02--;
		}

		if (!input02.eof() && readStack02.empty()) //resets the loop when the stack is empty and if the file hasn't ended yet.
		{
			count02 = 0;
			reverseCount02 = linesToRead + 1;
			cout << "counter reset." << endl;
		}

		if (input02.eof() && !readStack02.empty()) //if file has ended and the stack is still not empty, empty it
		{		
			cout << count02 << ". " << readStack02.top() << " -			readStack02 size: " << readStack02.size() << endl;
			readStack02.pop();
			count02--;
		}

		if (readStack02.empty())
			cout << "readStack02 is empty." << endl;
		if (input02.eof() && readStack02.empty())
			cout << "input02 - End of File" << endl;

		
	}

	cout << "\n**END**\n" << endl;


	//===========================================================================

	cout << "3. Read the input one line at a time. At any point after reading the first 42 lines, if some line is blank (i.e., a string of length 0), then output the line that occured 42 lines prior to that one. For example,if Line 242 is blank, then your program should output line 200.This program should be implemented so that it never stores more than 43 lines of the input at any given time.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input03("Things.txt");
	queue<string> readQueue03;

	int count03 = 0;
	int reverseCount03 = 0;

	while (!input03.eof()) //.eof == end of file
	{
		if (count03 < 42)
		{
			string line;
			getline(input03, line);
			readQueue03.push(line);
			cout << count03 + 1 << ". " << readQueue03.back() << "		- (String Length: " << readQueue03.back().length() << ")(readStack02 size: " << readQueue03.size() << ")" << endl;
			count03++;
		}
		else
		{
			string line;
			getline(input03, line);

			//cout << "Front: " << readQueue03.front() << endl;
			//cout << "Back: " << readQueue03.back() << endl;

			if (line.length() == 0)
			{
				cout << "\nLine " << count03 + 1 << " is blank, replacing with Line " << count03 + 1 - 42 << " : " << readQueue03.front() << "\n" << endl;
				readQueue03.push(readQueue03.front());
				
				cout << count03 + 1 << ". " << readQueue03.back() << "		- (String Length: " << readQueue03.back().length() << ")(readStack02 size: " << readQueue03.size() << ")" << endl;
				count03++;
			}
			else
			{
				readQueue03.push(line);
				cout << count03 + 1 << ". " << readQueue03.back() << "		- (String Length: " << readQueue03.back().length() << ")(readStack02 size: " << readQueue03.size() << ")" << endl;
				count03++;
			}

			readQueue03.pop();
		}
	}

	cout << "\n**END**\n" << endl;

	//===========================================================================

	cout << "4. Read the input one line at a time and write each line to the output if it is not a duplicate of some previous input line.Take special care so that a file with a lot of duplicate lines does not use more memory than what is required for the number of unique lines.\n=============" << endl;

	cout << "**START**\n" << endl;

	ifstream input03("Things.txt");
	queue<string> readQueue03;

	int count03 = 0;
	int reverseCount03 = 0;

	while (!input03.eof()) //.eof == end of file
	{

	}


	cout << "\n**END**\n" << endl;
	
	system("pause");
}