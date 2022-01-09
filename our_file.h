#ifndef TASK4_OUR_FILE_H
#define TASK4_OUR_FILE_H

#include <string>
#include "our_file_content.h"

class our_file {

public:
    our_file();

    our_file(const std::string &name);

    our_file(const std::string &name, const std::string &path);

    our_file(const std::string &name, const std::string &path, our_file_content& content);

    ~our_file();


    void save_current_changes();

    bool close();

    void force_close();

    //обращаем внимание что при сохранении на диск ///которое будет делать експорт
    ///у нас сохранится последняя СОХРАНЕННАЯ версия
    void save_current_changes_on_disk();


    //тут я хотела замутить сложную логику с предложением пользователю сохранить в соседний файл или в тот же, но меня шото обломало)))
    void save_current_changes_on_disk( std::string& name, const std::string &path);

    ///сделаем ролл бек только до начального/последнего сохраненного на диске а то я щя увлекусь...
    ///тут типа по идее можно было бы сохранять текущие копии по паттерну тому как его там? сопи шо ли но я вообще не поклонник такого подхода
    //лучше хранить дифы временно и то где-то в базе
    void roll_back_changes();

    our_file_content* Content();

private:
    ///тут типа должен быть экстеншн если бы мы типа поддерживали редактор например нескольких файлов изображение
    ///но упростим процесс до одного расширения
    std::string name_;
    std::string path_;
    our_file_content* content_;
    our_file_content* back_up_content_;

    our_file_content* create_empty_content();

    void alert_not_saved_changes_on_close();

    //будет енейблить обратно кнопку закрытия
    void stop_close();
    void proceed_close();


};


#endif //TASK4_OUR_FILE_H
