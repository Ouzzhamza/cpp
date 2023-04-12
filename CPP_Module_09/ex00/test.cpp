#include <iostream>
#include <cstring>
#include <ctime>

int main() {
    std::string format = "%Y-%m-%d";
    std::string date_string = "2001-011-10";
    struct tm time_info;

    if (strptime(date_string.c_str(), format.c_str(), &time_info) != NULL) {
        if (time_info.tm_mday >= 1 && time_info.tm_mday <= 31
            && time_info.tm_mon >= 0 && time_info.tm_mon <= 11
            && time_info.tm_year >= 0) {
                std::cout << time_info.tm_mday << std::endl;
            std::cout << "The date string follows the strftime format." << std::endl;
        } else {
            std::cout << "The date string does not follow the strftime format." << std::endl;
        }
    } else {
        std::cout << "The date string does not follow the strftime format." << std::endl;
    }

    return 0;
}
