//#include<iostream>
#include"Receipt.hpp"
//using namespace std;

Receipt::Receipt(): salesmed1(0), salesmed2(0), salesmed3(0), totalsales(0){}
Receipt::~Receipt(){}
void Receipt::setSalesMed(int medicine1amount,int medicine2amount,int medicine3amount){
    salesmed1=medicine1amount*10;
    salesmed2=medicine2amount*15;
    salesmed3=medicine3amount*20;
    totalsales=salesmed1+salesmed2+salesmed3;
}
double Receipt::getTotalSales() const { return totalsales; }
double Receipt::getSalesMed1() const { return salesmed1; }
double Receipt::getSalesMed2() const { return salesmed2; }
double Receipt::getSalesMed3() const { return salesmed3; }

