/**
 * @Author: Your name
 * @Date:   2022-09-25 18:58:33
 * @Last Modified by:   Your name
 * @Last Modified time: 2022-09-25 20:34:21
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fahrenheit;
    fahrenheit.open("FahrenheitTemperature.txt"); // holder for fahrenheit temperature

    ofstream celsius;
    celsius.open("CelsiusTemperature.txt"); // placeholder for celsius temperature

    string cities; // cities for temperature
    int temp;      // temperature
    double result; // result

    if (!fahrenheit || !celsius) // if we don't have a temperature file check that can open.
        cout << "Cant open file! " << endl;

    while (fahrenheit >> cities >> temp) // while fahrenheit cities get converted to celsius.
    {
        result = (temp - 32.0) * 5.0 / 9.0; // The conversion needed to convert temperature.
        celsius << cities << " " << result << endl;
    }

    fahrenheit.close(); // closes both files
    celsius.close();
    return 0;
}