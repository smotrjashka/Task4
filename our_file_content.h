#ifndef TASK4_OUR_FILE_CONTENT_H
#define TASK4_OUR_FILE_CONTENT_H


#include <string>
#include <vector>

class our_file_content {

public:


    our_file_content();
    our_file_content(const our_file_content& other_file_content);
    void treat_content();

  /*  std::string Header();
    std::string Body();
    std::string Content();*/

private:
    std::string header_;
    std::vector<std::string>* body_;
    std::string specific_metadata_; ///ничего лучше не придумала

    void create_default_file_header();
    void create_default_file_body();
    void create_default_file_metadata();
};


#endif //TASK4_OUR_FILE_CONTENT_H
