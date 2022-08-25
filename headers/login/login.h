#include <string>
#include <cstring>
#include <cstdlib>

// Utility CONSTANTS.
const char *X_GET_USERNAME_ENV_VAR = "x_git_username";
char *CURRENT_LOGIN_USER_NAME;

// Custom library.
#include "C:\Users\suryp\Desktop\XGit\lib\login\login.lib"

// Utility method declarations.
void setCurrentUserName(char*);
char* getCurrentUserName();
