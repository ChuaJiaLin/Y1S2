#include<iostream>
//#include<vector>
#include"Admin.hpp"
#include"Customer.hpp"
using namespace std;

/*void Admin::addCustomer(Customer* customer) {
    customers.push_back(customer);
}*/
Admin::Admin() : password("CP123"){}
Admin::~Admin(){}
bool Admin::checkPassword(string input){
            if(input==password){
                return true;
            }
            else{
                return false;
            }
        }
void Admin:: addStock(int &stockmed1,int &stockmed2,int &stockmed3){
            int m1,m2,m3;
            cout<<"Current Stock:\n";
            cout<<"Fever Medicine: "<<stockmed1<<endl;
            cout<<"Flu Medicine: "<<stockmed2<<endl;
            cout<<"Cough Medicine: "<<stockmed3<<endl;
            cout<<"Add Stock:\n";
            cout<<"Fever Medicine: ";
            cin>>m1;
            cout<<"Flu Medicine: ";
            cin>>m2;
            cout<<"Cough Medicine: ";
            cin>>m3;
            stockmed1+=m1;
            stockmed2+=m2;
            stockmed3+=m3;
            cout<<"Current Stock:\n";
            cout<<"Fever Medicine: "<<stockmed1<<endl;
            cout<<"Flu Medicine: "<<stockmed2<<endl;
            cout<<"Cough Medicine: "<<stockmed3<<endl;
        }


void Admin::selectOperation(int &stockmed1,int &stockmed2,int &stockmed3,int &totalmed1,int &totalmed2,int &totalmed3,int &totalmed,double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales){
    int operation;
    do{
    cout<<"1....\n2....\n3....\n4. Exit to main page\nSelect operation: ";
    cin>>operation;
    switch(operation){
        
        case 1: printTask1(totalmed1,totalmed2,totalmed3,totalmed);
                break;
       
        case 2: printTask2(totalsalesmed1,totalsalesmed2,totalsalesmed3,totalsales);
                break;
        case 3: addStock(stockmed1,stockmed2,stockmed3);
                break;
        case 4: break;
    }
    }while(operation!=4);
}


void Admin::printTask1(int &totalmed1,int &totalmed2,int &totalmed3,int &totalmed){
    cout<<"Task 1:\n";
    cout<<"Medicine 1: "<<totalmed1<<endl;
    cout<<"Medicine 2: "<<totalmed2<<endl;
    cout<<"Medicine 3: "<<totalmed3<<endl;
    cout<<"Total: "<<totalmed<<endl;
}
        
void Admin::printTask2(double &totalsalesmed1,double &totalsalesmed2,double &totalsalesmed3,double &totalsales){
    cout<<"Task 2:\n";
    cout<<"Sales Medicine 1: RM"<<totalsalesmed1<<endl;
    cout<<"Sales Medicine 2: RM"<<totalsalesmed2<<endl;
    cout<<"Sales Medicine 3: RM"<<totalsalesmed3<<endl;
    cout<<"Total Sales: RM"<<totalsales<<endl;
}
