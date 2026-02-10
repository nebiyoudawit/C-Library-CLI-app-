#include <iostream>
#include <string>
using namespace std;

int main() {
char menu;
const int MAX_SIZE = 100;
string titles[MAX_SIZE];
string authors[MAX_SIZE];
int credit[MAX_SIZE];
string isbn[MAX_SIZE];
bool available[MAX_SIZE];
int due_dates[MAX_SIZE];
string names[MAX_SIZE];
string ID[MAX_SIZE];
string emails[MAX_SIZE];
int credit3[MAX_SIZE];

int size = 0;
    char reply;
    string borrow_id;
    int attempts = 0;
    bool done = false;
    string input_username;

    // Add some books to the library
    titles[size] = "The Catcher in the Rye";
    authors[size] = "J.D. Salinger";
    isbn[size] ="612872618";
    available[size++] = true;
    credit[size]=283;

    titles[size] = "To Kill a Mockingbird";
    authors[size] = "Harper Lee";
    isbn[size] = "12187218";
    available[size++] = true;
    credit[size]=283;

    titles[size] = "1984";
    authors[size] = "George Orwell";
    isbn[size] = "12719279182";
    available[size++] = true;
    credit[size]=283;

    titles[size] = "Reference book on quantum mechanics";
    authors[size] = "PHD alfanso rajid";
    isbn[size] = "172819827";
    available[size++] = false;
    credit [size]= 0;

int siz3=0;
names[siz3] = "zake";//the long version of the pre database
 ID[siz3] = "password";
 emails[siz3]="zake76@gmail.com";
 credit3[siz3]=566;
siz3++;
 names[siz3] = "nathaniel";
 ID[siz3] = "lalaLAND";
 emails[siz3]="nati999@gmail.com";
 credit3[siz3]=566;
siz3++;
 names[siz3] = "ostin";
 ID[siz3] = "nutsonthewall1233";
 emails[siz3]="ostin12gmail.com";
 credit3[siz3]=566;
siz3++;
 names[siz3] = "jacobe";
 ID[siz3] = "ilovemeatalot";
 emails[siz3]="jac025@gmail.com";
 credit3[siz3]=566;
siz3++;
 names[siz3] = "samanta";
 ID[siz3] = "theweekendisthebestoxox";
 emails[siz3]="sami278gmail.com";
 credit3[siz3]=566;
siz3++;
    int choice;
    	main:
    	do {
    	cout << "              |~~~~~~~~~~~~~~~~~~~~~~~~~~~~|                  "<<endl;
        cout << "              |  Library Application Menu  |                  "<<endl;
        cout << "              |~~~~~~~~~~~~~~~~~~~~~~~~~~~~|                  "<<endl;
        cout << "   _______________                    ________________        "<<endl;
        cout << "1.| Display books |                2.| Member options |       "<<endl;
        cout << "   ``````````````                     ````````````````        "<<endl;
        cout << "   _____________                      _______________         "<<endl;
        cout << "3.| Add a book |                   4.| Remove a book |        "<<endl;
        cout << "   `````````````                      ````````````````        "<<endl;
        cout << "   _______________                    ______________          "<<endl;
        cout << "5.| Borrow a book |                6.| Return Books |         "<<endl;
        cout << "   ```````````````                    ```````````````         "<<endl;
        cout << "   ________________                   _______________         "<<endl;
        cout << "7.| Search a book |                8.| Excepion fees |        "<<endl;
        cout << "   `````````````````                  ````````````````        "<<endl;
        cout<<  "                       ______                                 "<<endl;
        cout << "                    9.| Exit |                                "<<endl;
        cout << "                       ```````                                "<<endl;

        cout << "Enter your choice (1-10): ";
		cin >> choice;

        switch (choice){
            case 1:
                {
                system("cls");
                for (int i = 0; i <size; i++) {
                    cout << "Title: " << titles[i] << endl;
                    cout << "Author: " << authors[i] << endl;
                    cout << "ISBN: " << isbn[i] << endl;
                    if (available[i]) {
                        cout << "Status: Available\n";
                    } else {
                        cout << "Status: Not available\n";
                    }
                    cout << endl;
                }
            cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
            cin>>menu;
            if (menu=='#')return 0;
            else{
                system ("cls");
                break;}
        }
            case 2:
            	{
                int n;
				system("cls");
            	do{
                cout << "                  _____________"<< endl;
            	cout << "                ~|Member option|~ " << endl;
            	cout <<"    ______________ `````````````      ____________"<< endl;
           		cout << "1.|Display members|               2.|Add a member|"<< endl;
  				cout << "   _______________                   _____________________"<< endl;
    			cout << "3.|Remove a member|               4.|Modify member details|"<<endl;
    			cout << "                       _______"  << endl;
    			cout << "                    5.|Go back|"  << endl<<endl;
   				cout << "Enter your choice: ";
   				cin >> n;
   				switch (n) {
                        case 1:
                            system("cls");
                            for (int i = 0; i < size; i++) {
                            cout << "Name: " << names[i] << endl;
                            cout << "ID: " << ID[i] << endl;
                            cout << "Email: " << emails[i] << endl;
                            cout << "Credit: " << credit[i] << endl;
                            cout << endl;
                            }
                            cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                            cin>>menu;
                            if (menu=='#')return 0;
                            else{
                                system ("cls");
                                    break;
                                    }
                        case 2:
                            system ("cls");
                            if (size < MAX_SIZE) {
                            cin.ignore();
                            cout << "Enter the member name: ";
                            getline(cin,names[size]);
                            cout << "Enter the member ID: ";
                            getline(cin,ID[size]);
                            cout << "Enter the member email: ";
                            getline(cin,emails[size]);
                            size++;
                            cout << "you have 566 as welcome package";
                            credit[size]=566;
                            cout << "Member added successfully\n";
                            } else {
                            cout << "The member list is full\n";
                            }
                            cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                            cin>>menu;
                                if (menu=='#')return 0;
                                else{
                                    system ("cls");
                                    break;
                                    }
                    case 3:
                       {

                        string memberid;
                        cout << "Enter the name of the member id to remove: ";
                        cin >> memberid;
                        bool memberFound = false;
                            for (int i = 0; i < siz3; i++) {
                                if (ID[i] == memberid) {
                                    for (int j = i; j < siz3 - 1; j++) {
                                    names[j] = names[j + 1];
                                    ID[j] = ID[j + 1];
                                    emails[j] = emails[j + 1];
                                    credit3[j] = credit3[j + 1];
                            }
                        siz3--;
                        memberFound = true;
                        cout << "Member removed successfully.\n";
                        break;
            }
        }

        if (!memberFound) {
            cout << "Member not found.\n";
        }

        break;
    }
                    case 4:
                    {
                        system("cls");
                        string modify_name;
                        cout << "Enter the name of the member you want to modify: ";
                        cin >> modify_name;
                        bool found = false;
                        for (int i = 0; i < size; i++) {
                        if (names[i] == modify_name) {
                        cout << "Enter the new ID: ";
                        cin >> ID[i];
                        cout << "Enter the new email: ";
                        cin >> emails[i];
                        cout << "Member details modified successfully\n";
                        found = true;
                        cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                        cin>>menu;
                            if (menu=='#')return 0;
                            else{
                            system ("cls");
                            break;}
                        }
                            }
                        if (!found)
                         cout << "Member not found\n";
                    }
                    cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                    cin>>menu;
                        if (menu=='#')return 0;
                        else{
                            system ("cls");
                            break;}
                        }
                    if(n>=5){
                            system ("cls");
                            goto main;}
                }while(n!=5);

	case 3:{
            system ("cls");
            if (size>=MAX_SIZE){
                cout<<"Library if full"<<endl;
                    return 0;
                     }
            cin.ignore();
            cout<<"Enter the title of the book\n";
            getline(cin,titles[size]);
            cout<<"Enter the author of the book\n";
            getline(cin,authors[size]);
            cout<<"Enter the Isbn of the book\n";
            getline(cin,isbn[size]);
            available[size++];
            cout<<"New book added succesfully!";
            cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
            cin>>menu;
                if (menu=='#')return 0;
                   else{
                       system ("cls");
                       break;
                    }
			}
    case 4:{
        system ("cls");
        string isbn_n;
        cout << "Enter the isbn of the book to remove: ";
        cin >> isbn_n;
        bool bookFound = false;
        for (int i = 0; i < size; i++) {
            if (isbn[i] == isbn_n) {
                for (int j = i; j < size - 1; j++) {
                    titles[j] = titles[j + 1];
                    authors[j] = authors[j + 1];
                    isbn[j] = isbn[j + 1];
                    available[j] = available[j + 1];
                    credit[j] = credit[j + 1];
                }
                size--;
                bookFound = true;
                cout << "Book removed successfully.\n";
                cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                cin>>menu;
                if (menu=='#')return 0;
                else{
                    system ("cls");
                    break;
                }
            }
        }

        if (!bookFound) {
            cout << "Book not found in the library.\n";
        }

            break;
    }

            case 5:
                system("cls");
                cout << "Enter username: ";
                cin >> input_username;
            	for (int i = 0; i < size; i++){
            	while(names[i]==input_username){
            		cout << "Name not found. Try again.\n";
            		cin >> input_username;}
				}
                cout << "Enter the ID of the book you want to borrow: ";
                cin >> borrow_id;
                for (int i = 0; i < size; i++) {
					while (isbn[i]!=borrow_id) {
                    cout << "Book not found. Try again";
					cin >> borrow_id;
                }
                	if (available[i]) {
                        available[i] = false;
                    if (isbn[i] == borrow_id) {

                            cout << "Book borrowed successfully\n";
                            done = true;
                            goto main;
                        }

						}
						 else {
							if(credit[i]==0)
							{
							cout<< "Reference books cannot be borrowed\n";
							break;}
						  else{

                            cout << "Book not available\n";
                            done = true;
                            break;
                        }
                       }

                      }
                      break;

            case 6:
                system("cls");
                attempts = 0;
                cout << "Enter the ID of the book you want to return: ";
                cin >> borrow_id;
                for (int i = 0; i < size; i++) {
                    if (isbn[i] == borrow_id) {
                        if (!available[i]) {
                            available[i] = true;
                            cout << "Book returned successfully\n";
                            done = true;
                            break;
                        } else {
                            cout << "This book is already available\n";
                            done = true;
                            goto main;
                        }
                    }
                }
                if (!done) {
                    cout << "Book not found\n";
                }
                goto main;
            case 7:{

                system("cls");
                int choice;
                cout << "Search by:\n1. Title\n2. Author\n3. ID\n4. go back\n";
                cin >> choice;
                string search_input;
                bool found = false;
                    if(choice==1){
                        cout << "Enter the title of the book: ";
                        cin >> search_input;
                        for (int i = 0; i < size; i++) {
                            if (titles[i] == search_input) {
                                cout << "Title: " << titles[i] << endl;
                                cout << "Author: " << authors[i] << endl;
                                cout << "ID: " << isbn[i] << endl;
                                if (available[i]) {
                                    cout << "Status: Available\n";
                                } else {
                                    cout << "Status: Not available\n";
                                }
                                cout << endl;
                                found = true;
                                break;
                            }
                            else
                            cout << "not avaliable\n";
                            break;
                        }
                        return main();
                    }
                    if(choice==2){
                        cout << "Enter the author of the book: ";
                        cin >> ws >> search_input;
                        for (int i = 0; i < size; i++) {
                            if (authors[i] == search_input) {
                                cout << "Title: " << titles[i] << endl;
                                cout << "Author: " << authors[i] << endl;
                                cout << "ID: " << isbn[i] << endl;
                                if (available[i]) {
                                    cout << "Status: Available\n";
                                } else {
                                    cout << "Status: Not available\n";
                                }
                                cout << endl;
                                found = true;

                            }
                        }
                       return main();
					   }

                    if(choice==3){
                        cout << "Enter the ID of the book: ";
                        cin >> search_input;
                        for (int i = 0; i < size; i++) {
                            if ((isbn[i]) == search_input) {
                                cout << "Title: " << titles[i] << endl;
                                cout << "Author: " << authors[i] << endl;
                                cout << "ID: " << isbn[i] << endl;
                                if (available[i]) {
                                    cout << "Status: Available\n";
                                } else {
                                    cout << "Status: Not available\n";
                                }
                                cout << endl;
                                found = true;
                                return main();
                            }
                        }
                    }
                    if(choice==4){
					cout<<"press any key to go back to the main menu press, press # if you want to exit: ";
                    cin>>menu;
                    if (menu=='#')return 0;
                    else{
                        system ("cls");
                        break;
                    }
                    }
                    else
                        cout << "Invalid choice\n";

                if (!found) {
                    cout << "Book not found\n";
                }
                return main();}

            case 8:
            	cout << "1.damaged book\n";
            	cout << "2.unreturned book\n";
            	cout << "3.lost book\n";
            	cout << "4.overdue fees\n";
            	cin >> choice;
            switch (choice){
            	case 1:
            	cin.ignore();
				cout << "Enter the damaged book ID: ";
            	cin >> borrow_id;
            	cout << "who damaged it? ";
            	cin >> input_username;
            	for (int i = 0; i < size; i++)
            	if(names[i]==input_username)
                for (int i = 0; i < size; i++) {
                    if (isbn[i] == borrow_id)
					{
						cout << "385 credit will not be returned\n";
						credit3[i]-=385;
              			}
              			break;

            }


             case 2:
            	cout << "Enter the unreturned book ID:";
            	cin >> borrow_id;
            	cout << "who damaged it? ";
            	cin >> input_username;
            	for (int i = 0; i < size; i++)
            	if(names[i]==input_username)
                for (int i = 0; i < size; i++) {
                    if (isbn[i] == borrow_id)
					 {
					 	cout << "385 credit will not be returned\n";
					 	credit3[i]-=385;
            			}
            			break;
				}

			case 3:
			 cout << "Enter the lost book ID: ";
            	cin >> borrow_id;
            	cout << "who damaged it? ";
            	cin >> input_username;
            	for (int i = 0; i < size; i++)
            	if(names[i]==input_username)
                for (int i = 0; i < size; i++) {
                    if (isbn[i] == borrow_id)
					{
					cout << "385 credit will not be returned\n";
					credit3[i]-=385;

						}
						break;
			}

		}
            case 9: {
                cout << "Goodbye!\n";
                return 0;
            }

            default: {
                cout << "Invalid input\n";
                break;
            }
        }


 }

}while (choice!=9);
return 0;
}
