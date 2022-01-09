#include <iostream>
#include "filesDAO.h"

void filesDAO::get_recent_files_from_DB(std::vector<std::string>& v) {

    ///тут мы типа пошли в базу попросили пути посдених файлов и вернулись с ними если таковые являются
    ///ну тока надо подумать как там лучше коннекшины делать и всё такое
    ///но программа у нас воображаемая, ровно как база и как коннекшн так что просто вернем очень воображаемые пути
    v.emplace_back("path_to_first_file"); ///типа добавляем тут путь к первому филе, всмысле файлу, не мяску, но оно уже приходит запполненное из базы

    v.emplace_back("path_to_second_file");
}

void filesDAO::add_new_recent(std::string &name) {
    std::cout << "add file " << name << " to recent files and pop if we have more than 5 in DB ";
}