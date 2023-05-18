# securitysystem
This  code is a basic security implementation of security system in c++. It allows users to register, login, change their password, and exit the program.
It includes necessary libraries and defines several variables and arrays for storing user information.
The program displays a menu of options: Register, Login, Change Password, and Exit.
It enters a loop where the user is prompted to enter a choice.
Based on the user's choice, the program executes the corresponding functionality.
Case 1: Register - User provides a username, password, and age. The information is stored in a file named "file.txt".
Case 2: Login - User enters a username and password. The program reads the stored information from "file.txt" and checks if the entered credentials match. If successful, it displays the user's details.
Case 3: Change Password - User enters the old password. The program reads the stored information and checks if the old password matches. If successful, the user can enter and confirm a new password, which is then updated in "file.txt".
Case 4: Exit - The program terminates.
Default: Displays an error message for an invalid choice.
The loop continues until the user chooses to exit.
While the code appears to work, there are some areas where it could be improved, such as handling file operations more robustly, avoiding the use of "using namespace std" globally, and improving the overall code structure and organization.
