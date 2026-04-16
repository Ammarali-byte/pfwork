#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    string nameArr[10];
    int dateArr[10];
    double cnicArr[10];
    while (true)
    {

        // main header
        system("color 06");
        system("cls");
        cout << "     ###########        ####     ####    #######          \n";
        cout << "  ###   ####    ###   ##    ## ##    ##  ##     ##                         \n";
        cout << " ###  ##    ##   ###  ##       ##        ##      ##             \n";
        cout << " ###  ##    ##   ###    ####     ####    ## #####                         \n";
        cout << " ###   ##       ###         ##       ##  ##   ##             \n";
        cout << "  ###   ####          ##    ## ##    ##  ##     ##          \n";
        cout << "     ###########        ####     ####    ##      ##                  \n";
        cout << "  ##   ###  ##  ###                                              \n";
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
        cout << "3-Information about leepa valley \n";
        cout << "4- Exit \n";

        // taking choice from user
        string choice;
        cout << "Enter your choice ";
        cin >> choice;
        if (choice == "1")
        {
            system("cls");
            cout << "Mangement menu : \n";

            
        }
        else if (choice == "2")
        {
            system("cls");
            cout << "GUEST MENU \n";
            cout << "\nEnter your name :";
            string name;
            getline(cin, name);
            cout << "\n Enter the date of your reservation : ";
            int date;
            cin >> date;
        }
        else if (choice == "3")
        {
            system("cls");
            cout << "Information about Leepa valley kashmir \n";
            cout << "Leepa valley is located in Azad Kashmir \n";

            
        }
        else if (choice == "4")
        {
            system("cls");
            cout << "Exiting the system\n";
            break;
        }
        else
        {
            system("cls");
            cout << "Wrong option chosed \n";
        }
        cout << "\n\n\nPress any key to continue \n";
        getch();
    }
    cout << "Thanks for using this software ";
}