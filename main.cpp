#include <iostream>
#include <vector>
#include <string>
#include "filesDAO.h"

void create_GUI(){
    /// тут типа появляется окошко (создается)
    ///появляется кнопочки
    std::cout << "imagine beautiful interface" << std::endl;
}

void fill_squears_with_recent_files_names_view(const std::vector<std::string>& vector1) {
    std::vector<std::string> views_id;
    create_n_views(views_id, vector1.size());
    for (int i = 0; i < vector1.size(); ++i) {
        
    }

}

void get_starter_interface(std::vector<std::string>& recently_edited_files){
    std::vector<std::string> recent_files;
    create_GUI();
    filesDAO::get_recent_files_from_DB(recent_files);
    fill_squears_with_recent_files_names_view(recent_files);
}

void startGUI(){
    std::vector<std::string> recently_edited_files;
    get_starter_interface(recently_edited_files);
    ///ну поскольку редактор у нас воображаемый то мы вместо реализации сделаем штуку типа вводим из консоли
    /// 0 - создаем новый
    /// 1 - значит последний редактированный файл
    //// 2 - предпоследний и т д (чтоб сильно не изгалялись оставим 4 последних)
    //// и вариант 5 типа идем выбирать файл на компе
    ///тут типа должны быть нормальные листенеры на кнопках/иконках но по скольку у меня комманды из коммандной строки то будет иф елсе
    int button_pushed;
    ///никаких проверок типа ж это не реальные действия
    /// ну только у нас будет квадратиков с возможностью жмякать в файл который мы редактируем сколько придет из базы (не больше 5ти)
    //и по идее все стринги нужно в отдельный неймспейс но это стринги-заглушки так что будут жить прям в коде
    std::cout << "for imaginary open recent files choose number grater than 0 and less then " << recently_edited_files.size() << std::endl;
    std::cin >> button_pushed;
    if (button_pushed == 0){
        create_new_file();
    } else if (button_pushed == 5) {
        invoke_GUI_for_search_file_in_file_system();
    } else {

    }
}

int main() {
    std::cout << "Hello, imaginary editor!" << std::endl;

    ///тут типа запускается наша гуишка, воображаемая
    ///и в окошке появляется такая фигня типа типа менюшечки где можно выбрать один из последних файлов или создать новый
    /// (ну как типа в нормальных редакторах бывает)
    startGUI();

    return 0;
}
