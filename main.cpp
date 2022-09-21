#ifdef _WIN32
    #include<windows.h>
#else
    // include those file need to rether then windown.
#endif

#include <iostream>
using namespace std;

// Custom header.
#include "src/headers/login.h"
#include "src/headers/utils.h"
#include "src/headers/inits.h"
#include "src/headers/x_git_init.h"
#include "src/headers/stage.h"
#include "src/headers/status.h"
#include "src/headers/commit.h"
#include "src/headers/log.h"
#include "src/headers/push.h"
#include "src/headers/pull.h"
#include "src/headers/branch.h"
#include "src/headers/see_branch.h"
#include "src/headers/checkout.h"

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
                if(!isDirExists(x_git_dir) && !x_git_dir_init) {
                    cout<<"1. Initialize a XGit repository.\n2. Exit"<<endl;
                    cout<<"Choose one of the option: ";
                    cin>>choice;
                    if(!cin.fail() && (choice >= 0 && choice <= 2)) {
                        switch(choice) {
                            case 1:
                                if(x_git_init()) {
                                    printColoredText("-> XGit repository initialized successfully.\n", GREEN);
                                }else {
                                    printColoredText("-> XGit repository already initialized.\n", RED);
                                }
                                break;
                            case 2:
                                printColoredText("Bye :)\n", YELLOW);
                                exit(0);
                            default:
                                cout<<"Please choose an valid option!"<<choice<<endl;
                        }
                    }else {
                        printColoredText("Detect unusual activity! Exited.\n", RED);
                        break;
                    }
                }else {
                    cout<<"\n1. Staged changes\n2. See status of files\n3. Commit staged files\n4. See commits log\n5. Push changes\n6. Pull changes\n7. Create Branch\n8. See Branch\n9. Switch Branch\n10. Clearn Screen\n11. Exit"<<endl;
                    cout<<"Choose one of the option: ";
                    cin>>choice;
                    if(!cin.fail() && (choice >= 0 && choice <= 11)) {
                        switch(choice) {
                            case 1:
                                stage();
                                printColorfulText("-> Staging successfully.\n", GREEN);
                                break;
                            case 2:
                                status();
                                break;
                            case 3:
                                commit();
                                printColoredText("-> Commited new changes successfully.\n", GREEN);
                                break;
                            case 4:
                                log();
                                break;
                            case 5:
                                push();
                                break;
                            case 6:
                                pull();
                                break;
                            case 7:
                                branch();
                                printColoredText("-> Branch created successfully.\n", GREEN);
                                break;
                            case 8:
                                printColoredText("-> Branches:\n", BLUE);
                                see_branch();
                                break;
                            case 9:
                                checkout();
                                printColoredText("-> Switched to new branch successfully.\n", GREEN);
                                break;
                            case 10:
                                clearScreen();
                                printColoredText("-> Clearned Screen.\n", GREEN);
                                break;
                            case 11:
                                printColoredText("Bye :)\n", YELLOW);
                                exit(0);
                            default:
                                cout<<"Please choose an valid option!"<<choice<<endl;
                        }
                    }else {
                        printColoredText("Detect unusual activity! Exited.\n", RED);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
