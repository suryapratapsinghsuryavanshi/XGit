#include <string>
#include <cstring>
#include <cstdlib>

// Utility CONSTANTS.
const char *X_GIT_USERNAME_ENV_VAR = "x_git_username";
char *CURRENT_LOGIN_USER_NAME;

const char *X_GIT_LOGIN_USER_TOKEN = "x_git_token";
char *CURRENT_LOGIN_USER_TOKEN;

// Custom library.
#include "C:\Users\suryp\Desktop\XGit\lib\login\login.lib"

// Utility method declarations.
void setCurrentUserName(char*);
char* getCurrentUserName();
void setCurrentLoginUserToken(char*);
char* getCurrentLoginUserToken();
