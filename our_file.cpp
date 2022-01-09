#include <iostream>
#include "our_file.h"
#include "export_helper.h"
#include "file_system_helper.h"
#include <tuple>

our_file::our_file(const std::string &name) : name_(name), path_(""){
    create_empty_content();
}

our_file::our_file(const std::string &name, const std::string &path) : name_(name), path_(path){
    create_empty_content();
}

our_file::our_file(const std::string &name, const std::string &path, our_file_content& content) : name_(name),
                            path_(path) {

    ///тут типа должны быть ещё какие-то проверки
    content_ = new our_file_content(content);
}

our_file::our_file() : name_(""), path_(""){
    create_empty_content();
}


void our_file::roll_back_changes() {

    content_ = new our_file_content(*back_up_content_);
}

our_file_content *our_file::create_empty_content() {

    return new our_file_content();
}

void our_file::alert_not_saved_changes_on_close(){
    std::cout << "you try to close file with unsaved changes pls push 1 to save changes or 0 to close anyway" << std::endl;
    int pushed_button;
    std::cin>>pushed_button;
    if (pushed_button){
        save_current_changes();
        if (!name_.empty() && !path_.empty()) {
            save_current_changes_on_disk(name_, path_);
        } else save_current_changes_on_disk();
    } else {
        force_close();
    }
}

//будет енейблить обратно кнопку закрытия
void our_file::stop_close(){
    std::cout << "we stopped closing all wil be as before ";
}
void our_file::proceed_close(){

    delete this;
}

our_file_content* our_file::Content(){
    return content_;
}

our_file::~our_file() {
    content_ = nullptr;
    back_up_content_ = nullptr;
    name_ = "";
    path_ = "";
}

void our_file::save_current_changes(){
    back_up_content_ = new our_file_content(*content_);
}

bool our_file::close(){
    ///ну вообще надо сравнивать содержимое но пока будет так
    if (back_up_content_==content_){
        force_close();
    } else {
        ///наш уже полюбившийся имитатор кнопок
        alert_not_saved_changes_on_close();
    }
}

void our_file::force_close(){
    ///тут я подразумевала какие-то еще действия но какие??
    proceed_close();
}

//обращаем внимание что при сохранении на диск ///которое будет делать експорт
///у нас сохранится последняя СОХРАНЕННАЯ версия
void our_file::save_current_changes_on_disk(){

    std::tuple<std::string, std::string> t = file_system_helper::open_file();
    save_current_changes_on_disk(std::get<0>(t), std::get<1>(t));
}


//тут я хотела замутить сложную логику с предложением пользователю сохранить в соседний файл или в тот же, но меня шото обломало)))
void our_file::save_current_changes_on_disk( std::string& name, const std::string &path){
    export_helper::export_file(name, path, content_);
}