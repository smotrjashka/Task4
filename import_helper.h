#ifndef TASK4_IMPORT_HELPER_H
#define TASK4_IMPORT_HELPER_H

#include <string>
#include "our_file_content.h"

namespace import_helper {
    our_file_content* import_file(std::string path, std::string name);
};


#endif //TASK4_IMPORT_HELPER_H
