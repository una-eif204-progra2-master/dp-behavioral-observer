//
// Created by Maikol Guzman Alan on 6/7/22.
//

#ifndef DP_BEHAVIORAL_OBSERVER_WEATHERDATA_H
#define DP_BEHAVIORAL_OBSERVER_WEATHERDATA_H

#include <ostream>
#include <iostream>
#include <vector>
#include "IObserver.h"
#include "ISubject.h"

using namespace std;

class WeatherData : public ISubject{
private:
    vector<IObserver *> observers; // observers

    string location;
    float temp = 0.0f;
    float humidity = 0.0f;
    float precipitation = 0.0f;
public:
    WeatherData();

    virtual ~WeatherData();

    void registerObserver(IObserver *observer) override;

    void removeObserver(IObserver *observer) override;

    void notifyObservers() override;

    void loadState(string location, float temp, float humidity, float pressure);
};


#endif //DP_BEHAVIORAL_OBSERVER_WEATHERDATA_H
