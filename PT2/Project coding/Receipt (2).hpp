#ifndef RECEIPT_HPP
#define RECEIPT_HPP
class Receipt{
    private:
        double salesmed1,salesmed2,salesmed3,totalsales;
    public:
        Receipt();
        ~Receipt();
        void setSalesMed(int medicine1amount,int medicine2amount,int medicine3amount);
        double getTotalSales() const;
        double getSalesMed1() const;
        double getSalesMed2() const;
        double getSalesMed3() const;
        
};
#endif