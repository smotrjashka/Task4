#include "file_system_helper.h"

//для проверочки можем ли мы открыть такую папку тут у меня была гениальная идея, но я забыла её, пока прервалась на перекус
bool file_system_helper::open_folder(std::string& folder_path){
    ///тут типа вызвали окошко для выбора в файловой системе, которое попробоало найти данную папку и вернуло фолс или тру в зависимости от того есть она или нет

    return true;
}

bool file_system_helper::open_file(std::string& folder_path, std::string& file_name){
    ///тут типа вызвали окошко для выбора в файловой системе, которое попробоало найти этот файл в этой папке и вернуло фолс или тру в зависимости от того есть он или нет
    return true;
}

//это типа чтоб сохранить в папку названный уже файл или чтоб поменять папку
std::string file_system_helper::open_folder(){
    ///тут типа вызвали окошко для выбора в файловой системе но отображающее только папки
    return "folder_name";
}

std::tuple<std::string, std::string> file_system_helper::open_file(){
    ///тут типа вызвали окошко для выбора в файловой системе
    return std::make_tuple("folder_name", "file_name");
}