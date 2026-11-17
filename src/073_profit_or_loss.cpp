// Profit or loss
// Compare cost price with selling price.

#include <iostream>
using namespace std;

int main() {
    int costPrice, sellingPrice;
    cout << "Cost price: ";
    cin >> costPrice;
    cout << "Selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        cout << "Profit is " << sellingPrice - costPrice << endl;
    } else if (costPrice > sellingPrice) {
        cout << "Loss is " << costPrice - sellingPrice << endl;
    } else {
        cout << "No profit, no loss" << endl;
    }
}
