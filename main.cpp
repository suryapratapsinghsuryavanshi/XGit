#include <iostream>
using namespace std;

// Custom header.
#include "C:\Users\suryp\Desktop\XGit\headers\login\login.h"

int main() {
    setCurrentUserName((char*)"TestMe");
    cout<<getCurrentUserName()<<endl;
    setCurrentLoginUserToken((char*)"xafadsfjas");
    cout<<getCurrentLoginUserToken()<<endl;
}
