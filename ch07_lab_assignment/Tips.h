#ifndef TIPS_H
#define TIPS_H

class Tips
{
    private:
        double taxRate;
    public:
        Tips(double);
        double computeTip(double, double);
};

#endif