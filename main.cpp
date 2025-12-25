#include <iostream>
#include "CustomerData.h"
 using namespace std;


 int main () {
    CustomerData customer;
    customer.setFirstName("sajid");
    customer.setLastName("Habib");
    customer.setAddress("lahore");
    customer.setState("punjab");
    customer.setZip("54000");
    customer.setPhone("03065474694");

    customer.setCustomerNumber(101);
    customer.setMailingList(true);

    // display data
    cout<<"customer information :";
    cout<<"--------------------------\n";
    cout<<"Name : "<<customer.getFirstName()   << " " << customer.getLastName() << endl;
     cout << "Customer Number: " << customer.getCustomerNumber() << endl;
    cout << "Mailing List: "
         << (customer.getMailingList() ? "Yes" : "No") << endl;
          
         return 0;
 }