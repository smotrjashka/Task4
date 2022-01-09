#ifndef TASK4_FILESDAO_H
#define TASK4_FILESDAO_H
#include <vector>
#include <string>

class filesDAO {
public:
    void static get_recent_files_from_DB(std::vector<std::string>& v);

    void static add_new_recent(std::string& name);
};


#endif //TASK4_FILESDAO_H
