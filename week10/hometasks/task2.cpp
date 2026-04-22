#include <iostream>
using namespace std;

float volume(float length, float width , float height);

main()
{
    float length, width, height;
    cout << "Enter length ,width, height (in meters )";
    cin >> length;
    cin >> width;
    cin >> height;
    string unit;
    cout << "Enter output unit(millimeters ,centimeters ,meters, kilometers)";
    cin >> unit;
    float vol = volume(length, width, height);
    if (unit == "millimeters")
    {
        vol = vol * 1000 *1000 * 1000;
    }
    else if (unit == "centimeters")
    {
        vol = vol * 100 *100*100;
    }
    else if (unit == "meters")
    {
        vol = vol ;
    }
    else if (unit == "kilometers")
    {
        vol = vol * 0.001 * 0.001 * 0.001;
    }
    cout<<"Volume = "<<vol<<" cubic "<<unit;
}
float volume(float length, float width, float height)
{
    float basearea = length * width;
    float volume =( basearea* height)/3;
    return volume;
}