// defining the Tips class

#ifndef TIPS_H
#define TIPS_H

class Tips
{
    private:
        // the sales tax rate for the meal (between 0 and 1)
        double taxRate; 
    public:
        // constructor
        Tips(double);   
        // computes the required tip amount
        double computeTip(double, double); 
};

#endif