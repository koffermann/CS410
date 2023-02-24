#include<iostream>
using namespace std;

	int CheckUserPermissionAccess() {

			string username;
			int password;
			int correct = 0;

			cin >> username;

			cout << "Enter your password:" << endl;
			cin >> password;

			if (password == 123) {
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


		cout << "Hello! Welcome to out Investment Company" << endl;
		cout << "Enter your username:" << endl;
		cin >> 	username;

		cout << "Enter your password:";
		cin >> password;

		int correct = CheckUserPermissionAccess();

		if (correct = 2) {

			while (1) {

				int choice, service1, service2, service3, service4, service5;
				string name1, name2, name3, name4, name5;

				cout << "What would you like to do?";
				cin >> choice;

				if (choice = 1) {

					cout << "Client's Name" << "   " << "Service Selected (1 = Brokerage, 2 = Retirement)";
					cout << "1. Bob Jones selected option" << " " << service1;
					cout << "2. Sarah Jones selected option" << " " << service2;
					cout << "3. Amy Friendly selected option" << " " << service3;
					cout << "4. Johnny Smith selected option" << " " << service4;
					cout << "5. Carol Spears selected option" << " " << service5;

					break;


				}

				if (choice = 2) {

					int client, service_choice;

					cout << "Enter the number of the client that you wish to change" << endl;
					cin >> client;
					cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
					cin >> service_choice;

					if (client == 1) {
						service1 = service_choice;
					}

					if (client == 2) {
						service2 = service_choice;
					}

					if (client == 3) {
						service3 = service_choice;
					}

					if (client == 4) {
					service4 = service_choice;
					}

					if (client == 5) {
					service5 = service_choice;
					}


			}


				if (choice = 3) {
					break;
				}

			}



		}


		else {
			cout << "Invalid password. Please try again.";
		}




}
