#include "PersonData.h"

//setters

void PersonData::setLastName(string ln) {
    lastName = ln;
}

void PersonData::setFirstName(string fn) {
    firstName = fn;
}

void PersonData::setAddress(string ad) {
    address = ad;
}

void PersonData::setCity(string c) {
    city = c;
}


void PersonData::setState(string s) {
    state = s;
}


void PersonData::setZip(string z) {
    zip = z;
}


void PersonData::setPhone(string p) {
    phone = p;
}

// getters

string PersonData::getLastName() const {
    return lastName;
}

string PersonData::getFirstName() const {
    return firstName;
}

string PersonData::getAddres() const {
    return address;
}

string PersonData::getCity() const {
    return city;
}

string PersonData::getState() const {
    return state;
}

string PersonData::getZip() const {
    return zip;
}

string PersonData::getPhone() const {
    return phone;
}






