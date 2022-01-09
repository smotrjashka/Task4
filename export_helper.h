#ifndef TASK4_EXPORT_HELPER_H
#define TASK4_EXPORT_HELPER_H

#include <string>
#include "our_file_content.h"

namespace export_helper {
    void export_file(std::string path, std::string name, our_file_content* content_to_save);
};


#endif //TASK4_EXPORT_HELPER_H
