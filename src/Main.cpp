//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "WeatherData.h"
#include "Client.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Behavioral pattern - Observer" << endl;

    WeatherData weatherStation;
    Client one(1), two(2), three(3);

    string location;
    float temp, humidity, precipitation;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);

    // San José, Costa Rica. 6PM
    location = "San José, Costa Rica. 6PM";
    temp = 20;
    humidity = 91;
    precipitation = 80;

    weatherStation.loadState(location, temp, humidity, precipitation);

    weatherStation.removeObserver(&two);

    // New York, NY, USA. 6PM
    location = "New York, NY, USA. 6PM";
    temp = 21;
    humidity = 75;
    precipitation = 13;

    weatherStation.loadState(location, temp, humidity, precipitation);

    return 0;
}
