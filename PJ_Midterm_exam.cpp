#include <iostream>

using namespace std;

int main () {
	
    float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float usdToPhp, poundToPhp;
	float totalCostPHP
	
	cout <<"======< Peejay_Rocas_Sari-Sari_Store >======/n ";
	cout << "Enter the Price of sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter the Price of rice: ";
	cin >> ricePricePound;
	cout << "Enter the Pound of sardines: ";
	cin >> sardinesPricePound;
	cout << "Enter the Price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Enter the Price of milk: ";
	cin >> milkPriceUSD;
	
	cout << "Enter the Quantity of sugar: ";
	cin >> sugarQty;
	cout << "Enter the Quantity of rice: ";
	cin >> riceQty;
	cout << "Enter the Quantity of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the Quantity of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the Quantity of milk: ";
	cin >> milkQty;
	
	cout << "The cost of one dollar in pesos:";
	cin >> usdToPhp;
	cout << "The cost of one pound in pesos:";
	cin >> poundToPhp
	
	
        totalCostPHP = (sugarPriceUSD * sugarQty * usdToPhp) +
	               (ricePricePound * riceQty * poundToPhp) +
		       (sardinesPricePound * sardinesQty * poundToPhp) +
		       (coffeePriceUSD * coffeeQty * usdToPhp) +
		       (milkPriceUSD * milkQty * usdToPhp);	
return 0;
}
