#include<iostream>
#include "Admin.hpp"
#include "Customer.hpp"
#include "Receipt.hpp"
using namespace std;

int main(){
    int role;
    int stockmed1=10,stockmed2=10,stockmed3=10;
    string inputpassword;
    int totalmed1=0,totalmed2=0,totalmed3=0,totalmed=0;
    double totalsales=0,totalsalesmed1=0,totalsalesmed2=0,totalsalesmed3=0;
    Customer customer;
    Admin admin;
    do{
        
        cout<<"*****Caring Pharmacy*****"<<endl;
        cout<<"1. Customer\n2. Admin\n3. Exit\nSelect role:";
        cin>>role;
        switch(role){
            case 1: cout<<"-----\nCustomer\n-----\n";
                    customer.transaction(stockmed1,stockmed2,stockmed3,totalmed1,totalmed2,totalmed3,totalmed,totalsalesmed1,totalsalesmed2,totalsalesmed3,totalsales);
                    cout<<"Thank you!\n";
                    break;
            case 2: cout<<"-----\nAdmin\n-----\n";
                    cout<<"Enter password: ";
                    cin>>inputpassword;
                    if(admin.checkPassword(inputpassword)){
                        admin.selectOperation(stockmed1,stockmed2,stockmed3,totalmed1,totalmed2,totalmed3,totalmed,totalsalesmed1,totalsalesmed2,totalsalesmed3,totalsales);
                        break;
                    }
                    else{
                        cout<<"Wrong Password"<<endl;
                        break;
                    }
                    
            case 3: cout<<"Thank you for using.";
                    return 0;
        }
    }while(role!=3);
    system("pause");
    return 0;
}
