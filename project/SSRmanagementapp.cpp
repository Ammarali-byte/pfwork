
#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    // DATA Structures

    int room, month, date;
    int index;
    string guestnames[3720];
    string allguestnames[3720];
    int daystay[3720];
    int alldaystay[3720];
    int roomprice[11];
    int roomstatus[3720];
    int allroomstatus[3720];

    // login crediantials
    int pin[3];
    int correctpin = 1234;
    string username;
    string correctusername = "management";

    // intializing room availability
    for (int i = 0; i < 3720; i++)
    {
        roomstatus[i] = 0;
        allroomstatus[i] = 0;
    }

    // Room prices
    roomprice[1] = 7500;
    roomprice[2] = 7500;
    roomprice[3] = 7500;
    roomprice[4] = 7500;
    roomprice[5] = 10000;
    roomprice[6] = 10000;
    roomprice[7] = 10000;
    roomprice[8] = 10000;
    roomprice[9] = 15000;
    roomprice[10] = 15000;

    while (true)
    {

        // main header

        system("cls");
        cout << "     ###########        ####     ####    #######          \n";
        cout << "  ###   ####    ###   ##    ## ##    ##  ##     ##        \n";
        cout << " ###  ##    ##   ###  ##       ##        ##      ##       \n";
        cout << " ###  ##    ##   ###    ####     ####    ## #####         \n";
        cout << " ###   ##       ###         ##       ##  ##   ##          \n";
        cout << "  ###   ####          ##    ## ##    ##  ##     ##        \n";
        cout << "     ###########        ####     ####    ##      ##       \n";
        cout << "  ##   ###  ##  ###                                       \n";
        cout << " ###   ###   ##  ###                                      \n";
        cout << " ###   ###    ##  ###                                     \n";
        cout << " ###   ###     ##  ###                                    \n";
        cout << " ###   ###      #####                                     \n";

        // main menu
        cout << "-------------------------------------------------------\n";
        cout << "-----------Welcome to SERENITY SPRING RESORT----------- \n";
        cout << "-------------------------------------------------------\n";
        cout << "1 - Management menu \n";
        cout << "2 - Guest menu \n";
        cout << "3 - Exit \n";

        // taking choice from user
        string choice;
        cout << "Enter your choice ";
        cin >> choice;
        if (choice == "1")
        {

            system("cls");
            // taking login credintials from admin
            bool login = false;
            for (int i = 0; i < 3; i++)
            {
                cout << "Enter username ";
                cin >> username;
                cout << "Enter pin";
                cin >> pin[i];
                if (username == correctusername && pin[i] == correctpin)
                {
                    cout << "Login Successfull \n";
                    login = true;
                    break;
                }
                else
                {
                    cout << "Wrong username or Password \n";
                }
            }
            if (login == true)
            {
                while (true) // start of while  loop in admin menu
                {
                    system("cls");
                    // management menu
                    cout << "-------------------------------------------------------\n";
                    cout << "--------------------Management menu--------------------\n";
                    cout << "-------------------------------------------------------\n";
                    cout << "1 - Add booking     \n";
                    cout << "2 - Search booking \n";
                    cout << "3 - Check out      \n";
                    cout << "4 - show available rooms \n";
                    cout << "5 - Check  all time Reservation  \n";
                    cout << "6 - Exit \n";
                    // taking choice from admin
                    string adminchoice;
                    cout << "Enter your choice : ";
                    cin >> adminchoice;
                    // Room Booking code
                    if (adminchoice == "1")
                    {

                        cout << "\nEnter Date(1-31) ";
                        cin >> date;
                        if (date < 1 || date > 31)
                        {
                            cout << "Invalid date. Please enter 1-31.\n";
                            getch();
                            continue;
                        }
                        cout << "\nEnter month (1-12) ";
                        cin >> month;
                        if (month < 1 || month > 12)
                        {
                            cout << "Invalid month. Please enter 1-12.\n";
                            getch();
                            continue;
                        }

                        cout << "Rooms No 1 to 4 are standard  (Price = RS 7500) \n";
                        cout << "Rooms No 5 to 8 are Deluxe  (Price = RS 10000)\n";
                        cout << "Rooms No 9 and 10 are Suite ( Price = RS 15000)\n";
                        cout << "\nEnter Room number (1-10) ";
                        cin >> room;
                        if (room < 1 || room > 10)
                        {
                            cout << "Invalid room number. Please enter 1-10.\n";
                            getch();
                            continue;
                        }
                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                        if (roomstatus[index] == 0)
                        {
                            cout << "Enter your name : ";
                            cin.ignore();
                            getline(cin, guestnames[index]);
                            allguestnames[index] = guestnames[index];
                            cout << "How many days you want to stay : ";
                            cin >> daystay[index];
                            alldaystay[index] = daystay[index];
                            if (room <= 4)
                            {
                                cout << "--------Standard Room------- " << endl;
                                cout << "You successfully booked Standard room  No " << room;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }

                            else if (room > 3 && room <= 8)
                            {
                                cout << "-------Deluxe  Room-------- " << endl;
                                cout << "You successfully booked Deluxe room  No " << room;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }
                            else if (room > 8 && room <= 10)
                            {
                                cout << "-------SWeet  Room-------- " << endl;
                                cout << "You successfully booked Suite  room  No " << room;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }

                            else
                            {
                                cout << "No such room available";
                            }
                        }
                        else
                        {
                            cout << " Soory for Inconvience \n Room is not available  ";
                        }
                        cout << "Press any key to continue ";

                        getch();
                    }
                    // search booking code
                    else if (adminchoice == "2")
                    {
                        cout << "\nEnter Date(1-31) ";
                        cin >> date;
                        if (date < 1 || date > 31)
                        {
                            cout << "Invalid date. Please enter 1-31.\n";
                            getch();
                            continue;
                        }
                        cout << "\nEnter month (1-12) ";
                        cin >> month;
                        if (month < 1 || month > 12)
                        {
                            cout << "Invalid month. Please enter 1-12.\n";
                            getch();
                            continue;
                        }

                        cout << "\nBookings for " << date << "/" << month << ":\n";

                        bool found = false;
                        for (int room = 1; room <= 10; room++)
                        {
                            index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                            if (roomstatus[index] == 1)
                            {
                                cout << "Room " << room << " booked by " << guestnames[index] << " for " << daystay[index] << " days.\n";
                                found = true;
                            }
                        }
                        if (!found)
                        {
                            cout << "No bookings found for this date.\n";
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                    else if (adminchoice == "3")
                    {
                        // CHECK OUT ROOM
                        cout << "\nEnter Date(1-31) ";
                        cin >> date;

                        cout << "Enter Month (1-12): ";
                        cin >> month;

                        cout << "Enter Room Number (1-10): ";
                        cin >> room;

                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

                        if (roomstatus[index] == 1)
                        {
                            roomstatus[index] = 0;

                            int bill = roomprice[room] * daystay[index];
                            cout << "Your bill is " << bill << "\n";
                            cout << "Room checked out successfully!\n";
                        }
                        else
                        {
                            cout << "Room already empty!\n";
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                    // Available rooms showing for date entered
                    else if (adminchoice == "4")
                    {
                        system("cls");

                        cout << "\nEnter Date(1-31) ";
                        cin >> date;
                        cout << "\nEnter month (1-12)";
                        cin >> month;

                        cout << "\n Available rooms \n";

                        for (int room = 1; room <= 10; room++)
                        {
                            index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                            if (roomstatus[index] == 0)
                            {
                                cout << "Room No " << room;
                                if (room <= 4)
                                {
                                    cout << "  Standard Room is available \n Price = RS 7500 \n";
                                }
                                else if (room > 4 && room <= 8)
                                {
                                    cout << "  Deluxe Room is available \n Price = RS 10000 \n";
                                }
                                else
                                {
                                    cout << " Suite/Sweet Room is available \n Price = RS 15000 \n";
                                }
                            }
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                    // Showinng All time Reservation code
                    else if (adminchoice == "5")
                    {
                        int found = 0;
                        for (int i = 0; i < 3720; i++)
                        {
                            if (allroomstatus[i] == 1)
                            {

                                found = 1;
                                int months = (i / (31 * 10)) + 1;
                                int temp = i % (31 * 10);
                                int dates = (temp / 10) + 1;
                                int roomnum = (temp % 10) + 1;
                                cout << "Date " << dates << endl;
                                cout << "Month " << months << endl;
                                cout << "Room " << roomnum << endl;
                                cout << "Name of guest " << allguestnames[i] << endl;
                                cout << "Days stayed: " << alldaystay[i] << endl
                                     << endl;
                            }
                        }
                        if (found == 0)
                        {
                            cout << "No reservations found.\n";
                        }
                        cout << "Press any key to continue  ";
                        getch();
                    }
                    // Exiting the management menu to main menu
                    else if (adminchoice == "6")
                    {
                        cout << "Exiting the System : ";
                        break;
                    }
                    else
                    {
                        cout << "Wrong choice entered ";
                    }
                } // start of while  loop in admin menu
            }
            // if login crediantials entered wrong three times
            else
            {
                cout << "Too many login attempts \n";
                break;
            }
        } // end of adminmenu

        // Guest menu code
        else if (choice == "2")
        {
            system("cls");

            while (true) //--startof while loop in guest menu
            {

                system("cls");
                cout << "-------------------------------------------------------\n";
                cout << "----------------------GUEST MENU-----------------------\n";
                cout << "-------------------------------------------------------\n";
                cout << "1 - Room Booking          \n";
                cout << "2 - View Available Rooms  \n";
                cout << "3 - Tour Packages         \n";
                cout << "4 - Delete My Booking \n";
                cout << "5 - Information about leepa valley \n";
                cout << "6 - Exit \n";
                string guestchoice;
                cout << "Enter your choice ";
                cin >> guestchoice;
                // Room Booking code
                if (guestchoice == "1")
                {
                    system("cls");

                    cout << "\nEnter Date(1-31) ";
                    cin >> date;
                    if (date < 1 || date > 31)
                    {
                        cout << "Invalid date. Please enter 1-31.\n";
                        getch();
                        continue;
                    }
                    cout << "\nEnter month (1-12) ";
                    cin >> month;
                    if (month < 1 || month > 12)
                    {
                        cout << "Invalid month. Please enter 1-12.\n";
                        getch();
                        continue;
                    }

                    cout << "Rooms No 1 to 4 are standard  (Price = RS 7500) \n";
                    cout << "Rooms No 5 to 8 are Deluxe  (Price = RS 10000)\n";
                    cout << "Rooms No 9 and 10 are Suite ( Price = RS 15000)\n";
                    cout << "\nEnter Room number (1-10) ";
                    cin >> room;
                    if (room < 1 || room > 10)
                    {
                        cout << "Invalid room number. Please enter 1-10.\n";
                        getch();
                        continue;
                    }
                    index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                    if (roomstatus[index] == 0)
                    {
                        cout << "Enter your name : ";
                        cin.ignore();
                        getline(cin, guestnames[index]);
                        getline(cin, allguestnames[index]);
                        allguestnames[index] = guestnames[index];
                        cout << "How many days you want to stay : ";
                        cin >> daystay[index];
                        cin >> alldaystay[index];
                        alldaystay[index] = daystay[index];
                        if (room <= 4)
                        {
                            cout << "--------Standard Room------- " << endl;
                            cout << "You successfully booked Standard room  No " << room;
                            roomstatus[index] = 1;
                            allroomstatus[index] = 1;
                        }

                        else if (room > 3 && room <= 8)
                        {
                            cout << "-------Deluxe  Room-------- " << endl;
                            cout << "You successfully booked Deluxe room  No " << room;
                            roomstatus[index] = 1;
                            allroomstatus[index] = 1;
                        }
                        else if (room > 8 && room <= 10)
                        {
                            cout << "-------SWeet  Room-------- " << endl;
                            cout << "You successfully booked Suite  room  No " << room;
                            roomstatus[index] = 1;
                            allroomstatus[index] = 1;
                        }

                        else
                        {
                            cout << "No such room available";
                        }
                    }
                    else
                    {
                        cout << " Soory for Inconvience \n Room is not available \n ";
                    }
                    cout << "\nPress any key to continue \n";
                    getch();
                }
                // Available rooms showing for date entered
                else if (guestchoice == "2")
                {
                    system("cls");

                    cout << "\nEnter Date(1-31) ";
                    cin >> date;
                    cout << "\nEnter month (1-12)";
                    cin >> month;

                    cout << "\n Available rooms \n";

                    for (int room = 1; room <= 10; room++)
                    {
                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                        if (roomstatus[index] == 0)
                        {
                            cout << "Room No " << room;
                            if (room <= 4)
                            {
                                cout << "  Standard Room is available \n Price = RS 7500 \n";
                            }
                            else if (room > 4 && room <= 8)
                            {
                                cout << "  Deluxe Room is available \n Price = RS 10000 \n";
                            }
                            else
                            {
                                cout << " Suite/Sweet Room is available \n Price = RS 15000 \n";
                            }
                        }
                    }
                    cout << "\nPress any key to continue \n";

                    getch();
                }
                // tour packages
                else if (guestchoice == "3")
                {
                    //  Offers Section
                    system("cls");
                    cout << "1 - 3day leepa vallley tour Pakage (2 nights and 3 days )  RS 30000 per person\n";
                    cout << "2 - 5day leepa vallley tour Pakage (4 nights and 5 days )  RS 50000 per person\n";
                    cout << "3 - 7day leepa vallley tour Pakage (6 nights and 7 days )  RS 60000 per person\n";
                    cout << "More information about tou packages is on our website and you can avail this from there \n";

                    cout << "Press any key to continue ";
                    getch();
                }
                // Delete My booking
                else if (guestchoice == "4")
                {
                    cout << "\nEnter Date(1-31) ";
                    cin >> date;

                    cout << "Enter Month (1-12): ";
                    cin >> month;

                    cout << "Enter Room Number (1-10): ";
                    cin >> room;

                    index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);

                    if (roomstatus[index] == 1)
                    {
                        roomstatus[index] = 0;

                        cout << "Room Booking deleted   successfully \n";
                    }
                    cout << "Press any key to continue ";
                    getch();
                }

                // Information about Leepa Valley
                else if (guestchoice == "5")
                {

                    system("cls");
                    cout << "Information about Leepa valley Kashmir \n";
                    cout << "Leepa valley is located in Azad Kashmir.\n The distance of Leepa valley from Capital of Azad Kashmir is only 100 km \n";
                    cout << "From Muzaffarabad you have to move towards Srinagar along the Famous River Jehlum on Muzzafarabad chakothi Road  . After travelling 40 km on the same road you get to Hatian Bala . ";
                    cout << "After Crossing Hatian bala Main Bazar you get to Niali . From there move to left side of road and continuouusly move alon hatian to leepa road after  travelling 55 km you will reach Leepa Valley \n";

                    cout << "|----------------------------------------------Leepa Valley Road Map and view points----------------------------------------------|\n";
                    cout << "|                 *                                                                                                               |\n";
                    cout << "|                *                                                                                                                |\n";
                    cout << "|               *                                                                                                                 |\n";
                    cout << "|             Rassian *                                                                                                           |\n";
                    cout << "|               *      *                                                                                                          |\n";
                    cout << "|              *          *                                                                       12 Hazari top                   |\n";
                    cout << "|            *               *                Panjal Gali                                        *          *                     |\n";
                    cout << "|         *                     *                                                              *              *        kojean     |\n";
                    cout << "|           *                       *                                                        *                  *                 |\n";
                    cout << "|             *                        *                                                   *                     *                |\n";
                    cout << "|               *                          *                                             *                        *               |\n";
                    cout << "|             *                                *                                         *                         *              |\n";
                    cout << "|          Dao Khan View point                    *                                      *                          *             |\n";
                    cout << "|              *                                       *   *  *    *                     *                           *            |\n";
                    cout << "|                *                                    *    *    *                       *                            *            |\n";
                    cout << "|                  *                                 *                                  *                             *           |\n";
                    cout << "|                    *                                 *                               *                               *          |\n";
                    cout << "|               *  *                                     *    *      *     *    *     *                                 *         |\n";
                    cout << "|            *                                                     bathwar gali      *                                  *         |\n";
                    cout << "|          *                                                                        *                                   *         |\n";
                    cout << "|         *   *  *                                                                 *                                    *         |\n";
                    cout << "|                  *                                                              *                                     *         |\n";
                    cout << "|                     *                                                          *                                       *        |\n";
                    cout << "|                       * Sher Gali Top( also called minni babusar )            *                                         *       |\n";
                    cout << "|                             *                                                *                                          *       |\n";
                    cout << "|                                 *                                           *                                           *       |\n";
                    cout << "|                                     *                                      *                                            *       |\n";
                    cout << "|                                         *                                 *                                             *       |\n";
                    cout << "|                                              *     *                     *                                           *  *       |\n";
                    cout << "|                                                          *              *                                         *      *      |\n";
                    cout << "|                                                       *                *                                        *        *      |\n";
                    cout << "|                                                   *                   *                                        *         *      |\n";
                    cout << "|                                               *                      *                                      * mandakuli  *      |\n";
                    cout << "|                                        *                            *                                      *             *     /|\n";
                    cout << "|                                  *                                 *                                     *               *    / |\n";
                    cout << "|                              *                                                                          *                    /  |\n";
                    cout << "|                          *                                           *                               *                      /   |\n";
                    cout << "|'                     *    Moji(utli basti)                              *                          *Nokot Gali             /    |\n";
                    cout << "|.                                                                                                 *                        /     |\n";
                    cout << "| .                      *                                                   *                   *                        /       |\n";
                    cout << "| .                         *                                                   *               *                       /         |\n";
                    cout << "| .                           *                                                                *                      /           |\n";
                    cout << "| .                             *                                               * leepa main bazar                   /            |\n";
                    cout << "| .                               *  Moji Bazar                               *                                      /            |\n";
                    cout << "| .LOC                            *                                          *                                       /            |\n";
                    cout << "| .                               *                                        *                                         /LOC         |\n";
                    cout << "| .                                 *                                    * *                                        /             |\n";
                    cout << "| .                              *   *                                  *     *                                     /             |\n";
                    cout << "| .                            *      *                               *          *                                  /             |\n";
                    cout << "| .     chackmuqam           *          *                           *               *                               /             |\n";
                    cout << "| .                        *            *                         *                    *                            /             |\n";
                    cout << "| .                       *                  *       Banamula   *                                                   /             |\n";
                    cout << "| .                     *                       *             *                            *  Bijaldhar             /             |\n";
                    cout << "| .                    *                         *    *    *                                                        /             |\n";
                    cout << "| .                   *                                                                                            /              |\n";
                    cout << "| .                  *                                                                                           /                |\n";
                    cout << "| .                *                                                                                            /                 |\n";
                    cout << "| .      lubgran *                                                                                             /                  |\n";
                    cout << "| .              *                                                                                           /                    |\n";
                    cout << "| .              *                                                                                          /                     |\n";
                    cout << "|  .             *                       . . . .                                                          /                       |\n";
                    cout << "|  .             *                    .         .                                                       /                         |\n";
                    cout << "|  .              *                 .            .                                                    /                           |\n";
                    cout << "|  .              *               .               .                                                   /                           |\n";
                    cout << "|  .     tareda   *             .                   .                                                 /                           |\n";
                    cout << "|  .               *          .                       .                                                /                          |\n";
                    cout << "|  . loc point tareda        .                          .                                               /                         |\n";
                    cout << "|   .                       .                             .                                            /                          |\n";
                    cout << "|      .   .  .  .  .  .. ..                                .     .       .      .      .   .   . /                               |\n";
                    cout << "|                                                             .                                                                   |\n";
                    cout << "|                                                              .                                                                  |\n";
                    cout << "|                                                               .                                                                 |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .LOC                                                             |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                                                                                 |\n";
                    cout << "|                                                                .        NEELUM VALLEY                                           |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|        jammu                                                   .                                                                |\n";
                    cout << "|          kashmir                                               .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|                                                                .                                                                |\n";
                    cout << "|---------------------------------------------------------------------------------------------------------------------------------|\n";

                    cout << "Press any key to continue ";
                    getch();
                }
                // Returning to Main Menu
                else if (guestchoice == "6")
                {
                    system("cls");
                    cout << " Returning to main menu ";
                    break;
                }
                else
                {
                    cout << "You entered wrong choice ";
                    cout << "Press any key to continue ";
                    getch();
                }
            } //-- end of while loop in guest menu
        }

        // Exiting the System
        else if (choice == "3")
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
    } //--end of main while loop
    // End of Program
    cout << "Thanks for using this software ";
}