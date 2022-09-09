#include <iostream>
/*
 * Print store name
 * Ask for item and quantity
 * Item #'s cost * quantity
 * Subtotal sum ^^^^^^^^^^
 * Tax = (subtotal * tax)
 * Total = (subtotal + tax)
 * Print receipt
 */

int main(){ 
    // Allocate and set line items and their costs
    // double == float (but better) - higher percision
        // Line item #1 - Apples - $3.78
        double applesCostUSD = 3.78;
        // Line item #2 - Oranges - $8.99
        double orangesCostUSD = 8.99;
        // Line item #3 - Milk - $3.89
        double milkCostUSD = 3.89;
    // Allocate subtotal and total
        double subtotalUSD = 0.0;
        double totalUSD = 0.0;
    // Allocate tax rate
        double salesTaxRatePcnt = 8.3;
        double salesTaxRate = salesTaxRatePcnt / 100; 
    // Calculate subtotal
        subtotalUSD = applesCostUSD + orangesCostUSD + milkCostUSD;
    // Calculate tax cost
        double taxCostUSD = salesTaxRate * subtotalUSD;
    // Calculate total
        totalUSD = taxCostUSD + subtotalUSD;
    // Print out receipt
        std::cout << "***************************************************************" << std::endl;
        std::cout << "Company name: The Giant Poop Factory Grocery Industrial Complex" << std::endl;
        std::cout << "***************************************************************" << std::endl;
        std::cout << "|Item Name                        Cost                        |" << std::endl;
        std::cout << "|Apples:                          $" << applesCostUSD << "                       |" << std::endl;
        std::cout << "|Oranges:                         $" << orangesCostUSD << "                       |" <<  std::endl;
        std::cout << "|Milk:                            $" << milkCostUSD << "                       |" << std::endl;
        std::cout << "|Subtotal:                        $" << subtotalUSD << "                      |" << std::endl;
        std::cout << "|Tax:                             $" << taxCostUSD << "                    |" << std::endl;
        std::cout << "|Total:                           $" << totalUSD << "                    |" << std::endl;
        std::cout << "---------------------Come shop here again!---------------------" << std::endl;
}

