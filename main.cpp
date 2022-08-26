#include <iostream>
using namespace std;

// Custom header.
#include "./src/headers/login.h"

int main() {
    setCurrentUserName((char*)"TestMe");
    cout<<getCurrentUserName()<<endl;
    setCurrentLoginUserToken((char*)"afadsfjas");
    cout<<getCurrentLoginUserToken()<<endl;
}
