//
// Created by Maikol Guzman Alan on 6/7/22.
//

#ifndef DP_BEHAVIORAL_OBSERVER_ISUBJECT_H
#define DP_BEHAVIORAL_OBSERVER_ISUBJECT_H
#include "IObserver.h"

class ISubject {
public:
    virtual void registerObserver(IObserver *observer) = 0;
    virtual void removeObserver(IObserver *observer) = 0;
    virtual void notifyObservers() = 0;
};
#endif //DP_BEHAVIORAL_OBSERVER_ISUBJECT_H
