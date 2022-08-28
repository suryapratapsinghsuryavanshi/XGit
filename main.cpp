#include <iostream>
using namespace std;

// Custom header.
// #include "./src/headers/login.h"
#include "./src/headers/init.h"
#include "./src/headers/utils.h"

/**========================================================================
 * *                                Main Program
 *  All methods and functionality are in one place in this file. Some users 
 *  are familiar with CLI and some are not, so we also care about these types 
 *  of users also use our tool without any inconvenience.
 *========================================================================**/

int main(int argc, char* argv[]) {
    // logic for, decide CLI usage or basic usage.
    CLI_USAGE = argc == 1;
    if(CLI_USAGE) {
    // Event-Driven approach for CLI-based application.

    }else {
    // Non-CLI usage or simple usage

    }
    return 0;
}
