#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    while (true)
    {
        //main header
        system("color 06");
        // system("cls");
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
        cout<<"3-Information about leepa valley \n";
        cout<<"4- Exit \n";

        //taking choice from user
        string choice;
        cout << "Enter your choice ";
        cin>>choice;
        if (choice == "1")
        {
            // system("cls");   
            cout << "Mangement menu : \n";
        }
        else if (choice == "2")
        {
            system("cls");
            cout << "GUEST MENU \n";
            cout<<"Enter your name :";
            string name;
            getline(cin, name);
            cout<<"Enter the date of your reservation : ";
            
        }
        else if (choice == "3")
        {
            system("cls");
            cout << "Information about Leepa valley kashmir \n";
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
    }
    cout<<"Thanks for using this software ";
}