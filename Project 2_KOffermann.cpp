#include<iostream>
using namespace std;

	int CheckUserPermissionAccess() {

			string username;
			int password;
			int correct = 0;

			cin >> username; // There is no system in place to verify user is allowed into the system

			cout << "Enter your password:" << endl;
			cin >> password; // There is no system in place to ensure that the password matches a database

			if (password == 123) { // The password only works if it is 123 which is an easy password to guess
				correct = 1;
			}

			else {
				correct = 2;
		}

				return correct;

	}


int main() {

	cout << "Created by SNHU and Kerrian Offermann for CS-410.";

		string username;
		int password;

		cout << "Hello! Welcome to our Investment Company" << endl;
		cout << "Enter your username:" << endl;
		cin >> 	username; // No system in place to check if username is a verified user

		cout << "Enter your password:" << endl;
		cin >> password; // Outside of checking '123', there is no system in place to compare password to verified user

		int correct = CheckUserPermissionAccess();

		if (correct = 1) { // This should be "1" since '123' is the correct password and it returns "1"
		// Changed option 2 to option 1

			while (1) {

				int choice;
				// Initialized each option for each client
				int service1 = 1;
				int service2 = 2;
				int service3 = 1;
				int service4 = 2;
				int service5 = 1;
				int client, service_choice;

				cout << "What would you like to do?" << endl;
				cout << endl;
				cout << "DISPLAY the client list (enter 1)" << endl; // Added missing menu option
				cout << "CHANGE a client's choice (enter 2)" << endl; // Added missing menu option
				cout << "Exit the program.. (enter 3)" << endl; // Added missing menu option

				cin >> choice;

				if (choice = 1) {
					cout << "Client's Name" << "   " << "Service Selected (1 = Brokerage, 2 = Retirement)" << endl;
					cout << "1. Bob Jones selected option" << " " << service1 << endl;
					cout << "2. Sarah Jones selected option" << " " << service2 << endl;
					cout << "3. Amy Friendly selected option" << " " << service3 << endl;
					cout << "4. Johnny Smith selected option" << " " << service4 << endl;
					cout << "5. Carol Spears selected option" << " " << service5 << endl;
					// Removed break so the loop will not be exited prematurely.
				}
				

				if (choice = 2) {
					cout << "Enter the number of the client that you wish to change" << endl;
					cin >> client;

					if (client == 1) { 
						cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl; 
						// Added this option to each client choice.
						cin >> service_choice;
						service1 = service_choice; // Should return user to main menu after selection
					}

					if (client == 2) {
						cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
						cin >> service_choice;
						service2 = service_choice;  // Should return user to main menu after selection
					}

					if (client == 3) {
						cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
						cin >> service_choice;
						service3 = service_choice; // Should return user to main menu after selection
					}

					if (client == 4) {
						cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
						cin >> service_choice;
						service4 = service_choice; // Should return user to main menu after selection
					}

					if (client == 5) {
						cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
						cin >> service_choice;
						service5 = service_choice; // Should return user to main menu after selection
					}
			}

				if (choice = 3) {
					break;
				}
			}
		}


		else {
			cout << "Invalid password. Please try again."; // Should return user to place to re-enter credentials
		}

}
