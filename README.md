User Commands

<h2>NAME</h2>
       todo.exe - a simple command-line TODO list manager.

<h2>SYNOPSIS</h2>
       todo.exe [FILENAME]

<h2>DESCRIPTION</h2>
       TODO-LIST is a lightweight command-line TODO list manager. It allows
       users to add, remove, list, and save TODO items interactively. It
       optionally accepts a file as input to preload a list of TODO items.

       When started without a file, the program operates interactively. Users
       can enter commands to manage their TODO list. Commands are case-
       insensitive.

<h2>OPTIONS</h2>
       FILENAME
              (Optional) A file containing TODO items. Each line in the file
              should begin with "x. " (e.g., "1. Task description") to be
              processed correctly.

<h2>COMMANDS</h2>
       The following commands can be used interactively:

       exit   Exit the program.

       ls     List all TODO items. If a number follows (e.g., ls 2), it will
              display only the TODO item at that position.

       rm N   Remove the TODO item at position N (e.g., rm 2).

       purge  Remove all TODO items. Confirmation is required.

       clear  Clear the screen (Windows-specific).

       print FILENAME
              Save the TODO list to a file named FILENAME.txt. If no name is
              provided, the program prompts for one.

       help   Display a help message explaining available commands.

       Any other input
              Adds the input text as a new TODO item.

<h2>EXAMPLES</h2>
       todo.exe
              Start the program interactively without preloading TODO items.

       todo.exe mytodos.txt
              Load TODO items from mytodos.txt and start interactively.

       ls     List all current TODO items.
 
       rm 3   Remove the third TODO item.

       print mytodos
              Save the current TODO list to a file named mytodos.txt.
<h2>SCREENSHOTS</h2>
Demonstrating how easy it is to use TODO-LIST

![image](https://github.com/user-attachments/assets/a5ccddc9-7fc4-4ae4-9a16-4d4497d240e0)

<h2>INSTALLING</h2>
Windows
to use TODO-LIST, simply download the .exe file.
LINUX & OTHER OS (COMPILE FROM SOURCE)
Simply navigate to preferred download folder, either download source file or<br>

```console

git clone https://github.com/BamuelSarfi/TODO-LIST.git
cd TODO-LIST
g++ TODO-LIST.cpp -o todo
cd ..
rm -rf TODO-LIST #Gets rid of the folder.
```
NOTE: You will have to be in the same directory installed to use todo
