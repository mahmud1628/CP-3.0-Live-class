#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int square_root =(int) sqrt(n);
    int squared_number = square_root * square_root;

    if(squared_number == n) cout << "Yes" << endl;
    else cout << "No" << endl;
}

/*
    Input : integer number
    Output : Yes, or NO , If the number is a perfect square then print Yes, Otherwise No
    Example:
    Input : 25 => sqrt(25) = 5 => 5*5 = 25
    Output : Yes

    Input: 20 => sqrt(20) = 4.**** => (int) 4 => 4 * 4 = 16
    Output : No
*/