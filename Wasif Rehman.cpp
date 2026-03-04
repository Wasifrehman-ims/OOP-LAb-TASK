#include <iostream>
using namespace std;

// Base Class
class Ride {
public:
    string passengerName;
    int rideID;
    double baseFare;

    void displayRideDetails() {
        cout << "Passenger: " << passengerName << endl;
        cout << "Ride ID: " << rideID << endl;
    }
};

// Economy Ride Class
class EconomyRide : public Ride {
public:
    double distanceKm;

    double calculateFare() {
        return baseFare + (distanceKm * 8);
    }
};

// Luxury Ride Class
class LuxuryRide : public Ride {
public:
    double distanceKm;
    double serviceCharge;

    double calculateFare() {
        return baseFare + (distanceKm * 12) + serviceCharge;
    }
};

int main() {

   
    EconomyRide eco;
    eco.passengerName = "Sara";
    eco.rideID = 201;
    eco.baseFare = 100;
    eco.distanceKm = 15;

    eco.displayRideDetails();
    cout << "Final Fare: " << eco.calculateFare() << endl;
    cout << endl;

    LuxuryRide lux;
    lux.passengerName = "Ahmed";
    lux.rideID = 305;
    lux.baseFare = 120;
    lux.distanceKm = 10;
    lux.serviceCharge = 80;

    lux.displayRideDetails();
    cout << "Final Fare: " << lux.calculateFare() << endl;

    return 0;
}