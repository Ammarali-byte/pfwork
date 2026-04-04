#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    while (true)
    {
        //main header
        system("color 06");
        cout << "     ###########         ####     \n";  
        cout << "  ###   ####    ###     ##   ##                                           \n";
        cout << " ###  ##    ##   ###     ####                                        \n";
        cout << " ###  ##    ##   ###    ##   ##                                            \n";
        cout << " ###   ##       ###          ##                               \n";
        cout << "  ###   ####                                                \n";
        cout << "     ###########                                                 \n";
        cout << "  ##   ###  ##  ###                                               \n";
        cout << " ###   ###   ##  ###                                              \n";
        cout << " ###   ###    ##  ###                                              \n";
        cout << " ###   ###     ##  ###                                               \n";
        cout << " ###   ###      #####                                         \n";
        cout << "                                                              \n";
        cout << "                                                              \n";
        cout << "                                                              \n";
        cout << "                                                              \n";
        cout << "Welcome to SERENITY SPRING RESORT \n";
        cout << "1-Management menu \n";
        cout << "2-Guest menu \n";
        cout<<"3-Information about leepa valley \n";
        cout<<"4- Exit \n";

        //taking choice from user
        string choice;
        cout << "Enter your choice ";
        cin>>choice;
        if (choice == "1")
        {
            cout << "Mangement menu : \n";
        }
        else if (choice == "2")
        {
            cout << "GUEST MENU \n";
        }
        else if (choice == "3")
        {
            cout << "Information about Leepa valley kashmir \n";
        }
        else if (choice == "4")
        {
            cout << "Exiting the system\n";
            break;
        }
        else
        {
            cout << "Wrong option chosed \n";
        }
    }
    cout<<"Thanks for using this software ";
}