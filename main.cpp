#include <iostream>
using namespace std;

// Custom header.
#include "./src/headers/login.h"
#include "./src/headers/utils.h"
#include "./src/headers/inits.h"

/**========================================================================
 * *                                Main Program
 *  All methods and functionality are in one place in this file. Some users 
 *  are familiar with CLI and some are not, so we also care about these types 
 *  of users also use our tool without any inconvenience.
 *========================================================================**/

int main(int argc, char* argv[]) {
    // logic for, decide CLI usage or basic usage.
    CLI_USAGE = argc == 1;
    if(!CLI_USAGE) {
    // Event-Driven approach for CLI-based application.

    }else {
    // Non-CLI usage or simple usage
        while(true) {
            if(!firstTimeSetupDone()) {
                string temp;
                cout<<"We did't find any configuration, plese register yourself! Enter Y/n: ";
                getline(cin, temp);
                if(temp == "Y" || temp.empty()) {
                    string name, email;
                    fflush(stdin);
                    cout<<"Enter your full name[unknown]: ";getline(cin, name);
                    fflush(stdin);
                    cout<<"Enter your email[unknown]: ";getline(cin, email);
                    setAuthorName(name);
                    setAuthorEmail(email);
                }else if(temp == "n") {
                    cout<<"Seted Author name and email [unknown].";
                    setAuthorName(AUTHOR_NAME);
                    setAuthorEmail(AUTHOR_EMAIL);
                }else {
                    cout<<"Without configuration you not forwared! Exited.";
                    break;
                }
            }else {
                int choice;
                cout<<"\n1. Add files for staging.\n2. Remove files from stage.\n3. Commit staged files.\n4. Exit"<<endl;
                cout<<"Choose one of the option: ";
                cin>>choice;
                if(!cin.fail() && (choice >= 0 && choice <= 9)) {
                    switch(choice) {
                        case 1:
                            cout<<AUTHOR_NAME<<endl;
                            break;
                        case 2:
                            cout<<AUTHOR_EMAIL<<endl;
                            break;
                        case 3:
                            cout<<AUTHOR_EMAIL<<endl;
                            break;
                        case 4:
                            cout<<"Bye :)";
                            exit(0);
                        default:
                            cout<<"Please choose an valid option!"<<choice<<endl;
                    }
                }else {
                    cout<<"Detect unusual activity! Exited."<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
