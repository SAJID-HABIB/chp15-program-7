#include "CustomerData.h"

void CustomerData::setCustomerNumber(int num){
    customerNumber = num;
}


void CustomerData::setMailingList(int ml){
    mailingList = ml;
}


int CustomerData::getCustomerNumber() const {
    return customerNumber;
}


int CustomerData::getMailingList() const {
    return mailingList;
}