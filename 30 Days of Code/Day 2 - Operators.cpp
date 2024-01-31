#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    double meal_cost, tip, tax, total;
    int tip_percent;
    int tax_percent;
    
    cin >> meal_cost >> tip_percent >> tax_percent;
    
    tip = (meal_cost/100) * tip_percent;
    tax = ( (double)tax_percent/100) * meal_cost;
    
    total = meal_cost + tip + tax;
    
    cout << round(total); 
     
    return 0;
}

