/**==============================================
 * *                   INIT
 *   This file conaine all the initial codebase
 *   need to initialize a user or check the state
 *   like:
 *      - Author Info
 *      - System(PC) Name
 *=============================================**/

// User-specific constants.
bool CLI_USAGE = NULL;
bool FIRST_TIME_SETUP_DONE = false;
string AUTHOR_NAME = "unknown";
string AUTHOR_EMAIL = "unknown";
string SYSTEM_NAME = "unknown";

// User-specific methods.
void setAuthorName(char*);
void setAuthorEmail(char*);
void setSystemName(char*);
void firstTimeSetup();

#include "../lib/inits.lib"
