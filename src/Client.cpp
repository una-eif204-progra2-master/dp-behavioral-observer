//
// Created by Maikol Guzman Alan on 6/7/22.
//

#include "Client.h"

Client::Client(int id) : id(id) {}

void Client::update(string location, float temp, float humidity, float pressure) {
// print the changed values
    cout << "---Client (" << id << ") Data---"
         << "\tLocation: " << location
         << "\tTemperature: " << temp << "C°"
         << "\tHumidity: " << humidity << "%"
         << "\tPrecipitation: " << pressure << "%"
         << endl;
}

Client::~Client() {

}

int Client::getId() const {
    return id;
}

void Client::setId(int id) {
    Client::id = id;
}
