#include <iostream>
using namespace std;

int main() {
    float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
    float usdToPhp, poundToPhp;
    float totalCostPHP;

    cout << "======< Peejay_Rocas_Sari-Sari_Store >======" << endl;
    cout << "Enter the Price of sugar (USD): ";
    cin >> sugarPriceUSD;
    cout << "Enter the Price of rice (pounds): ";
    cin >> ricePricePound;
    cout << "Enter the Price of sardines (pounds): ";
    cin >> sardinesPricePound;
    cout << "Enter the Price of coffee (USD): ";
    cin >> coffeePriceUSD;
    cout << "Enter the Price of milk (USD): ";
    cin >> milkPriceUSD;
    cout << "=============================================================" << endl;
    cout << "Enter the Quantity of sugar: ";
    cin >> sugarQty;
    cout << "Enter the Quantity of rice (pounds): ";
    cin >> riceQty;
    cout << "Enter the Quantity of sardines (pounds): ";
    cin >> sardinesQty;
    cout << "Enter the Quantity of coffee: ";
    cin >> coffeeQty;
    cout << "Enter the Quantity of milk: ";
    cin >> milkQty;
    cout << "==============================================================" << endl;
    cout << "Enter the cost of one dollar in pesos: ";
    cin >> usdToPhp;
    cout << "Enter the cost of one pound in pesos: ";
    cin >> poundToPhp;
    cout << "==============================================================" << endl;

    // Calculate individual costs
    float sugarCostPHP = sugarPriceUSD * sugarQty * usdToPhp;
    float riceCostPHP = ricePricePound * riceQty * poundToPhp;
    float sardinesCostPHP = sardinesPricePound * sardinesQty * poundToPhp;
    float coffeeCostPHP = coffeePriceUSD * coffeeQty * usdToPhp;
    float milkCostPHP = milkPriceUSD * milkQty * usdToPhp;

    // Calculate total cost
    totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;

    cout << "Total Amount to be Paid (PHP): " << totalCostPHP << endl;
    return 0;
}
