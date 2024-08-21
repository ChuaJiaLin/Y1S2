#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include<string>
#include"Receipt.hpp"
using std::string;
class Receipt;
//class Admin;
class Customer{ 
    protected:
        string name;
        int medicine1amount,medicine2amount,medicine3amount;
        //string paymentmethod;
        int paymentmethod;
        Receipt receipt;
    public:
        
        
       
        Customer();
       

        ~Customer();
        void transaction(int &stockmed1,int &stockmed2,int &stockmed3,int &totalmed1,int &totalmed2,int &totalmed3,int &totalmed,double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales);
        void printReceipt(double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales);
        string getName();
        int getMedicine1Amount();
        int getMedicine2Amount();
        int getMedicine3Amount();
        int getPaymentMethod();
        //string getPaymentMethod();
      
};

#endif


/*#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include "Receipt.hpp"

class Customer {
protected:
    std::string name;
    int medicine1amount, medicine2amount, medicine3amount;
    int paymentmethod;
    Receipt receipt;
public:
    void transaction(int &stockmed1, int &stockmed2, int &stockmed3, int &totalmed1, int &totalmed2, int &totalmed3, int &totalmed, double &totalsalesmed1, double &totalsalesmed2, double &totalsalesmed3, double &totalsales);
    void printReceipt(double &totalsalesmed1, double &totalsalesmed2, double &totalsalesmed3, double &totalsales);
    std::string getName();
    int getMedicine1Amount();
    int getMedicine2Amount();
    int getMedicine3Amount();
    int getPaymentMethod();
};

#endif */
