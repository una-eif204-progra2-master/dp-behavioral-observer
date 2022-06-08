//
// Created by Maikol Guzman Alan on 6/7/22.
//

#ifndef DP_BEHAVIORAL_OBSERVER_CLIENT_H
#define DP_BEHAVIORAL_OBSERVER_CLIENT_H

#include <ostream>
#include <iostream>
#include "IObserver.h"

using namespace std;

class Client : public IObserver  {
private:
    int id;
public:
    Client(int id);

    virtual ~Client();

    void update(string location, float temp, float humidity, float pressure) override;

    int getId() const;

    void setId(int id);
};


#endif //DP_BEHAVIORAL_OBSERVER_CLIENT_H
