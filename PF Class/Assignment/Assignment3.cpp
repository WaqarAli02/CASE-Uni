#include<iostream>
using namespace std;

int main() {
    int q1 = 0, q2 = 0, q3 = 0, lp, pay_met, typ_cus, cou_dis = 1, stk1 = 5, stk2 = 6, stk3 = 8;
    float dis = 0, tax;
    double tot, dftot, totafpay;
    string coupon, region;

    cout << "Enter Quantity of Cloths(20 $): ";
    cin >> q1;
    if (q1 > stk1) {
        cout << "Sorry, we only have " << stk1 << " cloths available.\n";
        q1 = 0;
    }

    cout << "\nEnter Quantity of Furnitures(100 $): ";
    cin >> q2;
    if (q2 > stk2) {
        cout << "Sorry, we only have " << stk2 << " furniture items available.\n";
        q2 = 0;
    }

    cout << "\nEnter Quantity of Food(15$): ";
    cin >> q3;
    if (q3 > stk3) {
        cout << "Sorry, we only have " << stk3 << " food items available.\n";
        q3 = 0; 
    }

    cout << "\nEnter Customer Type(1 For Regular, 2 for VIP): ";
    cin >> typ_cus;

    cout << "Enter Your Coupon: ";
    cin >> coupon;

    cout << "Enter Your Region(B17, D17, E11): ";
    cin >> region;

   
    if (region == "B17") {
        cout << "You Will Pay 5% Tax";
        tax = 0.05;
    } else if (region == "D17") {
        cout << "You Will Pay 10% Tax";
        tax = 0.10;
    } else if (region == "E11") {
        cout << "You Will Pay 8% Tax";
        tax = 0.08;
    }

  
    cou_dis = (coupon == "SAVE10") ? 0.10 : 0;

    cout << "\nEnter Payment Method (1 For Card +2%, 2 for Paypal +3%, 3 cash +0): ";
    cin >> pay_met;

    
    tot = (q1 * 20) + (q2 * 100) + (q3 * 15);

    cout << "Total Will Be: " << tot;

  
    dis = (tot > 200) ? tot / 100 * 10 : 0;
    typ_cus = (typ_cus == 2) ? dis * 0.05 : 0;

    if (typ_cus == 2) {
        cout << "\nYour Discount as a VIP is Applied";
    }

    cout << "\nDiscount Will be: " << dis - cou_dis;

    cout << "\nTotal After Discount: " << tot - dis;

    dftot = tot - dis;

    
    if (dftot > 150) {
        cout << "\nYou Got Free Shipping";
    } else {
        dftot += 15;
        cout << "\nWith Shipping Fee: " << dftot;
    }

    
    if (dftot > 300) {
        cout << " And 50 Loyalty Points" << endl;
        lp = 50;
    } else {
        cout << " And 20 Loyalty Points" << endl;
        lp = 20;
    }

    totafpay = dftot;
    
    if (pay_met == 1) {
        totafpay += (dftot / 100 * 2);
        cout << "Your Total After Addition of Payment Method: " << totafpay;
    } else if (pay_met == 2) {
        totafpay += (dftot / 100 * 3);
        cout << "Your Total After Addition of Payment Method: " << totafpay;
    } else {
        cout << "Your Total After Payment: " << dftot;
    }

   
    cout << "\nYour Sale Tax Will be: " << totafpay * tax;
    cout << "\nTotal Will be: " << totafpay - (totafpay * tax);

    return 0;
}
