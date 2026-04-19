
#include <iostream>
#include <conio.h>

using namespace std;
main()
{

    int room, month, date;
    int index;

    // DATA Structures
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
                    cout << "2 - Search booking by date \n";
                    cout << "3 - Search booking by name \n";
                    cout << "4 - Check out      \n";
                    cout << "5 - show available rooms \n";
                    cout << "6 - Check  all time Reservation  \n";
                    cout << "7 - Edit prices \n";
                    cout << "8 - Exit \n";
                    // taking choice from admin
                    string adminchoice;
                    cout << "Enter your choice : ";
                    cin >> adminchoice;
                    // Room Booking code
                    if (adminchoice == "1")
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

                        cout << "Rooms No 1 to 4 are standard  (Price = RS" << roomprice[1] << " )";
                        cout << "Rooms No 5 to 8 are Deluxe  (Price = RS" << roomprice[5] << " ) \n";
                        cout << "Rooms No 9 and 10 are Suite ( Price = RS " << roomprice[9] << ")\n";
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
                                cout << "You successfully booked Standard room  No " << room << endl;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }

                            else if (room > 3 && room <= 8)
                            {
                                cout << "-------Deluxe  Room-------- " << endl;
                                cout << "You successfully booked Deluxe room  No " << room << endl;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }
                            else if (room > 8 && room <= 10)
                            {
                                cout << "-------SWeet  Room-------- " << endl;
                                cout << "You successfully booked Suite  room  No " << room << endl;
                                roomstatus[index] = 1;
                                allroomstatus[index] = 1;
                            }

                            else
                            {
                                cout << "No such room available" << endl;
                            }
                        }
                        else
                        {
                            cout << " Soory for Inconvience \n Room is not available  \n";
                        }
                        cout << "Press any key to continue ";

                        getch();
                    }
                    // search booking code
                    else if (adminchoice == "2")
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
                    // Search Booking by name
                    else if (adminchoice == "3")
                    {
                        system("cls");
                        string name;
                        cout << "\nEnter guest name to search: ";
                        cin.ignore();
                        getline(cin, name);

                        bool found = false;
                        for (int i = 0; i < 3720; i++)
                        {
                            if (roomstatus[i] == 1 && guestnames[i] == name)
                            {
                                int month = (i / (31 * 10)) + 1;
                                int temp = i % (31 * 10);
                                int date = (temp / 10) + 1;
                                int room = (temp % 10) + 1;
                                cout << "Booking found: " << name << " in Room " << room << " on " << date << "/" << month << " for " << daystay[i] << " days.\n";
                                found = true;
                            }
                        }
                        if (!found)
                        {
                            cout << "No booking found for this guest name.\n";
                        }
                        cout << "press any key to continue ";
                        getch();
                    }
                    else if (adminchoice == "4")
                    {
                        system("cls");
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
                    else if (adminchoice == "5")
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
                                    cout << "  Standard Room is available \n Price = " << roomprice[1] << " \n";
                                }
                                else if (room > 4 && room <= 8)
                                {
                                    cout << "  Deluxe Room is available \n Price = R" << roomprice[5] << " \n";
                                }
                                else
                                {
                                    cout << " Suite/Sweet Room is available \n Price = RS " << roomprice[9] << " \n";
                                }
                            }
                        }
                        cout << "Press any key to continue ";
                        getch();
                    }
                    // Showinng All time Reservation code
                    else if (adminchoice == "6")
                    {
                        system("cls");
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
                    else if (adminchoice == "7")
                    {
                        system("cls");
                        string category;
                        cout << "Enter the room category You want to edit price(Standard or Deluxe or Suite ) ";
                        cin >> category;
                        cin.ignore();
                        int newprice;
                        cout << "Enter new price ";
                        cin >> newprice;
                        if (category == "Standard")
                        {
                            roomprice[1] = newprice;
                            roomprice[2] = newprice;
                            roomprice[3] = newprice;
                            roomprice[4] = newprice;
                            cout << "\nYou successfully changed the price of " << category << " rooms to RS " << newprice << "\n";
                        }
                        else if (category == "Deluxe")
                        {
                            roomprice[5] = newprice;
                            roomprice[6] = newprice;
                            roomprice[7] = newprice;
                            roomprice[8] = newprice;
                            cout << "\nYou successfully changed the price of " << category << " rooms to RS " << newprice << "\n";
                        }
                        else if (category == "Suite")
                        {
                            roomprice[9] = newprice;
                            roomprice[10] = newprice;
                            cout << "\nYou successfully changed the price of " << category << " rooms to RS " << newprice << "\n";
                        }
                        else
                        {
                            cout << "\nSuch room category does not exist. Please enter Standard, Deluxe, or Suite.\n";
                        }

                        cout << "Press any key to continue\n";
                        getch();
                    }
                    // Exiting the management menu to main menu
                    else if (adminchoice == "8")
                    {
                        system("cls");
                        cout << "Exiting the System : ";
                        break;
                    }
                    else
                    {
                        cout << "Wrong choice entered ";
                    }
                } // end of while  loop in admin menu
            }
            // if login crediantials entered wrong three times
            else
            {
                system("cls");
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
                cout << "6 - Return to main menu  \n";
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

                    cout << "Rooms No 1 to 4 are standard  (Price = RS" << roomprice[1] << " )";
                    cout << "Rooms No 5 to 8 are Deluxe  (Price = RS" << roomprice[5] << " ) \n";
                    cout << "Rooms No 9 and 10 are Suite ( Price = RS " << roomprice[9] << ")\n";
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
                    if (date < 1 || date > 31)
                    {
                        cout << "Invalid date. Please enter 1-31.\n";
                        getch();
                        continue;
                    }
                    cout << "\nEnter month (1-12)";
                    cin >> month;
                    if (month < 1 || month > 12)
                    {
                        cout << "Invalid month. Please enter 1-12.\n";
                        getch();
                        continue;
                    }

                    cout << "\n Available rooms \n";

                    for (int room = 1; room <= 10; room++)
                    {
                        index = (month - 1) * 31 * 10 + (date - 1) * 10 + (room - 1);
                        if (roomstatus[index] == 0)
                        {
                            cout << "Room No " << room;
                            if (room <= 4)
                            {
                                cout << "  Standard Room is available \n Price = " << roomprice[1] << " \n";
                                                        }
                            else if (room > 4 && room <= 8)
                            {
                                cout << "  Deluxe Room is available \n Price = R" << roomprice[5] << " \n";
                            }
                            else
                            {
                                cout << " Suite/Sweet Room is available \n Price = RS " << roomprice[9] << " \n";
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
                    char bookPackage;
                    cout << "\nDo you want to book a tour package? (press \"y\" for yes or\" n\" for no ): ";
                    cin >> bookPackage;
                    if (bookPackage == 'y' || bookPackage == 'Y')
                    {
                        int packageChoice;
                        cout << "Enter package number (1-3): ";
                        cin >> packageChoice;
                        if (packageChoice >= 1 && packageChoice <= 3)
                        {
                            int days, nights, price;
                            if (packageChoice == 1)
                            {
                                days = 3;
                                nights = 2;
                                price = 30000;
                            }
                            else if (packageChoice == 2)
                            {
                                days = 5;
                                nights = 4;
                                price = 50000;
                            }
                            else if (packageChoice == 3)
                            {
                                days = 7;
                                nights = 6;
                                price = 60000;
                            }
                            int numPeople;
                            cout << "Enter number of people: ";
                            cin >> numPeople;
                            if (numPeople >= 1)
                            {
                                int startdate, startmonth;
                                cout << "Enter start date (1-31): ";
                                cin >> startdate;
                                if (startdate < 1 || startdate > 31)
                                {
                                    cout << "Invalid date. Please enter 1-31.\n";
                                    getch();
                                    continue;
                                }
                                cout << "Enter start month (1-12): ";
                                cin >> startmonth;
                                if (startmonth < 1 || startmonth > 12)
                                {
                                    cout << "Invalid month. Please enter 1-12.\n";
                                    getch();
                                    continue;
                                }
                                if (startdate >= 1 && startdate <= 31 && startmonth >= 1 && startmonth <= 12)
                                {
                                    int availableRooms[10];
                                    int availCount = 0;
                                    for (int room = 1; room <= 10; room++)
                                    {
                                        int index = (startmonth - 1) * 31 * 10 + (startdate - 1) * 10 + (room - 1);
                                        if (roomstatus[index] == 0)
                                        {
                                            availableRooms[availCount++] = room;
                                        }
                                    }
                                    if (availCount >= numPeople)
                                    {
                                        string guestName;
                                        cout << "Enter guest name: ";
                                        cin.ignore();
                                        getline(cin, guestName);
                                        for (int i = 0; i < numPeople; i++)
                                        {
                                            int room = availableRooms[i];
                                            int index = (startmonth - 1) * 31 * 10 + (startdate - 1) * 10 + (room - 1);
                                            roomstatus[index] = 1;
                                            allroomstatus[index] = 1;
                                            daystay[index] = nights;
                                            alldaystay[index] = nights;
                                            guestnames[index] = guestName;
                                            allguestnames[index] = guestName;
                                            cout << "Room " << room << " booked for package.\n";
                                        }
                                        cout << "Package booked successfully for " << numPeople << " people.\n";
                                        cout << "Total cost: RS " << price * numPeople << "\n";
                                    }
                                    else
                                    {
                                        cout << "Not enough rooms available for " << numPeople << " people.\n";
                                    }
                                }
                                else
                                {
                                    cout << "Invalid date or month.\n";
                                }
                            }
                            else
                            {
                                cout << "Invalid number of people.\n";
                            }
                        }
                        else
                        {
                            cout << "Invalid package choice.\n";
                        }
                    }

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
        cout << "\nPress any key to continue \n";
        getch();
    } //--end of main while loop
    // End of Program
    cout << "Thanks for using this software ";
}