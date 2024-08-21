
#include<iostream>
//#include<string>
#include"Admin.hpp"
#include"Receipt.hpp"
#include"Customer.hpp"
using namespace std;


Receipt receipt;
Customer::Customer(): medicine1amount(0), medicine2amount(0), medicine3amount(0), paymentmethod(0) {}
Customer::~Customer(){}
void Customer::transaction(int &stockmed1, int &stockmed2, int &stockmed3, int &totalmed1, int &totalmed2, int &totalmed3, int &totalmed, double &totalsalesmed1, double &totalsalesmed2, double &totalsalesmed3, double &totalsales) {
    
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name, '\n');
    cout << "Enter amount of medicine for 3 type of medicine: \n";
    cout << "Fever Medicine: ";
    cin >> medicine1amount;
    if(medicine1amount<=stockmed1){
                totalmed1+=medicine1amount;
          
                stockmed1-=medicine1amount;
            }
            else{
                cout<<"Sorry, Fever Medicine is sold out.\n";
                medicine1amount=0;
                totalmed1+=medicine1amount;
               
                stockmed1-=medicine1amount;
            }
            cout<<"Flu Medicine: ";
            cin>>medicine2amount;
            if(medicine2amount<=stockmed2){
                totalmed2+=medicine2amount;
            
                stockmed2-=medicine2amount;
            }
            else{
                cout<<"Sorry, Flu Medicine is sold out.\n";
                medicine2amount=0;
                totalmed2+=medicine2amount;
            
                stockmed2-=medicine2amount;
            }
            cout<<"Cough Medicine: ";
            cin>>medicine3amount;
            if(medicine3amount<=stockmed3){
                totalmed3+=medicine3amount;
        
                stockmed3-=medicine3amount;
            }
          else{
                cout<<"Sorry, Cough Medicine is sold out.\n";
                medicine3amount=0;
                totalmed3+=medicine3amount;
                
                stockmed3-=medicine3amount;
           }
        
    totalmed+=medicine1amount+medicine2amount+medicine3amount;
    cout << "1. Cash\n2. TouchnGo\n3.FPX Online Banking\nChoose payment method 1, 2, or 3: ";
    cin>>paymentmethod;
    if(paymentmethod!=1&&paymentmethod!=2&&paymentmethod!=3){
        cout<<"Invalid payment method!\nChoose payment method 1, 2, or 3: ";
        cin>>paymentmethod;
    }
    cout << endl;
    printReceipt(totalsalesmed1,totalsalesmed2,totalsalesmed3,totalsales);
}
void Customer::printReceipt(double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales){ 
        string method;
        if(getPaymentMethod()==1){
            method="Cash";
        }
        else if(getPaymentMethod()==2){
            method="TouchnGo";
        }
        else{
            method="FPX Online Banking";
        }
        receipt.setSalesMed(medicine1amount, medicine2amount, medicine3amount);
        cout<<"Receipt:\n";
        cout<<"Customer Name: "<<name<<endl;
        cout<<"Fever Medicine\t"<<medicine1amount<<"\t"<<receipt.getSalesMed1()<<endl;
        cout<<"Flu Medicine\t"<<medicine2amount<<"\t"<<receipt.getSalesMed2()<<endl;
        cout<<"Cough Medicine\t"<<medicine3amount<<"\t"<<receipt.getSalesMed3()<<endl;
        cout<<"Total Cost: RM"<<receipt.getTotalSales()<<endl;
        cout<<"Payment mehod: "<<method<<endl;
        totalsalesmed1+=receipt.getSalesMed1();
        totalsalesmed2+=receipt.getSalesMed2();
        totalsalesmed3+=receipt.getSalesMed3();
        totalsales=totalsalesmed1+totalsalesmed2+totalsalesmed3;
  
}



string Customer::getName(){
    return name;
}
int Customer::getMedicine1Amount(){
    return medicine1amount;
}
int Customer::getMedicine2Amount(){
    return medicine2amount;
}
int Customer::getMedicine3Amount(){
    return medicine3amount;
}
int Customer::getPaymentMethod(){
    return paymentmethod;
}
/*string Customer::getPaymentMethod(){
    return paymentmethod;
}*/




/*#include "Customer.hpp"
#include <iostream>
#include <string>

using namespace std;

void Customer::transaction(int &stockmed1, int &stockmed2, int &stockmed3, int &totalmed1, int &totalmed2, int &totalmed3, int &totalmed, double &totalsalesmed1, double &totalsalesmed2, double &totalsalesmed3, double &totalsales) {
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, name, '\n');
    cout << "Enter amount of medicine for 3 type of medicine: \n";
    cout << "Medicine 1: ";
    cin >> medicine1amount;
    if (medicine1amount <= stockmed1) {
        totalmed1 += medicine1amount;
        stockmed1 -= medicine1amount;
    } else {
        cout << "Sorry, Medicine 1 is sold out.\n";
        medicine1amount = 0;
    }
    cout << "Medicine 2: ";
    cin >> medicine2amount;
    if (medicine2amount <= stockmed2) {
        totalmed2 += medicine2amount;
        stockmed2 -= medicine2amount;
    } else {
        cout << "Sorry, Medicine 2 is sold out.\n";
        medicine2amount = 0;
    }
    cout << "Medicine 3: ";
    cin >> medicine3amount;
    if (medicine3amount <= stockmed3) {
        totalmed3 += medicine3amount;
        stockmed3 -= medicine3amount;
    } else {
        cout << "Sorry, Medicine 3 is sold out.\n";
        medicine3amount = 0;
    }
    totalmed += medicine1amount + medicine2amount + medicine3amount;
    cout << "Choose payment method 1, 2, or 3: ";
    cin >> paymentmethod;
    cout << endl;
    printReceipt(totalsalesmed1, totalsalesmed2, totalsalesmed3, totalsales);
}

void Customer::printReceipt(double &totalsalesmed1, double &totalsalesmed2, double &totalsalesmed3, double &totalsales) {
    receipt.setSalesMed(medicine1amount, medicine2amount, medicine3amount);
    cout << "Receipt:\n";
    cout << "Customer Name: " << name << endl;
    cout << "Medicine 1\t" << medicine1amount << "\t" << receipt.getSalesMed1() << endl;
    cout << "Medicine 2\t" << medicine2amount << "\t" << receipt.getSalesMed2() << endl;
    cout << "Medicine 3\t" << medicine3amount << "\t" << receipt.getSalesMed3() << endl;
    cout << "Total Cost: RM" << receipt.getTotalSales() << endl;
    totalsalesmed1 += receipt.getSalesMed1();
    totalsalesmed2 += receipt.getSalesMed2();
    totalsalesmed3 += receipt.getSalesMed3();
    totalsales += receipt.getTotalSales();
}

std::string Customer::getName() {
    return name;
}

int Customer::getMedicine1Amount() {
    return medicine1amount;
}

int Customer::getMedicine2Amount() {
    return medicine2amount;
}

int Customer::getMedicine3Amount() {
    return medicine3amount;
}

int Customer::getPaymentMethod() {
    return paymentmethod;
}*/
