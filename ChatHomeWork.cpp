#include "ChatHomeWork.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Chat chat;
    int choice;
    string login, password, name;

    while (true) {
        cout << "1. ��������������� ������ ������������:" << endl;
        cout << "2. �����:" << endl;
        cout << "3. �����." << endl;

        cout << "������� ���� �����: ";
        cin >> choice;

        if (choice == 1) {
            cout << "������� �����: ";
            cin >> login;

            cout << "������� ������: ";
            cin >> password;

            cout << "������� ���: ";
            cin.ignore();
            getline(cin, name);

            chat.registerUser(login, password, name);
        }
        else if (choice == 2) {
            cout << "������� �����: ";
            cin >> login;

            cout << "������� ������: ";
            cin >> password;

            chat.login(login, password);
        }
        else if (choice == 3) {
            cout << "������..." << endl;
            break;
        }
        else {
            cout << "�������� �����! ��������� �����." << endl;
        }
    }

    return 0;
}
