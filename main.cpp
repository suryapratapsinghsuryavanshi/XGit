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
                char temp;
                cout<<"We did't find any configuration, plese register yourself! Enter Y/n: ";
                cin>>temp;
                if(temp == 'Y') {
                    string name, email;
                    fflush(stdin);
                    cout<<"Enter your full name: ";getline(cin, name);
                    fflush(stdin);
                    cout<<"Enter your email: ";getline(cin, email);
                    setAuthorName((char*)name.c_str());
                    setAuthorEmail((char*)email.c_str());
                }else if(temp == 'n') {
                    setAuthorName((char*)AUTHOR_NAME.c_str());
                    setAuthorEmail((char*)AUTHOR_EMAIL.c_str());
                }else {
                    cout<<"Without configuration you not forwared! Exited.";
                    break;
                }
            }else {
                int choice;
                cout<<"Choose one of the option: ";
                cin>>choice;
                if(!cin.fail() && (choice >= 0 && choice <= 9)) {
                    switch(choice) {
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
