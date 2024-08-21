#ifndef ADMIN_HPP
#define ADMIN_HPP
#include<vector>
#include<string>
using std::string;
using std::vector;
class Customer;
class Admin{
    private:
       
        string password;
        
        //vector<Receipt*> customers;
    public:
        void addCustomer(Customer* customer);
        Admin();
        ~Admin();
        bool checkPassword(string input);
        void addStock(int &stockmed1,int &stockmed2,int &stockmed3);
        void selectOperation(int &stockmed1,int &stockmed2,int &stockmed3,int &totalmed1,int &totalmed2,int &totalmed3,int &totalmed,double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales);
        void printTask1(int &totalmed1,int &totalmed2,int &totalmed3,int &totalmed);
        void printTask2(double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales);
};

#endif