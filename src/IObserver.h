//
// Created by Maikol Guzman Alan on 6/7/22.
//

#ifndef DP_BEHAVIORAL_OBSERVER_IOBSERVER_H
#define DP_BEHAVIORAL_OBSERVER_IOBSERVER_H
#include <ostream>
#include <iostream>
using namespace std;

class IObserver {
public:
    virtual void update(string location, float temp, float humidity, float precipitation) = 0;
    virtual ~IObserver() {}
};

#endif //DP_BEHAVIORAL_OBSERVER_IOBSERVER_H
