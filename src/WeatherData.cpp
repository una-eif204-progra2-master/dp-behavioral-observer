//
// Created by Maikol Guzman Alan on 6/7/22.
//

#include "WeatherData.h"

WeatherData::WeatherData() {}

WeatherData::~WeatherData() {

}

void WeatherData::registerObserver(IObserver *observer) {
    observers.push_back(observer);
}

void WeatherData::removeObserver(IObserver *observer) {
    // find the observer
    auto iterator = std::find(observers.begin(), observers.end(), observer);

    if (iterator != observers.end()) { // observer found
        observers.erase(iterator); // remove the observer
    }
}

void WeatherData::notifyObservers() {
    for (IObserver *observer : observers) { // notify all observers
        observer->update(location, temp, humidity, precipitation);
    }
}

void WeatherData::loadState(string location, float temp, float humidity, float precipitation) {
    this->location = location;
    this->temp = temp;
    this->humidity = humidity;
    this->precipitation = precipitation;
    std::cout << std::endl;

    notifyObservers();
}
