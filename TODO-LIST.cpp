//written by @BamuelSarfi
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
	vector<string> todo;
	string input;
	
	cout << "**Welcome to simple TODO list. type 'exit' at any time to escape**\nTo remove a todo, type 'rm' before the number of the todo.\nTo view todos at any time, type 'ls' to list them numerical order.\n";
	
	while(true)
	{
		
		int x = 0;

		cout << "Enter here >> ";
		getline(cin, input);

		if (input == "exit" || input == "EXIT") {
			cout << "Bye Bye...";
			return 0;
		}
		else if (input == "ls" || input == "LS") {
			if (todo.size() != 0) {
				cout << "Listing Items...\n";
				for (x = 0; x < todo.size(); x++) {
					cout << x + 1 << ". " << todo[x] << "\n";
				}
			}
			else {
				cout << "There is nothing to list. Try adding some todos\n";
			}
		}
		else if (input.rfind("rm ", 0) == 0) {
			int num = stoi(input.substr(3));
			if (num > 0 && num <= todo.size()) {
				todo.erase(todo.begin() + num - 1);
				cout << "Removed item " << num << "\n";
			}
			else {
				cout << "Invalid number\n";
			}
		}
		else if (input == "clear" || input == "CLEAR" || input == "cls" || input == "CLS") {
			system("cls");
			cout << "'exit' to escape, 'ls' to list todos, 'rm <number>' to remove todo items, 'clear' or 'cls' to clear screen.\n";
		}
		else {
			cout << todo.size() + 1 << ". " << input << "\n";
			todo.push_back(input);
		}


	}

	return 0;
}

