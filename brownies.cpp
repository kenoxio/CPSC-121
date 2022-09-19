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
    cout << "To make our fundraising goal of $" << fundraisinggoalUSD << ", we would need to sell "  << totalcookiesUSD << " of Cookies at $2.50" << endl;
    cout << "To make our fundraising goal of $" << fundraisinggoalUSD << ", we would need to sell " << totalbrowniesUSD << " of Brownies at $3.75" << endl;

    cout << "**************************************************************************************" << endl;
    double cookiessoldUSD = 30;
    double neededfundsUSD = fundraisinggoalUSD - (cookiessoldUSD * cookiesUSD);
    double browniesneededUSD = neededfundsUSD / browniesUSD;
    cout << "To make our fundraising goal of " << fundraisinggoalUSD << ", when we already sold " << cookiessoldUSD << " cookies at $" << cookiesUSD << ", we would need to sell " << browniesneededUSD << " brownies at $" << browniesUSD << "." << endl;
    cout << "**************************************************************************************" << endl;

    double cookiesingredientUSD = 0.10;
    double browniesingredientUSD = 0.17;
    double cookiessoldUSD2 = 43;
    double browniessoldUSD = 63; 
    double profitcookies = (cookiesUSD * cookiessoldUSD2) - (cookiesingredientUSD * cookiessoldUSD2);
    double profitbrownies = (browniesUSD * browniessoldUSD) - (browniesingredientUSD * browniessoldUSD);
    double totalprofit = profitbrownies + profitcookies;

    cout << "We made a total of $" << totalprofit << " by selling " << cookiessoldUSD2 << " cookies at $" << cookiesUSD << "0 and " << browniesneededUSD << " brownies at $" << browniesUSD << " when ingredients cost $" << cookiesingredientUSD << "0 for cookies and $" << browniesingredientUSD << " for brownies." << endl;

}