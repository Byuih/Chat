#include "ChatHomeWork.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Chat chat;
    int choice;
    string login, password, name;

    while (true) {
        cout << "1. Зарегистрируйте нового пользователя:" << endl;
        cout << "2. Логин:" << endl;
        cout << "3. Выход." << endl;

        cout << "Введите свой выбор: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Введите логин: ";
            cin >> login;

            cout << "Введите пароль: ";
            cin >> password;

            cout << "Введите имя: ";
            cin.ignore();
            getline(cin, name);

            chat.registerUser(login, password, name);
        }
        else if (choice == 2) {
            cout << "Введите логин: ";
            cin >> login;

            cout << "Введите пароль: ";
            cin >> password;

            chat.login(login, password);
        }
        else if (choice == 3) {
            cout << "Выхожу..." << endl;
            break;
        }
        else {
            cout << "Неверный выбор! Пробовать снова." << endl;
        }
    }

    return 0;
}
