/* brownies and cookies fundraising goal. 
 * fundraising goal - 300
 * cookies - 2.50
 * brownies 3.75
 */
#include <iostream>
using namespace std;

int main(){
    // create variables
    double fundraisinggoalUSD = 300.00;
    cout << "Fundraising goal: $" <<fundraisinggoalUSD << endl;
    double cookiesUSD = 2.50;
    cout << "Cost of Cookies: $" << cookiesUSD << "0" << endl;
    double browniesUSD = 3.75;
    cout << "Cost of Brownies: $" << browniesUSD << endl;
    // variables and their values
    // part 1, find # of cookies till fundraising goal hit, and # brownies
    double totalcookiesUSD = fundraisinggoalUSD / cookiesUSD;
    // cout << totalcookiesUSD << std::endl;
    double totalbrowniesUSD = fundraisinggoalUSD / browniesUSD;
    // cout << totalbrowniesUSD << std::endl;
    cout << "Number of Cookies needed to reach fundraising goal: " << totalcookiesUSD << endl;
    cout << "Number of Brownies needed to reach fundraising goal: " << totalbrowniesUSD << endl;
}