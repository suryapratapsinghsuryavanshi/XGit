#include <cstring>
#include <fstream>

// Containe all the utility method, needed.

// Utils config file path.
#ifdef _WIN32
    #include <sysinfoapi.h>
    const char* UTILS_CONFIG_FILE = strcat(getenv("USERPROFILE"), "\\.xgitconfig");
    const int ESCAPE_SIZE = 1;
#else
    const char* UTILS_CONFIG_FILE = "/usr/bin/.xgitconfig";
    const int ESCAPE_SIZE = 2;
#endif

/**
 * @brief Set the enviroment variable, take key and value as pair.
 * @param key key for env vairable.
 * @param value value for env vairable value.
 * @return Not return anything.
 */
void setUtilData(char*, char*);

/**
 * @brief Get the enviroment variable value.
 * @param key key for retriving env variable value.
 * @return Return corosponding env variable value, else NULL.
 */
char* getUtilData(char*);

#include "../lib/utils.lib"
