#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "PersonData.h"
#include <stdbool.h>  

class CustomerData : public PersonData
{
private:
     int customerNumber;
     bool mailingList;
public:
    // setters

    void setCustomerNumber(int);
    void setMailingList(int);

    // getters
    int getCustomerNumber() const;
    int getMailingList() const;


};

#endif
