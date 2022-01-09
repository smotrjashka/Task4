#include <iostream>
#include "our_file_content.h"

void our_file_content::treat_content(){
    std::cout << "d stuff with content" << std::endl;
}

our_file_content::our_file_content() {
    create_default_file_body();
    create_default_file_header();
    create_default_file_metadata();
}

our_file_content::our_file_content(const our_file_content &other_file_content) : header_(other_file_content.header_),
            body_(other_file_content.body_), specific_metadata_(other_file_content.specific_metadata_) {

}

///ну это по идее все сложные структуры с разметками но у мну так
void our_file_content::create_default_file_header(){
    header_ = "def_header";
}

void our_file_content::create_default_file_body(){
    body_->emplace_back("default body content line");
}

void our_file_content::create_default_file_metadata(){
    specific_metadata_ = "def_sped_meta";
}