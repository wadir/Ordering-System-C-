#include<iostream>
#include<cstring>
#include<map>
#include<bits-stdc++.h>
#include<conio.h>
#include<Windows.h>
using namespace std;


	char c1, check_quantity;
	float quantity;
		int selectedNum;
		double total_bill = 0;
		int flag = 0;
		map<string, double> products = {
		{"Air-cooler", 300000},
		{"Washing Machine",250000},
		{"Freezer", 350000},
		{"Pizza", 4000},
		{"Sandwich", 3500},
		{"Fish", 2000},
		{"How to influence friends", 10000},
		{"Rich Dad Poor Dad", 15000 },
		{"Habits", 30000},
		};

		map<string, int> selected_products;
		
		void printBill(map<string, double> products,
			           map<string, int> selected_products,
			           float total_bill)
		{
			cout <<"Product    " 
				<< "Quantity   "
				<< "Cost\n";
			for ( auto j = selected_products.begin();
			j != selected_products.end(); j++) {
		cout << j-> first << "           ";
	    cout << j-> second << "          ";
		cout << (selected_products[j->first])
			     *(products[j->first]) 
			<<endl;
			}
			cout << "----------SEBIR GHIRMAI TEKIE ALLI------\n";
			cout << "The Total Sum: "<<total_bill<<"\n"<<endl;
			cout << "------------***Thanks for Coming***--------\n";
			cout << "/////WE EXPECT YOU TO COME NEXT TIME\\\\\\ \n";

		}
		void customer() 
		{
			cout <<"Enter your name: ";
			string name;
			getline(cin, name);
			cout << "WELCOME  ";

			for (int i = 0;i < name.length(); i++) 
			{
				cout << char(toupper(name[i]));
			}
			cout << "\n";
		}
		void menu() {
			cout << "Menu\n";
			cout << "=  =  =  =  =  =  =  = "
				<< " =  =  =  =  = \n";
		}

		void displayMenu() {
	
			cout << "- - - - - - - - - - -";
			cout << " Categories Menu - - - - - - - - - - - \n";
			cout << "1. Eletronics\n";
			cout << "2. Food\n";
			cout << "3. Books\n";
			cout << "--------------------"
				<< " -------------------\n";
			
		}
		void showEletronicMenu() {
		
			cout << "- - - - - - - - - - "
				<< " -\nProduct           Price\n";
			cout << "1.Air-Cooler       250,000 SDG/-\n";
			cout << "2.Washing- Machine 150,000/-\n";
			cout << "3.Freezer          300,000 SDG/-\n";
			cout << "- - - - - - - - - - - - -\n";
		
		}
		void showFoodMenu() {

			cout << "- - - - - - - - - - "
				<< " \nMenu           Price\n";
			cout << "1.Pizza         2500 SDG/-\n";
			cout << "2.Sandwich      1500 SDG/-\n";
			cout << "3.Fish          3000 SDG/-\n";
			cout << "- - - - - - - - - - - - -\n";

		}
		void showBookMenu() {

			cout << "- - - - - - - - - - "
				<< " - -\nMenu                         Price\n";
			cout << "1.Poor Dad Rich Dad              2500 SDG/-\n";
			cout << "2. Habits                        1500 SDG/-\n";
			cout << "3. How to influene friends       3000 SDG/-\n";
			cout << "- - - - - - - - - - - - -\n";

		}

		void selectedElectroMenu() {
			cout << "Do you like to continue? (for YES press (Y/y ), if NO press any other letter ): ";
			cin >> c1;
			if (c1 == 'Y' || c1 == 'y' ) {
				cout << "Enter numbers by order: ";
				cin >> selectedNum;
				if   (selectedNum == 1
					|| selectedNum == 2
					|| selectedNum == 3) {

					if (selectedNum == 1) {
						cout << "You have selected Air-Cooler\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Air-Cooler with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Air-cooler"];
							selected_products["Air-cooler"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
					if (selectedNum == 2) {
						cout << "You have selected Washing Machine\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Washing Machine with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Washing Machine"];
							selected_products[""] = quantity;
							cout << "Price = Washing  Machine" << total_bill << endl;
						}
					}
					if (selectedNum == 3) {
						cout << "You have selected Freezer\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Freezer with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y'
							&& check_quantity != 'Y')
							|| (quantity < 0)
							|| (ceil(quantity)
								!= floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Freezer"];
							selected_products["Freezer"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
				}
			 else {
				 flag = 1;
			 }
	}
	else {
		flag = 1;
	}
		}
		void selectedFoodMenu() {
			cout << "Do you like to continue? (for YES press (Y/y ), if NO press any other letter ): ";
			cin >> c1;
			if (c1 == 'Y' || c1 == 'y') {
				cout << "Enter numbers by order: ";
				cin >> selectedNum;
				if (selectedNum == 1
					|| selectedNum == 2
					|| selectedNum == 3) {

					if (selectedNum == 1) {
						cout << "You have selected Pizza\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Pizza with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Pizza"];
							selected_products["Pizza"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
					if (selectedNum == 2) {
						cout << "You have selected Sandwich\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Sandwich with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Sandwich"];
							selected_products["Sandwich"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
					if (selectedNum == 3) {
						cout << "You have selected Fish\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Fish with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y'
							&& check_quantity != 'Y')
							|| (quantity < 0)
							|| (ceil(quantity)
								!= floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Fish"];
							selected_products["Fish"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
				}
				else {
					flag = 1;
				}
			}
			else {
				flag = 1;
			}
		}

		void selectedBookMenu() {
			cout << "Do you like to continue? (for YES press (Y/y ), if NO press any other letter ): ";
			cin >> c1;
			if (c1 == 'Y' || c1 == 'y') {
				cout << "Enter numbers by order: ";
				cin >> selectedNum;
				if (selectedNum == 1
					|| selectedNum == 2
					|| selectedNum == 3) {

					if (selectedNum == 1) {
						cout << "You have selected Poor Dad Rich Dad.\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Poor Dad Rich Dad with quantiy of  " << quantity;
							cout << "\nAre you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Rich Dad Poor Dad"];
							selected_products["Rich Dad Poor Dad"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
					if (selectedNum == 2) {
						cout << "You have selected Habits\n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected Habits with quantiy of " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y' && check_quantity != 'Y') || (quantity < 0)
							|| (ceil(quantity) != floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["Habits"];
							selected_products["Habits"] = quantity;
							cout << "Price = " << total_bill;
						}
					}
					if (selectedNum == 3) {
						cout << "You have selected How to influence friends. \n";
						do {
							cout << "Quantity: ";
							cin >> quantity;
							cout << "You have selected How to influence friends book with quantiy of  " << quantity;
							cout << "Are you sure to continue? (for YES press (Y/y ), if NO press any other letter ): ";
							cin >> check_quantity;
						} while ((check_quantity != 'y'
							&& check_quantity != 'Y')
							|| (quantity < 0)
							|| (ceil(quantity)
								!= floor(quantity)));
						if (check_quantity == 'y' || check_quantity == 'Y') {
							total_bill += quantity * products["How to influence friends"];
							selected_products["How to influence friends"] = quantity;
							cout << "Price = " << total_bill << endl;
						}
					}
				}
				else {
					flag = 1;
				}
			}
			else {
				flag = 1;
			}
		}
int main() {
	customer();
	do{
		displayMenu();
	cout << "Do you wish to continue?"
		<< "(for yes press (Y/y ), "
		<< " if no press other letter ): ";
	char c;
	cin >> c;
	if (c == 'Y' || c == 'y') {
		cout << "Enter respective number: ";
		int num;
		cin >> num;
		if (num == 1 || num == 2
			|| num == 3) {
			switch (num) 
			{
			case 1:

				showEletronicMenu();
					selectedElectroMenu();		
					break;

			case 2:

				showFoodMenu();
				selectedFoodMenu();
				
				break;

			case 3:
				showBookMenu();
				selectedBookMenu();
				break;
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}

} while (flag == 0);

	printBill(products, selected_products, total_bill);


	
}