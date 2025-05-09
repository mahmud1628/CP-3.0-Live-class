#include<iostream>
using namespace std;

class fraction {
    private:
        int num;
        int den;
    public:
        fraction(int n, int d) {
            num = n;
            den = d;
        }

        int getNumerator() {
            return num;
        }

        int getDenominator() {
            return den;
        }

        fraction add(fraction f) {
            
        }

        // overload the insertion operator to print the fraction as "numerator/denominator"



        // overload the less than ( < ) operator to comapare two fractions


        // overload the + operator to add two fractions



};

int main() {
    fraction f1(3,4); // 3/4
    fraction f2(4,5); // 4/5
    // cout << f1.getDenominator() << endl;
    // cout << f1.getNumerator() << endl;

    // cout << f1 << endl; // insertion operator must be overloaded

    // if(f1 < f2) { // < operator must be overloaded
    //     cout << f1 << endl;
    // }


    // fraction f3 = f1.add(f2); // 3/4 + 4/5  // complete the add function

    // fraction f4 = f1 + f2; // + operator must be overloaded

}