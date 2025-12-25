#ifndef PERSONDATA_H
#define PERSONDATA_H

#include<iostream>
using namespace std;

    class PersonData
    {
    private:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    public:

    //setters
        void setLastName(string);
        void setFirstName(string);
        void setAddress(string);
        void setCity(string);
        void setState(string);
        void setZip(string);
        void setPhone(string);

        //getters
        string getLastName() const;
        string getFirstName() const;
        string getAddres() const;
        string getCity() const;
        string getState() const;
        string getZip() const;
        string getPhone() const;
    };
    

#endif