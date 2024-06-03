//written by @BamuelSarfi
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

int main()
{
	
	vector<string> todo;
	string input;
	
	cout << "**Welcome to simple TODO list. type 'exit' at any time to escape**\nTo remove a todo, type 'rm' before the number of the todo.\nTo view todos at any time, type 'ls' to list them numerical order.\nType 'print' to put the todos in a text file\nType 'purge' to remove all todos\nType 'clear' or 'cls' to clear screen.\n";
	
	while (true)
	{
		int x = 0;

		cout << "Enter here >> ";
		getline(cin, input);
		//exit
		if (input == "exit" || input == "EXIT") {
			cout << "Bye Bye...";
			return 0;
		}
		//list todos
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
		//list todos e.g ls 2
		else if (input.rfind("ls ", 0) == 0) {
			int num = stoi(input.substr(3));
			if (num > 0 && num <= todo.size()) {
				cout << num << ". " << todo[num - 1] << "\n";
			}
			else {
				cout << "Invalid number\n";
			}
		}
		else if (input.rfind("LS ", 0) == 0) {
			int num = stoi(input.substr(3));
			if (num > 0 && num <= todo.size()) {
				cout << num << ". " << todo[num - 1] << "\n";
			}
			else {
				cout << "Invalid number\n";
			}
		}
		//remove todo e.g rm 2
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
		//remove todo e.g RM 2
		else if (input.rfind("RM ", 0) == 0) {
			int num = stoi(input.substr(3));
			if (num > 0 && num <= todo.size()) {
				todo.erase(todo.begin() + num - 1);
				cout << "Removed item " << num << "\n";
			}
			else {
				cout << "Invalid number\n";
			}
		}
		//remove all todos
		else if (input == "purge" || input == "PURGE") {
			char choice;
			if (todo.size() != 0) {
				cout << "Are you sure you want to remove all items? (y/n) >> ";
				cin >> choice;
				if (choice == 'y' || choice == 'Y') {
					todo.clear();
					cout << "Removed all items\n";
				}
			}
			else {
				cout << "There is nothing to remove. Try adding some todos\n";
			}
		}
		//clears screen
		else if (input == "clear" || input == "CLEAR" || input == "cls" || input == "CLS") {
			system("cls");
			cout << "'exit' to escape, 'ls' to list todos, 'rm <number>' to remove todo items, 'clear' or 'cls' to clear screen,\n'purge' to remove all todos, 'print' to put the todos in a text file.\n";
		}
		//print to file
		else if (input == "print" || input == "PRINT") {
			string fileName;
			cout << "Enter name for file >> ";
			getline(cin, fileName);
			
			ofstream myFile(fileName + ".txt");
			if (myFile.is_open() && todo.size() != 0) {
				cout << fileName << ".txt\n";
				for (x = 0; x < todo.size(); x++) {
					myFile << x + 1 << ". " << todo[x] << "\n";
				}
				myFile.close();
				cout << "File " << fileName << " created!\n";
			}
			else cout << "There is nothing to print. Try adding some todos\n";
		}
		//print to file e.g print todo.txt
		else if (input.rfind("print ", 0) == 0) {
			string fileName = input.substr(6);
			ofstream myFile(fileName + ".txt");
			if (myFile.is_open() && todo.size() != 0) {
				for (x = 0; x < todo.size(); x++) {
					myFile << x + 1 << ". " << todo[x] << "\n";
				}
				myFile.close();
				cout << "File " << fileName << ".txt" << " created!\n";
			}
			else cout << "There is nothing to print. Try adding some todos\n";
		}
		else if (input.rfind("PRINT ", 0) == 0) {
			string fileName = input.substr(6);
			ofstream myFile(fileName + ".txt");
			if (myFile.is_open() && todo.size() != 0) {
				for (x = 0; x < todo.size(); x++) {
					myFile << x + 1 << ". " << todo[x] << "\n";
				}
				myFile.close();
				cout << "File " << fileName << ".txt" << " created!\n";
			}
			else cout << "There is nothing to print. Try adding some todos\n";
		}
		////////////////////////////////////////////////////////////////////////
		else {
			cout << todo.size() + 1 << ". " << input << "\n";
			todo.push_back(input);
		}
	}
	
	return 0;
}

