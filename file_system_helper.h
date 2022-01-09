#ifndef TASK4_FILE_SYSTEM_HELPER_H
#define TASK4_FILE_SYSTEM_HELPER_H

#include <string>
#include <tuple>

namespace file_system_helper {

    bool open_folder(std::string& folder_path);
    bool open_file(std::string& folder_path, std::string& file_name);
    std::string open_folder();
    std::tuple<std::string, std::string> open_file();
};


#endif //TASK4_FILE_SYSTEM_HELPER_H
